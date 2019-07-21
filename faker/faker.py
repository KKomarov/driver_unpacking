from __future__ import print_function

import sys


def main():
    if len(sys.argv) != 3:
        print('Usage: faker libname exports.txt')
        return
    libname = sys.argv[1]
    exports = sys.argv[2]

    defs = list()
    fake = list()
    defs.append('LIBRARY "{0}"'.format(libname))
    defs.append('EXPORTS')
    fake.append('#define FAKE(x) void* x() { return #x; }')

    with open(exports) as f:
        for line in f.readlines():
            s = line.strip().split()
            num = int(s[0], 16)
            name = s[-1]
            if name == 'N/A':
                defs.append('noname{0} @{0} NONAME'.format(num))
                fake.append('FAKE(noname{0})'.format(num))
            else:
                defs.append('{0}={0}_FAKE @{1}'.format(name, num))
                fake.append('FAKE({0}_FAKE)'.format(name))

    defs.append('')
    with open('%s.cpp' % libname, 'w') as f:
        f.write('\n'.join(fake))
    with open('%s.def' % libname, 'w') as f:
        f.write('\n'.join(defs))


main()
