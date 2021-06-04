#define FAKE(x) void* x() { return #x; }
FAKE(ExAcquireFastMutex_FAKE)
FAKE(ExReleaseFastMutex_FAKE)
FAKE(ExTryToAcquireFastMutex_FAKE)
FAKE(HalClearSoftwareInterrupt_FAKE)
FAKE(HalRequestClockInterrupt_FAKE)
FAKE(HalRequestSoftwareInterrupt_FAKE)
FAKE(HalSystemVectorDispatchEntry_FAKE)
FAKE(KeAcquireInStackQueuedSpinLock_FAKE)
FAKE(KeAcquireInStackQueuedSpinLockRaiseToSynch_FAKE)
FAKE(KeAcquireQueuedSpinLock_FAKE)
FAKE(KeAcquireQueuedSpinLockRaiseToSynch_FAKE)
FAKE(KeAcquireSpinLockRaiseToSynch_FAKE)
FAKE(KeReleaseInStackQueuedSpinLock_FAKE)
FAKE(KeReleaseQueuedSpinLock_FAKE)
FAKE(KeTryToAcquireQueuedSpinLock_FAKE)
FAKE(KeTryToAcquireQueuedSpinLockRaiseToSynch_FAKE)
FAKE(KfAcquireSpinLock_FAKE)
FAKE(KfLowerIrql_FAKE)
FAKE(KfRaiseIrql_FAKE)
FAKE(KfReleaseSpinLock_FAKE)
FAKE(HalAcpiGetTableEx_FAKE)
FAKE(HalAcquireDisplayOwnership_FAKE)
FAKE(HalAdjustResourceList_FAKE)
FAKE(HalAllProcessorsStarted_FAKE)
FAKE(HalAllocateAdapterChannel_FAKE)
FAKE(HalAllocateCommonBuffer_FAKE)
FAKE(HalAllocateCrashDumpRegisters_FAKE)
FAKE(HalAllocateHardwareCounters_FAKE)
FAKE(HalAssignSlotResources_FAKE)
FAKE(HalBeginSystemInterrupt_FAKE)
FAKE(HalBugCheckSystem_FAKE)
FAKE(HalCalibratePerformanceCounter_FAKE)
FAKE(HalConvertDeviceIdtToIrql_FAKE)
FAKE(HalDisableInterrupt_FAKE)
FAKE(HalDisplayString_FAKE)
FAKE(HalDmaAllocateCrashDumpRegistersEx_FAKE)
FAKE(HalDmaFreeCrashDumpRegistersEx_FAKE)
FAKE(HalEnableInterrupt_FAKE)
FAKE(HalEndSystemInterrupt_FAKE)
FAKE(HalEnumerateEnvironmentVariablesEx_FAKE)
FAKE(HalFlushCommonBuffer_FAKE)
FAKE(HalFreeCommonBuffer_FAKE)
FAKE(HalFreeHardwareCounters_FAKE)
FAKE(HalGetAdapter_FAKE)
FAKE(HalGetBusData_FAKE)
FAKE(HalGetBusDataByOffset_FAKE)
FAKE(HalGetEnvironmentVariable_FAKE)
FAKE(HalGetEnvironmentVariableEx_FAKE)
FAKE(HalGetInterruptTargetInformation_FAKE)
FAKE(HalGetInterruptVector_FAKE)
FAKE(HalGetMemoryCachingRequirements_FAKE)
FAKE(HalGetMessageRoutingInfo_FAKE)
FAKE(HalGetProcessorIdByNtNumber_FAKE)
FAKE(HalGetVectorInput_FAKE)
FAKE(HalHandleNMI_FAKE)
FAKE(HalInitSystem_FAKE)
FAKE(HalInitializeBios_FAKE)
FAKE(HalInitializeOnResume_FAKE)
FAKE(HalInitializeProcessor_FAKE)
FAKE(HalMakeBeep_FAKE)
FAKE(HalProcessorIdle_FAKE)
FAKE(HalQueryDisplayParameters_FAKE)
FAKE(HalQueryEnvironmentVariableInfoEx_FAKE)
FAKE(HalQueryMaximumProcessorCount_FAKE)
FAKE(HalQueryRealTimeClock_FAKE)
FAKE(HalReadDmaCounter_FAKE)
FAKE(HalRegisterDynamicProcessor_FAKE)
FAKE(HalRegisterErrataCallbacks_FAKE)
FAKE(HalReportResourceUsage_FAKE)
FAKE(HalRequestIpi_FAKE)
FAKE(HalRequestIpiSpecifyVector_FAKE)
FAKE(HalReturnToFirmware_FAKE)
FAKE(HalSetBusData_FAKE)
FAKE(HalSetBusDataByOffset_FAKE)
FAKE(HalSetDisplayParameters_FAKE)
FAKE(HalSetEnvironmentVariable_FAKE)
FAKE(HalSetEnvironmentVariableEx_FAKE)
FAKE(HalSetProfileInterval_FAKE)
FAKE(HalSetRealTimeClock_FAKE)
FAKE(HalSetTimeIncrement_FAKE)
FAKE(HalStartDynamicProcessor_FAKE)
FAKE(HalStartNextProcessor_FAKE)
FAKE(HalStartProfileInterrupt_FAKE)
FAKE(HalStopProfileInterrupt_FAKE)
FAKE(HalTranslateBusAddress_FAKE)
FAKE(IoFlushAdapterBuffers_FAKE)
FAKE(IoFreeAdapterChannel_FAKE)
FAKE(IoFreeMapRegisters_FAKE)
FAKE(IoMapTransfer_FAKE)
FAKE(IoReadPartitionTable_FAKE)
FAKE(IoSetPartitionInformation_FAKE)
FAKE(IoWritePartitionTable_FAKE)
FAKE(KdComPortInUse_FAKE)
FAKE(KdHvComPortInUse_FAKE)
FAKE(KeAcquireSpinLock_FAKE)
FAKE(KeFlushWriteBuffer_FAKE)
FAKE(KeGetCurrentIrql_FAKE)
FAKE(KeLowerIrql_FAKE)
FAKE(KeQueryPerformanceCounter_FAKE)
FAKE(KeRaiseIrql_FAKE)
FAKE(KeRaiseIrqlToDpcLevel_FAKE)
FAKE(KeRaiseIrqlToSynchLevel_FAKE)
FAKE(KeReleaseSpinLock_FAKE)
FAKE(KeStallExecutionProcessor_FAKE)
FAKE(READ_PORT_BUFFER_UCHAR_FAKE)
FAKE(READ_PORT_BUFFER_ULONG_FAKE)
FAKE(READ_PORT_BUFFER_USHORT_FAKE)
FAKE(READ_PORT_UCHAR_FAKE)
FAKE(READ_PORT_ULONG_FAKE)
FAKE(READ_PORT_USHORT_FAKE)
FAKE(WRITE_PORT_BUFFER_UCHAR_FAKE)
FAKE(WRITE_PORT_BUFFER_ULONG_FAKE)
FAKE(WRITE_PORT_BUFFER_USHORT_FAKE)
FAKE(WRITE_PORT_UCHAR_FAKE)
FAKE(WRITE_PORT_ULONG_FAKE)
FAKE(WRITE_PORT_USHORT_FAKE)
FAKE(x86BiosAllocateBuffer_FAKE)
FAKE(x86BiosCall_FAKE)
FAKE(x86BiosFreeBuffer_FAKE)
FAKE(x86BiosReadMemory_FAKE)
FAKE(x86BiosWriteMemory_FAKE)