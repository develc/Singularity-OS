;
; Warning: This .inc file is generated automatically by Bartok.
;          If you want to change its contents, edit the source .cs files.
;

ifdef SINGULARITY_LOADER
Null TYPEDEF uintptr
else
Null TYPEDEF PTR void
endif

ifdef SINGULARITY_LOADER
PTR_bartok_char TYPEDEF uintptr
else
PTR_bartok_char TYPEDEF PTR bartok_char
endif

ifdef SINGULARITY_LOADER
PTR_bool TYPEDEF uintptr
else
PTR_bool TYPEDEF PTR bool
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Bartok_Runtime_Constants TYPEDEF uintptr
else
PTR_Class_Microsoft_Bartok_Runtime_Constants TYPEDEF PTR Class_Microsoft_Bartok_Runtime_Constants
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Bartok_Runtime_PostHeader TYPEDEF uintptr
else
PTR_Struct_Microsoft_Bartok_Runtime_PostHeader TYPEDEF PTR Struct_Microsoft_Bartok_Runtime_PostHeader
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Bartok_Runtime_StructuralType TYPEDEF uintptr
else
PTR_Struct_Microsoft_Bartok_Runtime_StructuralType TYPEDEF PTR Struct_Microsoft_Bartok_Runtime_StructuralType
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_AppRuntime TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_AppRuntime TYPEDEF PTR Class_Microsoft_Singularity_AppRuntime
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_DebugStub TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_DebugStub TYPEDEF PTR Class_Microsoft_Singularity_DebugStub
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Eventing_ArrayType TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Eventing_ArrayType TYPEDEF PTR Struct_Microsoft_Singularity_Eventing_ArrayType
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_Controller TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_Controller TYPEDEF PTR Class_Microsoft_Singularity_Eventing_Controller
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_DataType TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_DataType TYPEDEF PTR Class_Microsoft_Singularity_Eventing_DataType
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_EventDescriptor TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_EventDescriptor TYPEDEF PTR Class_Microsoft_Singularity_Eventing_EventDescriptor
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_EventingStorage TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_EventingStorage TYPEDEF PTR Class_Microsoft_Singularity_Eventing_EventingStorage
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_EventSource TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_EventSource TYPEDEF PTR Class_Microsoft_Singularity_Eventing_EventSource
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_GlobalStorage TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_GlobalStorage TYPEDEF PTR Class_Microsoft_Singularity_Eventing_GlobalStorage
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_LocalController TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_LocalController TYPEDEF PTR Class_Microsoft_Singularity_Eventing_LocalController
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_MemoryStorage TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_MemoryStorage TYPEDEF PTR Class_Microsoft_Singularity_Eventing_MemoryStorage
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Eventing_QualityOfService TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Eventing_QualityOfService TYPEDEF PTR Struct_Microsoft_Singularity_Eventing_QualityOfService
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_QuerySession TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_QuerySession TYPEDEF PTR Class_Microsoft_Singularity_Eventing_QuerySession
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Eventing_SystemControllerProxy TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Eventing_SystemControllerProxy TYPEDEF PTR Class_Microsoft_Singularity_Eventing_SystemControllerProxy
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_GCProfilerLogger TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_GCProfilerLogger TYPEDEF PTR Class_Microsoft_Singularity_GCProfilerLogger
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer TYPEDEF PTR Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Io_IoPort TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Io_IoPort TYPEDEF PTR Class_Microsoft_Singularity_Io_IoPort
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_CpuRecord TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_CpuRecord TYPEDEF PTR Struct_Microsoft_Singularity_Isal_CpuRecord
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Isal_Isa TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Isal_Isa TYPEDEF PTR Class_Microsoft_Singularity_Isal_Isa
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Isal_Isa_ICallback TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Isal_Isa_ICallback TYPEDEF PTR Class_Microsoft_Singularity_Isal_Isa_ICallback
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_Isa_Type TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_Isa_Type TYPEDEF PTR Struct_Microsoft_Singularity_Isal_Isa_Type
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_CR0 TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_CR0 TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_CR0
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_CR3 TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_CR3 TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_CR3
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_CR4 TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_CR4 TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_CR4
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_DescriptorTable TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_DescriptorTable TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_DescriptorTable
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_EFlags TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_EFlags TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_EFlags
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_EFlagsShift TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_EFlagsShift TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_EFlagsShift
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_EVectors TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_EVectors TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_EVectors
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdte TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdte TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_Gdte
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdte64 TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdte64 TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_Gdte64
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdtp TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_Gdtp TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_Gdtp
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_MmxContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_MmxContext TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_MmxContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_PE TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_PE TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_PE
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_TSS TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_TSS TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_TSS
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_IX_uint128 TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_IX_uint128 TYPEDEF PTR Struct_Microsoft_Singularity_Isal_IX_uint128
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_SpillContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_SpillContext TYPEDEF PTR Struct_Microsoft_Singularity_Isal_SpillContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_ThreadRecord TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_ThreadRecord TYPEDEF PTR Struct_Microsoft_Singularity_Isal_ThreadRecord
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Memory_PhysicalAddress TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Memory_PhysicalAddress TYPEDEF PTR Struct_Microsoft_Singularity_Memory_PhysicalAddress
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Memory_Stacks TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Memory_Stacks TYPEDEF PTR Class_Microsoft_Singularity_Memory_Stacks
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Monitoring TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Monitoring TYPEDEF PTR Class_Microsoft_Singularity_Monitoring
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Monitoring_LogEntry TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Monitoring_LogEntry TYPEDEF PTR Struct_Microsoft_Singularity_Monitoring_LogEntry
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_PrivilegedGate TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_PrivilegedGate TYPEDEF PTR Class_Microsoft_Singularity_PrivilegedGate
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Processor TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Processor TYPEDEF PTR Class_Microsoft_Singularity_Processor
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF PTR Struct_Microsoft_Singularity_ProcessorContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF PTR Struct_Microsoft_Singularity_ThreadContext
endif

ifdef SINGULARITY_LOADER
PTR_Class_Microsoft_Singularity_Tracing TYPEDEF uintptr
else
PTR_Class_Microsoft_Singularity_Tracing TYPEDEF PTR Class_Microsoft_Singularity_Tracing
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_V1_Processes_ProcessHandle TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_V1_Processes_ProcessHandle TYPEDEF PTR Struct_Microsoft_Singularity_V1_Processes_ProcessHandle
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_V1_Services_DebugService TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_V1_Services_DebugService TYPEDEF PTR Struct_Microsoft_Singularity_V1_Services_DebugService
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_V1_Services_PlatformService TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_V1_Services_PlatformService TYPEDEF PTR Struct_Microsoft_Singularity_V1_Services_PlatformService
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_V1_Services_ProcessService TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_V1_Services_ProcessService TYPEDEF PTR Struct_Microsoft_Singularity_V1_Services_ProcessService
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_V1_Services_StackService TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_V1_Services_StackService TYPEDEF PTR Struct_Microsoft_Singularity_V1_Services_StackService
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Buffer TYPEDEF uintptr
else
PTR_Class_System_Buffer TYPEDEF PTR Class_System_Buffer
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_Decimal TYPEDEF uintptr
else
PTR_Struct_System_Decimal TYPEDEF PTR Struct_System_Decimal
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_DivideByZeroException TYPEDEF uintptr
else
PTR_Class_System_DivideByZeroException TYPEDEF PTR Class_System_DivideByZeroException
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Exception TYPEDEF uintptr
else
PTR_Class_System_Exception TYPEDEF PTR Class_System_Exception
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_GC TYPEDEF uintptr
else
PTR_Class_System_GC TYPEDEF PTR Class_System_GC
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_GCs_CalleeSaveRegisters TYPEDEF uintptr
else
PTR_Struct_System_GCs_CalleeSaveRegisters TYPEDEF PTR Struct_System_GCs_CalleeSaveRegisters
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_GCs_CallStack TYPEDEF uintptr
else
PTR_Class_System_GCs_CallStack TYPEDEF PTR Class_System_GCs_CallStack
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_GCs_CallStack_TransitionRecord TYPEDEF uintptr
else
PTR_Struct_System_GCs_CallStack_TransitionRecord TYPEDEF PTR Struct_System_GCs_CallStack_TransitionRecord
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_GCs_PageTable TYPEDEF uintptr
else
PTR_Class_System_GCs_PageTable TYPEDEF PTR Class_System_GCs_PageTable
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_GCs_Transitions TYPEDEF uintptr
else
PTR_Class_System_GCs_Transitions TYPEDEF PTR Class_System_GCs_Transitions
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Math TYPEDEF uintptr
else
PTR_Class_System_Math TYPEDEF PTR Class_System_Math
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_NullReferenceException TYPEDEF uintptr
else
PTR_Class_System_NullReferenceException TYPEDEF PTR Class_System_NullReferenceException
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Number TYPEDEF uintptr
else
PTR_Class_System_Number TYPEDEF PTR Class_System_Number
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Object TYPEDEF uintptr
else
PTR_Class_System_Object TYPEDEF PTR Class_System_Object
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_OverflowException TYPEDEF uintptr
else
PTR_Class_System_OverflowException TYPEDEF PTR Class_System_OverflowException
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_RuntimeType TYPEDEF uintptr
else
PTR_Class_System_RuntimeType TYPEDEF PTR Class_System_RuntimeType
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_SchedulerTime TYPEDEF uintptr
else
PTR_Struct_System_SchedulerTime TYPEDEF PTR Struct_System_SchedulerTime
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_StackOverflowException TYPEDEF uintptr
else
PTR_Class_System_StackOverflowException TYPEDEF PTR Class_System_StackOverflowException
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_String TYPEDEF uintptr
else
PTR_Class_System_String TYPEDEF PTR Class_System_String
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_Threading_SpinLock TYPEDEF uintptr
else
PTR_Struct_System_Threading_SpinLock TYPEDEF PTR Struct_System_Threading_SpinLock
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Threading_Thread TYPEDEF uintptr
else
PTR_Class_System_Threading_Thread TYPEDEF PTR Class_System_Threading_Thread
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_Type TYPEDEF uintptr
else
PTR_Class_System_Type TYPEDEF PTR Class_System_Type
endif

ifdef SINGULARITY_LOADER
PTR_Class_System_VTable TYPEDEF uintptr
else
PTR_Class_System_VTable TYPEDEF PTR Class_System_VTable
endif

ifdef SINGULARITY_LOADER
PTR_ClassVector_bartok_char TYPEDEF uintptr
else
PTR_ClassVector_bartok_char TYPEDEF PTR ClassVector_bartok_char
endif

ifdef SINGULARITY_LOADER
PTR_ClassVector_Class_System_String TYPEDEF uintptr
else
PTR_ClassVector_Class_System_String TYPEDEF PTR ClassVector_Class_System_String
endif

ifdef SINGULARITY_LOADER
PTR_ClassVector_int32 TYPEDEF uintptr
else
PTR_ClassVector_int32 TYPEDEF PTR ClassVector_int32
endif

ifdef SINGULARITY_LOADER
PTR_ClassVector_int64 TYPEDEF uintptr
else
PTR_ClassVector_int64 TYPEDEF PTR ClassVector_int64
endif

ifdef SINGULARITY_LOADER
PTR_ClassVector_uint8 TYPEDEF uintptr
else
PTR_ClassVector_uint8 TYPEDEF PTR ClassVector_uint8
endif

ifdef SINGULARITY_LOADER
PTR_float32 TYPEDEF uintptr
else
PTR_float32 TYPEDEF PTR float32
endif

ifdef SINGULARITY_LOADER
PTR_float64 TYPEDEF uintptr
else
PTR_float64 TYPEDEF PTR float64
endif

ifdef SINGULARITY_LOADER
PTR_int32 TYPEDEF uintptr
else
PTR_int32 TYPEDEF PTR int32
endif

ifdef SINGULARITY_LOADER
PTR_int32 TYPEDEF uintptr
else
PTR_int32 TYPEDEF PTR int32
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Eventing_ArrayType TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Eventing_ArrayType TYPEDEF PTR Struct_Microsoft_Singularity_Eventing_ArrayType
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_CpuRecord TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_CpuRecord TYPEDEF PTR Struct_Microsoft_Singularity_Isal_CpuRecord
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Isal_ThreadRecord TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Isal_ThreadRecord TYPEDEF PTR Struct_Microsoft_Singularity_Isal_ThreadRecord
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Memory_PhysicalAddress TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Memory_PhysicalAddress TYPEDEF PTR Struct_Microsoft_Singularity_Memory_PhysicalAddress
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_Monitoring_LogEntry TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_Monitoring_LogEntry TYPEDEF PTR Struct_Microsoft_Singularity_Monitoring_LogEntry
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF PTR Struct_Microsoft_Singularity_ProcessorContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ProcessorContext TYPEDEF PTR Struct_Microsoft_Singularity_ProcessorContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF PTR Struct_Microsoft_Singularity_ThreadContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF uintptr
else
PTR_Struct_Microsoft_Singularity_ThreadContext TYPEDEF PTR Struct_Microsoft_Singularity_ThreadContext
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_Decimal TYPEDEF uintptr
else
PTR_Struct_System_Decimal TYPEDEF PTR Struct_System_Decimal
endif

ifdef SINGULARITY_LOADER
PTR_Struct_System_GCs_CallStack_TransitionRecord TYPEDEF uintptr
else
PTR_Struct_System_GCs_CallStack_TransitionRecord TYPEDEF PTR Struct_System_GCs_CallStack_TransitionRecord
endif

ifdef SINGULARITY_LOADER
PTR_uint16 TYPEDEF uintptr
else
PTR_uint16 TYPEDEF PTR uint16
endif

ifdef SINGULARITY_LOADER
PTR_uint32 TYPEDEF uintptr
else
PTR_uint32 TYPEDEF PTR uint32
endif

ifdef SINGULARITY_LOADER
PTR_uint32 TYPEDEF uintptr
else
PTR_uint32 TYPEDEF PTR uint32
endif

ifdef SINGULARITY_LOADER
PTR_uint64 TYPEDEF uintptr
else
PTR_uint64 TYPEDEF PTR uint64
endif

ifdef SINGULARITY_LOADER
PTR_uint8 TYPEDEF uintptr
else
PTR_uint8 TYPEDEF PTR uint8
endif

ifdef SINGULARITY_LOADER
PTR_uintPtr TYPEDEF uintptr
else
PTR_uintPtr TYPEDEF PTR uintPtr
endif

ifdef SINGULARITY_LOADER
PTR_uintPtr TYPEDEF uintptr
else
PTR_uintPtr TYPEDEF PTR uintPtr
endif

ifdef SINGULARITY_LOADER
PTR_void TYPEDEF uintptr
else
PTR_void TYPEDEF PTR void
endif


Struct_Microsoft_Bartok_Runtime_PostHeader STRUCT 1
    _vtableObject               PTR_Class_System_VTable                ?  ;    0
    ; bartok layout dataSize = 4
Struct_Microsoft_Bartok_Runtime_PostHeader ENDS

.ERRE Struct_Microsoft_Bartok_Runtime_PostHeader._vtableObject EQ 0
.ERRE (SIZE Struct_Microsoft_Bartok_Runtime_PostHeader) EQ 4


Class_System_Object STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_Object ENDS

.ERRE Class_System_Object._postHeader EQ 0
.ERRE (SIZE Class_System_Object) EQ 4

externdef ??_7System_Object@@6B@:PTR_Class_System_VTable

Class_Microsoft_Bartok_Runtime_Constants STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    _arrayOfStride              PTR_ClassVector_int32                  ?  ;    4
    ; bartok layout dataSize = 8
Class_Microsoft_Bartok_Runtime_Constants ENDS

.ERRE Class_Microsoft_Bartok_Runtime_Constants._postHeader EQ 0
.ERRE Class_Microsoft_Bartok_Runtime_Constants._arrayOfStride EQ 4
.ERRE (SIZE Class_Microsoft_Bartok_Runtime_Constants) EQ 8

externdef ?c_StructuralTypeNames@Class_Microsoft_Bartok_Runtime_Constants@@2PAUClassVector_Class_System_String@@A:PTR_ClassVector_Class_System_String
externdef ??_7Microsoft_Bartok_Runtime_Constants@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Bartok_Runtime_StructuralType STRUCT 1
    __padding000                int8 4 dup (?)                            ;    0
    ; bartok layout dataSize = 4
Struct_Microsoft_Bartok_Runtime_StructuralType ENDS

.ERRE (SIZE Struct_Microsoft_Bartok_Runtime_StructuralType) EQ 4

Struct_Microsoft_Bartok_Runtime_StructuralType_Bool equ 04H
Struct_Microsoft_Bartok_Runtime_StructuralType_Char equ 05H
Struct_Microsoft_Bartok_Runtime_StructuralType_Float32 equ 0eH
Struct_Microsoft_Bartok_Runtime_StructuralType_Float64 equ 0fH
Struct_Microsoft_Bartok_Runtime_StructuralType_Int16 equ 07H
Struct_Microsoft_Bartok_Runtime_StructuralType_Int32 equ 08H
Struct_Microsoft_Bartok_Runtime_StructuralType_Int64 equ 09H
Struct_Microsoft_Bartok_Runtime_StructuralType_Int8 equ 06H
Struct_Microsoft_Bartok_Runtime_StructuralType_IntPtr equ 010H
Struct_Microsoft_Bartok_Runtime_StructuralType_Reference equ 01H
Struct_Microsoft_Bartok_Runtime_StructuralType_UInt16 equ 0bH
Struct_Microsoft_Bartok_Runtime_StructuralType_UInt32 equ 0cH
Struct_Microsoft_Bartok_Runtime_StructuralType_UInt64 equ 0dH
Struct_Microsoft_Bartok_Runtime_StructuralType_UInt8 equ 0aH
Struct_Microsoft_Bartok_Runtime_StructuralType_UIntPtr equ 011H

Class_Microsoft_Singularity_AppRuntime STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_AppRuntime ENDS

.ERRE Class_Microsoft_Singularity_AppRuntime._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_AppRuntime) EQ 4

externdef ?g_AppStart@Class_Microsoft_Singularity_AppRuntime@@SIHPAUClass_System_Type@@@Z:NEAR
externdef ?g_CallMain@Class_Microsoft_Singularity_AppRuntime@@SIHPAUClassVector_Class_System_String@@@Z:NEAR
externdef ?g_MainReturnsInt@Class_Microsoft_Singularity_AppRuntime@@SI_NXZ:NEAR
externdef ?g_SetDebuggerPresence@Class_Microsoft_Singularity_AppRuntime@@SIX_N@Z:NEAR
externdef ??_7Microsoft_Singularity_AppRuntime@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_DebugStub STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_DebugStub ENDS

.ERRE Class_Microsoft_Singularity_DebugStub._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_DebugStub) EQ 4

externdef ?g_Break@Class_Microsoft_Singularity_DebugStub@@SIXXZ:NEAR
externdef ??_7Microsoft_Singularity_DebugStub@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_Eventing_ArrayType STRUCT 1
    _Length                     uint16                                 ?  ;    0
    _ItemSize                   uint16                                 ?  ;    2
    _Type                       uint32                                 ?  ;    4
    _Buffer                     PTR_void                               ?  ;    8
    ; bartok layout dataSize = 12
Struct_Microsoft_Singularity_Eventing_ArrayType ENDS

.ERRE Struct_Microsoft_Singularity_Eventing_ArrayType._Length EQ 0
.ERRE Struct_Microsoft_Singularity_Eventing_ArrayType._ItemSize EQ 2
.ERRE Struct_Microsoft_Singularity_Eventing_ArrayType._Type EQ 4
.ERRE Struct_Microsoft_Singularity_Eventing_ArrayType._Buffer EQ 8
.ERRE (SIZE Struct_Microsoft_Singularity_Eventing_ArrayType) EQ 12


Class_Microsoft_Singularity_Eventing_Controller STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    ; bartok layout dataSize = 8
Class_Microsoft_Singularity_Eventing_Controller ENDS

.ERRE Class_Microsoft_Singularity_Eventing_Controller._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_Controller) EQ 8

externdef ?g_GetSharedSourceHandlesInternal@Class_Microsoft_Singularity_Eventing_Controller@@SI_NIPAPAUuintPtr@@00@Z:NEAR
Class_Microsoft_Singularity_Eventing_Controller_MonitoringInfo equ 02H
Class_Microsoft_Singularity_Eventing_Controller_TracingInfo equ 01H
externdef ??_7Microsoft_Singularity_Eventing_Controller@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_DataType STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Eventing_DataType ENDS

.ERRE Class_Microsoft_Singularity_Eventing_DataType._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_DataType) EQ 4

Class_Microsoft_Singularity_Eventing_DataType___arrayType equ 08000H
Class_Microsoft_Singularity_Eventing_DataType___byte equ 02H
Class_Microsoft_Singularity_Eventing_DataType___int equ 05H
Class_Microsoft_Singularity_Eventing_DataType___int16 equ 03H
Class_Microsoft_Singularity_Eventing_DataType___int32 equ 05H
Class_Microsoft_Singularity_Eventing_DataType___int64 equ 07H
Class_Microsoft_Singularity_Eventing_DataType___int8 equ 01H
Class_Microsoft_Singularity_Eventing_DataType___IntPtr equ 09H
Class_Microsoft_Singularity_Eventing_DataType___string equ 04000H
Class_Microsoft_Singularity_Eventing_DataType___szChar equ 02000H
Class_Microsoft_Singularity_Eventing_DataType___uint equ 06H
Class_Microsoft_Singularity_Eventing_DataType___uint16 equ 04H
Class_Microsoft_Singularity_Eventing_DataType___uint32 equ 06H
Class_Microsoft_Singularity_Eventing_DataType___uint64 equ 08H
Class_Microsoft_Singularity_Eventing_DataType___uint8 equ 02H
Class_Microsoft_Singularity_Eventing_DataType___UIntPtr equ 0aH
externdef ??_7Microsoft_Singularity_Eventing_DataType@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_EventDescriptor STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 20 dup (?)                           ;    4
    ; bartok layout dataSize = 24
Class_Microsoft_Singularity_Eventing_EventDescriptor ENDS

.ERRE Class_Microsoft_Singularity_Eventing_EventDescriptor._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_EventDescriptor) EQ 24

externdef ??_7Microsoft_Singularity_Eventing_EventDescriptor@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_EventingStorage STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 20 dup (?)                           ;    4
    ; bartok layout dataSize = 24
Class_Microsoft_Singularity_Eventing_EventingStorage ENDS

.ERRE Class_Microsoft_Singularity_Eventing_EventingStorage._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_EventingStorage) EQ 24

Class_Microsoft_Singularity_Eventing_EventingStorage_EVENTING_STORAGE_FLAGS_ENABLED equ 010000H
Class_Microsoft_Singularity_Eventing_EventingStorage_EVENTING_STORAGE_FLAGS_STACKTRACES equ 02H
externdef ??_7Microsoft_Singularity_Eventing_EventingStorage@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_EventSource STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 20 dup (?)                           ;    4
    ; bartok layout dataSize = 24
Class_Microsoft_Singularity_Eventing_EventSource ENDS

.ERRE Class_Microsoft_Singularity_Eventing_EventSource._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_EventSource) EQ 24

externdef ?g_LogSourceEntryImpl@Class_Microsoft_Singularity_Eventing_EventSource@@SIPAUuintPtr@@PAU2@I0PAEHHPAUStruct_Microsoft_Singularity_Eventing_ArrayType@@@Z:NEAR
externdef ?g_LogSourceEntryImpl@Class_Microsoft_Singularity_Eventing_EventSource@@SIPAUuintPtr@@PAU2@I0PAEH@Z:NEAR
Class_Microsoft_Singularity_Eventing_EventSource_CAPTURE_DEBUG_PRINT equ 02H
Class_Microsoft_Singularity_Eventing_EventSource_CAPTURE_STACK_TRACE equ 01H
Class_Microsoft_Singularity_Eventing_EventSource_ENABLE_ALL_MASK equ 0ffff0000H
externdef ??_7Microsoft_Singularity_Eventing_EventSource@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_GlobalStorage STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 20 dup (?)                           ;    4
    ; bartok layout dataSize = 24
Class_Microsoft_Singularity_Eventing_GlobalStorage ENDS

.ERRE Class_Microsoft_Singularity_Eventing_GlobalStorage._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_GlobalStorage) EQ 24

externdef ??_7Microsoft_Singularity_Eventing_GlobalStorage@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_LocalController STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 24 dup (?)                           ;    4
    ; bartok layout dataSize = 28
Class_Microsoft_Singularity_Eventing_LocalController ENDS

.ERRE Class_Microsoft_Singularity_Eventing_LocalController._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_LocalController) EQ 28

externdef ?g_AllocateSourceHandleImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAUClass_System_String@@@Z:NEAR
externdef ?g_FetchLocalStorage@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@XZ:NEAR
externdef ?g_GetControllerHandle@Class_Microsoft_Singularity_Eventing_LocalController@@SI_NPAPAUuintPtr@@0@Z:NEAR
externdef ?g_QueryNativeSourceInfo@Class_Microsoft_Singularity_Eventing_LocalController@@SI_NPAUuintPtr@@PAPAU2@PA_WG@Z:NEAR
externdef ?g_QuerySystemSources@Class_Microsoft_Singularity_Eventing_LocalController@@SIHPAPAUuintPtr@@G@Z:NEAR
externdef ?g_RegisterActiveSourceImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SIXPAUuintPtr@@00GG@Z:NEAR
externdef ?g_RegisterEnumDescriptorInternal@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAUClass_System_String@@G@Z:NEAR
externdef ?g_RegisterEventDescriptorInternal@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAUClass_System_String@@0@Z:NEAR
externdef ?g_RegisterEventFieldInternal@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAU2@PAUClass_System_String@@GG@Z:NEAR
externdef ?g_RegisterEventGenericFieldInternal@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAU2@PAUClass_System_String@@GG0@Z:NEAR
externdef ?g_RegisterSourceStorageImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SIXPAUuintPtr@@0I@Z:NEAR
externdef ?g_RegisterStorageImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SI_NPAUuintPtr@@@Z:NEAR
externdef ?g_RegisterValueDescriptorInternal@Class_Microsoft_Singularity_Eventing_LocalController@@SIPAUuintPtr@@PAU2@PAUClass_System_String@@_KE@Z:NEAR
externdef ?g_SetRepositoryStorage@Class_Microsoft_Singularity_Eventing_LocalController@@SI_NPAUuintPtr@@@Z:NEAR
externdef ?g_UnRegisterSourceImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SIXPAUuintPtr@@@Z:NEAR
externdef ?g_UnRegisterStorageImpl@Class_Microsoft_Singularity_Eventing_LocalController@@SIXPAUuintPtr@@@Z:NEAR
externdef ??_7Microsoft_Singularity_Eventing_LocalController@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_MemoryStorage STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 32 dup (?)                           ;    4
    ; bartok layout dataSize = 36
Class_Microsoft_Singularity_Eventing_MemoryStorage ENDS

.ERRE Class_Microsoft_Singularity_Eventing_MemoryStorage._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_MemoryStorage) EQ 36

externdef ?g_CreateQueryViewImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIPAUuintPtr@@PAU2@_N@Z:NEAR
externdef ?g_DeleteQueryViewImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIXPAUuintPtr@@@Z:NEAR
externdef ?g_GetMemoryStorageOveheadImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIIXZ:NEAR
externdef ?g_GetNextEntryImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIPAUuintPtr@@PAU2@PAPAU2@PAIPAEG@Z:NEAR
externdef ?g_MemoryStorageCreateImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIPAUuintPtr@@IPAEII@Z:NEAR
externdef ?g_MemoryStorageRegisterBufferImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIXPAUuintPtr@@PAEI@Z:NEAR
externdef ?g_WalkEventDescriptorImpl@Class_Microsoft_Singularity_Eventing_MemoryStorage@@SIPAUuintPtr@@PAU2@0PAG1PA_WG@Z:NEAR
externdef ??_7Microsoft_Singularity_Eventing_MemoryStorage@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_Eventing_QualityOfService STRUCT 1
    __padding000                int8 16 dup (?)                           ;    0
    ; bartok layout dataSize = 16
Struct_Microsoft_Singularity_Eventing_QualityOfService ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Eventing_QualityOfService) EQ 16

Struct_Microsoft_Singularity_Eventing_QualityOfService_ActiveEvents equ 03H
Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_BreakOnRecycle equ 040H
Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_DropNewEvents equ 020H
Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_GeneralFailure equ 010H
Struct_Microsoft_Singularity_Eventing_QualityOfService_PermanentEvents equ 01H
Struct_Microsoft_Singularity_Eventing_QualityOfService_RecyclableEvents equ 02H
Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeGlobal equ 01H
Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeLocal equ 02H
Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeUndefined equ 00H

Class_Microsoft_Singularity_Eventing_QuerySession STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 12 dup (?)                           ;    4
    ; bartok layout dataSize = 16
Class_Microsoft_Singularity_Eventing_QuerySession ENDS

.ERRE Class_Microsoft_Singularity_Eventing_QuerySession._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_QuerySession) EQ 16

externdef ??_7Microsoft_Singularity_Eventing_QuerySession@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Eventing_SystemControllerProxy STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 12 dup (?)                           ;    4
    ; bartok layout dataSize = 16
Class_Microsoft_Singularity_Eventing_SystemControllerProxy ENDS

.ERRE Class_Microsoft_Singularity_Eventing_SystemControllerProxy._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Eventing_SystemControllerProxy) EQ 16

externdef ?g_DebugPrintLogEntry@Class_Microsoft_Singularity_Eventing_SystemControllerProxy@@SI_NPAUuintPtr@@@Z:NEAR
externdef ??_7Microsoft_Singularity_Eventing_SystemControllerProxy@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_GCProfilerLogger STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 104 dup (?)                          ;    4
    ; bartok layout dataSize = 108
Class_Microsoft_Singularity_GCProfilerLogger ENDS

.ERRE Class_Microsoft_Singularity_GCProfilerLogger._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_GCProfilerLogger) EQ 108

externdef ?c_StorageHandle@Class_Microsoft_Singularity_GCProfilerLogger@@2IA:uintptr
externdef ?c_TypeStorageHandle@Class_Microsoft_Singularity_GCProfilerLogger@@2IA:uintptr
externdef ??_7Microsoft_Singularity_GCProfilerLogger@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 20 dup (?)                           ;    4
    ; bartok layout dataSize = 24
Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer ENDS

.ERRE Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer) EQ 24

externdef ?g_LogAllocation@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXHPAUuintPtr@@I@Z:NEAR
externdef ?g_LogFunction@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXIPAUuintPtr@@@Z:NEAR
externdef ?g_LogGenerations@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXHPAH@Z:NEAR
externdef ?g_LogInterval@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIX_K@Z:NEAR
externdef ?g_LogObject@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXIPAPAUuintPtr@@@Z:NEAR
externdef ?g_LogRoots@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXIPAPAUuintPtr@@@Z:NEAR
externdef ?g_LogStack@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXIIPAUuintPtr@@IPAI@Z:NEAR
externdef ?g_LogType@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@SIXIPAUClass_System_String@@@Z:NEAR
externdef ??_7Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Io_IoPort STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 7 dup (?)                            ;    4
    ; bartok layout dataSize = 11
Class_Microsoft_Singularity_Io_IoPort ENDS

.ERRE Class_Microsoft_Singularity_Io_IoPort._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Io_IoPort) EQ 11

externdef ?g_HalReadInt16@Class_Microsoft_Singularity_Io_IoPort@@SIGI@Z:NEAR
externdef ?g_HalReadInt32@Class_Microsoft_Singularity_Io_IoPort@@SIII@Z:NEAR
externdef ?g_HalReadInt8@Class_Microsoft_Singularity_Io_IoPort@@SIEI@Z:NEAR
externdef ?g_HalWriteInt16@Class_Microsoft_Singularity_Io_IoPort@@SIXIG@Z:NEAR
externdef ?g_HalWriteInt32@Class_Microsoft_Singularity_Io_IoPort@@SIXII@Z:NEAR
externdef ?g_HalWriteInt8@Class_Microsoft_Singularity_Io_IoPort@@SIXIE@Z:NEAR
externdef ??_7Microsoft_Singularity_Io_IoPort@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_Isal_IX_uint128 STRUCT 1
    __padding000                int8 16 dup (?)                           ;    0
    ; bartok layout dataSize = 16
Struct_Microsoft_Singularity_Isal_IX_uint128 ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_uint128) EQ 16


Struct_Microsoft_Singularity_Isal_IX_MmxContext STRUCT 1
    _fcw                        uint16                                 ?  ;    0
    _fsw                        uint16                                 ?  ;    2
    _ftw                        uint16                                 ?  ;    4
    _fop                        uint16                                 ?  ;    6
    _ip                         uint32                                 ?  ;    8
    _cs                         uint16                                 ?  ;   12
    _reserved0                  uint16                                 ?  ;   14
    _dp                         uint32                                 ?  ;   16
    _ds                         uint16                                 ?  ;   20
    _reserved1                  uint16                                 ?  ;   22
    _mxcsr                      uint32                                 ?  ;   24
    _mxcsrmask                  uint32                                 ?  ;   28
    _st0                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;   32
    _st1                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;   48
    _st2                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;   64
    _st3                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;   80
    _st4                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;   96
    _st5                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  112
    _st6                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  128
    _st7                        Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  144
    _xmm0                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  160
    _xmm1                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  176
    _xmm2                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  192
    _xmm3                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  208
    _xmm4                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  224
    _xmm5                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  240
    _xmm6                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  256
    _xmm7                       Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  272
    _reserved2                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  288
    _reserved3                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  304
    _reserved4                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  320
    _reserved5                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  336
    _reserved6                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  352
    _reserved7                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  368
    _reserved8                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  384
    _reserved9                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  400
    _reservedA                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  416
    _reservedB                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  432
    _reservedC                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  448
    _reservedD                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  464
    _reservedE                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  480
    _reservedF                  Struct_Microsoft_Singularity_Isal_IX_uint128 {} ;  496
    ; bartok layout dataSize = 512
Struct_Microsoft_Singularity_Isal_IX_MmxContext ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._fcw EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._fsw EQ 2
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._ftw EQ 4
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._fop EQ 6
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._ip EQ 8
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._cs EQ 12
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved0 EQ 14
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._dp EQ 16
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._ds EQ 20
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved1 EQ 22
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._mxcsr EQ 24
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._mxcsrmask EQ 28
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st0 EQ 32
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st1 EQ 48
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st2 EQ 64
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st3 EQ 80
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st4 EQ 96
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st5 EQ 112
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st6 EQ 128
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._st7 EQ 144
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm0 EQ 160
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm1 EQ 176
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm2 EQ 192
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm3 EQ 208
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm4 EQ 224
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm5 EQ 240
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm6 EQ 256
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._xmm7 EQ 272
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved2 EQ 288
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved3 EQ 304
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved4 EQ 320
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved5 EQ 336
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved6 EQ 352
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved7 EQ 368
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved8 EQ 384
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reserved9 EQ 400
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedA EQ 416
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedB EQ 432
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedC EQ 448
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedD EQ 464
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedE EQ 480
.ERRE Struct_Microsoft_Singularity_Isal_IX_MmxContext._reservedF EQ 496
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_MmxContext) EQ 512


Struct_Microsoft_Singularity_Isal_SpillContext STRUCT 1
    _ax                         uintptr                                ?  ;    0
    _bx                         uintptr                                ?  ;    4
    _cx                         uintptr                                ?  ;    8
    _dx                         uintptr                                ?  ;   12
    _di                         uintptr                                ?  ;   16
    _si                         uintptr                                ?  ;   20
    _sp                         uintptr                                ?  ;   24
    _ip                         uintptr                                ?  ;   28
    _bp                         uintptr                                ?  ;   32
    _fl                         uintptr                                ?  ;   36
    __padding000                int8 8 dup (?)                            ;   40
    _mmx                        Struct_Microsoft_Singularity_Isal_IX_MmxContext {} ;   48
    _cs                         uintptr                                ?  ;  560
    _stackLimit                 uintptr                                ?  ;  564
    _spillFlags                 int32                                  ?  ;  568
    __padding001                int8 4 dup (?)                            ;  572
    ; bartok layout dataSize = 576
Struct_Microsoft_Singularity_Isal_SpillContext ENDS

.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._ax EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._bx EQ 4
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._cx EQ 8
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._dx EQ 12
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._di EQ 16
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._si EQ 20
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._sp EQ 24
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._ip EQ 28
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._bp EQ 32
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._fl EQ 36
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._mmx EQ 48
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._cs EQ 560
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._stackLimit EQ 564
.ERRE Struct_Microsoft_Singularity_Isal_SpillContext._spillFlags EQ 568
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_SpillContext) EQ 576

Struct_Microsoft_Singularity_Isal_SpillContext_ContentsSpilled equ 01H

Struct_Microsoft_Singularity_Isal_CpuRecord STRUCT 1
    _spill                      Struct_Microsoft_Singularity_Isal_SpillContext {} ;    0
    _id                         int32                                  ?  ;  576
    _interruptStackBegin        uintptr                                ?  ;  580
    _interruptStackLimit        uintptr                                ?  ;  584
    __padding000                int8 596 dup (?)                          ;  588
    ; bartok layout dataSize = 1184
Struct_Microsoft_Singularity_Isal_CpuRecord ENDS

.ERRE Struct_Microsoft_Singularity_Isal_CpuRecord._spill EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_CpuRecord._id EQ 576
.ERRE Struct_Microsoft_Singularity_Isal_CpuRecord._interruptStackBegin EQ 580
.ERRE Struct_Microsoft_Singularity_Isal_CpuRecord._interruptStackLimit EQ 584
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_CpuRecord) EQ 1184


Class_Microsoft_Singularity_Isal_Isa STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Isal_Isa ENDS

.ERRE Class_Microsoft_Singularity_Isal_Isa._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Isal_Isa) EQ 4

externdef ?g_ClearFpuStatus@Class_Microsoft_Singularity_Isal_Isa@@SIXXZ:NEAR
externdef ?g_GetCs@Class_Microsoft_Singularity_Isal_Isa@@SIPAUuintPtr@@XZ:NEAR
externdef ?g_GetCurrentCpu@Class_Microsoft_Singularity_Isal_Isa@@SIPAUStruct_Microsoft_Singularity_Isal_CpuRecord@@XZ:NEAR
externdef ?g_GetCurrentThread@Class_Microsoft_Singularity_Isal_Isa@@SIPAUStruct_Microsoft_Singularity_Isal_ThreadRecord@@XZ:NEAR
externdef ?g_GetCycleCount@Class_Microsoft_Singularity_Isal_Isa@@SI_KXZ:NEAR
externdef ?g_GetFrameCallerFrame@Class_Microsoft_Singularity_Isal_Isa@@SIPAUuintPtr@@PAU2@@Z:NEAR
externdef ?g_GetFramePointer@Class_Microsoft_Singularity_Isal_Isa@@SIPAUuintPtr@@XZ:NEAR
externdef ?g_GetFrameReturnAddress@Class_Microsoft_Singularity_Isal_Isa@@SIPAUuintPtr@@PAU2@@Z:NEAR
externdef ?g_GetStackPointer@Class_Microsoft_Singularity_Isal_Isa@@SIPAUuintPtr@@XZ:NEAR
externdef ?g_In@Class_Microsoft_Singularity_Isal_Isa@@SIHG@Z:NEAR
externdef ?g_InitFpu@Class_Microsoft_Singularity_Isal_Isa@@SIXXZ:NEAR
externdef ?g_IsInUserMode@Class_Microsoft_Singularity_Isal_Isa@@SI_NXZ:NEAR
externdef ?g_Out@Class_Microsoft_Singularity_Isal_Isa@@SIXGH@Z:NEAR
externdef ?g_ReadCpuid@Class_Microsoft_Singularity_Isal_Isa@@SIXIPAI000@Z:NEAR
externdef ?g_ReadFpuStatus@Class_Microsoft_Singularity_Isal_Isa@@SIIXZ:NEAR
externdef ?g_ReadMsr@Class_Microsoft_Singularity_Isal_Isa@@SI_KI@Z:NEAR
externdef ?g_ReadPmc@Class_Microsoft_Singularity_Isal_Isa@@SI_KI@Z:NEAR
externdef ?g_RepInS@Class_Microsoft_Singularity_Isal_Isa@@SIXIGPAE@Z:NEAR
externdef ?g_RepOutS@Class_Microsoft_Singularity_Isal_Isa@@SIXIGPAE@Z:NEAR
externdef ?g_WriteMsr@Class_Microsoft_Singularity_Isal_Isa@@SIXI_K@Z:NEAR
externdef ?c_currentCpuOffset@Class_Microsoft_Singularity_Isal_Isa@@2HA:int32
externdef ?c_currentThreadOffset@Class_Microsoft_Singularity_Isal_Isa@@2HA:int32
externdef ??_7Microsoft_Singularity_Isal_Isa@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Isal_Isa_ICallback STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Isal_Isa_ICallback ENDS

.ERRE Class_Microsoft_Singularity_Isal_Isa_ICallback._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Isal_Isa_ICallback) EQ 4

externdef ?g_DoCallback@Class_Microsoft_Singularity_Isal_Isa_ICallback@@SIPAUuintPtr@@PAU1@PAU2@@Z:NEAR
externdef ??_7Microsoft_Singularity_Isal_Isa_ICallback@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_Isal_Isa_Type STRUCT 1
    _value                      int32                                  ?  ;    0
    ; bartok layout dataSize = 4
Struct_Microsoft_Singularity_Isal_Isa_Type ENDS

.ERRE Struct_Microsoft_Singularity_Isal_Isa_Type._value EQ 0
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_Isa_Type) EQ 4

Struct_Microsoft_Singularity_Isal_Isa_Type_Arm equ 02H
Struct_Microsoft_Singularity_Isal_Isa_Type_X64 equ 01H
Struct_Microsoft_Singularity_Isal_Isa_Type_X86 equ 00H

Struct_Microsoft_Singularity_Isal_IX_CR0 STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_CR0 ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_CR0) EQ 1

Struct_Microsoft_Singularity_Isal_IX_CR0_AM equ 040000H
Struct_Microsoft_Singularity_Isal_IX_CR0_CD equ 040000000H
Struct_Microsoft_Singularity_Isal_IX_CR0_EM equ 04H
Struct_Microsoft_Singularity_Isal_IX_CR0_ET equ 010H
Struct_Microsoft_Singularity_Isal_IX_CR0_MP equ 02H
Struct_Microsoft_Singularity_Isal_IX_CR0_NE equ 020H
Struct_Microsoft_Singularity_Isal_IX_CR0_NW equ 020000000H
Struct_Microsoft_Singularity_Isal_IX_CR0_PE equ 01H
Struct_Microsoft_Singularity_Isal_IX_CR0_PG equ 080000000H
Struct_Microsoft_Singularity_Isal_IX_CR0_TS equ 08H
Struct_Microsoft_Singularity_Isal_IX_CR0_WP equ 010000H

Struct_Microsoft_Singularity_Isal_IX_CR3 STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_CR3 ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_CR3) EQ 1

Struct_Microsoft_Singularity_Isal_IX_CR3_PCD equ 010H
Struct_Microsoft_Singularity_Isal_IX_CR3_PWT equ 08H

Struct_Microsoft_Singularity_Isal_IX_CR4 STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_CR4 ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_CR4) EQ 1

Struct_Microsoft_Singularity_Isal_IX_CR4_DE equ 08H
Struct_Microsoft_Singularity_Isal_IX_CR4_MCE equ 040H
Struct_Microsoft_Singularity_Isal_IX_CR4_OSFXSR equ 0200H
Struct_Microsoft_Singularity_Isal_IX_CR4_OSXMMEXCPT equ 0400H
Struct_Microsoft_Singularity_Isal_IX_CR4_PAE equ 020H
Struct_Microsoft_Singularity_Isal_IX_CR4_PCE equ 0100H
Struct_Microsoft_Singularity_Isal_IX_CR4_PGE equ 080H
Struct_Microsoft_Singularity_Isal_IX_CR4_PSE equ 010H
Struct_Microsoft_Singularity_Isal_IX_CR4_PVI equ 02H
Struct_Microsoft_Singularity_Isal_IX_CR4_TSD equ 04H
Struct_Microsoft_Singularity_Isal_IX_CR4_VME equ 01H

Struct_Microsoft_Singularity_Isal_IX_Gdtp STRUCT 1
    _pad                        uint16                                 ?  ;    0
    _limit                      uint16                                 ?  ;    2
    _addr                       uint32                                 ?  ;    4
    ; bartok layout dataSize = 8
Struct_Microsoft_Singularity_Isal_IX_Gdtp ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdtp._pad EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdtp._limit EQ 2
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdtp._addr EQ 4
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_Gdtp) EQ 8


Struct_Microsoft_Singularity_Isal_IX_Gdte STRUCT 1
    _limit                      uint16                                 ?  ;    0
    _base0_15                   uint16                                 ?  ;    2
    _base16_23                  uint8                                  ?  ;    4
    _access                     uint8                                  ?  ;    5
    _granularity                uint8                                  ?  ;    6
    _base24_31                  uint8                                  ?  ;    7
    ; bartok layout dataSize = 8
Struct_Microsoft_Singularity_Isal_IX_Gdte ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._limit EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._base0_15 EQ 2
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._base16_23 EQ 4
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._access EQ 5
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._granularity EQ 6
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte._base24_31 EQ 7
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_Gdte) EQ 8

Struct_Microsoft_Singularity_Isal_IX_Gdte_ACCESSED equ 01H
Struct_Microsoft_Singularity_Isal_IX_Gdte_CallGate16 equ 04H
Struct_Microsoft_Singularity_Isal_IX_Gdte_CallGate32 equ 0cH
Struct_Microsoft_Singularity_Isal_IX_Gdte_CODE equ 08H
Struct_Microsoft_Singularity_Isal_IX_Gdte_CONFORMING equ 04H
Struct_Microsoft_Singularity_Isal_IX_Gdte_EXPANDDOWN equ 04H
Struct_Microsoft_Singularity_Isal_IX_Gdte_IntGate16 equ 06H
Struct_Microsoft_Singularity_Isal_IX_Gdte_IntGate32 equ 0eH
Struct_Microsoft_Singularity_Isal_IX_Gdte_IS32BIT equ 040H
Struct_Microsoft_Singularity_Isal_IX_Gdte_IS64BIT equ 020H
Struct_Microsoft_Singularity_Isal_IX_Gdte_Ldt equ 02H
Struct_Microsoft_Singularity_Isal_IX_Gdte_LIMIT20 equ 0fH
Struct_Microsoft_Singularity_Isal_IX_Gdte_PAGES equ 080H
Struct_Microsoft_Singularity_Isal_IX_Gdte_PRESENT equ 080H
Struct_Microsoft_Singularity_Isal_IX_Gdte_READABLE equ 02H
Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved10 equ 0aH
Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved13 equ 0dH
Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved8 equ 08H
Struct_Microsoft_Singularity_Isal_IX_Gdte_RING0 equ 00H
Struct_Microsoft_Singularity_Isal_IX_Gdte_RING1 equ 020H
Struct_Microsoft_Singularity_Isal_IX_Gdte_RING2 equ 040H
Struct_Microsoft_Singularity_Isal_IX_Gdte_RING3 equ 060H
Struct_Microsoft_Singularity_Isal_IX_Gdte_TaskGate equ 05H
Struct_Microsoft_Singularity_Isal_IX_Gdte_TrapGate16 equ 07H
Struct_Microsoft_Singularity_Isal_IX_Gdte_TrapGate32 equ 0fH
Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss16Busy equ 03H
Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss16Free equ 01H
Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss32Busy equ 0bH
Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss32Free equ 09H
Struct_Microsoft_Singularity_Isal_IX_Gdte_USER equ 010H
Struct_Microsoft_Singularity_Isal_IX_Gdte_WRITEABLE equ 02H

Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt STRUCT 1
    _nul                        Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;    0
    _pv                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;    8
    _rc                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   16
    _rd                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   24
    _pc                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   32
    _pd                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   40
    _lc                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   48
    _ld                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   56
    _uc                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   64
    _ud                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   72
    _pp                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   80
    _nn                         Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   88
    _tss                        Struct_Microsoft_Singularity_Isal_IX_Gdte {} ;   96
    ; bartok layout dataSize = 104
Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._nul EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._pv EQ 8
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._rc EQ 16
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._rd EQ 24
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._pc EQ 32
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._pd EQ 40
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._lc EQ 48
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._ld EQ 56
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._uc EQ 64
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._ud EQ 72
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._pp EQ 80
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._nn EQ 88
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt._tss EQ 96
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt) EQ 104


Struct_Microsoft_Singularity_Isal_IX_DescriptorTable STRUCT 1
    _gdt                        Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt {} ;    0
    _gdtPtr                     Struct_Microsoft_Singularity_Isal_IX_Gdtp {} ;  104
    ; bartok layout dataSize = 112
Struct_Microsoft_Singularity_Isal_IX_DescriptorTable ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable._gdt EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable._gdtPtr EQ 104
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_DescriptorTable) EQ 112


Struct_Microsoft_Singularity_Isal_IX_EFlags STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_EFlags ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_EFlags) EQ 1

Struct_Microsoft_Singularity_Isal_IX_EFlags_AC equ 040000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_AF equ 010H
Struct_Microsoft_Singularity_Isal_IX_EFlags_CF equ 01H
Struct_Microsoft_Singularity_Isal_IX_EFlags_DF equ 0400H
Struct_Microsoft_Singularity_Isal_IX_EFlags_ID equ 0200000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_IF equ 0200H
Struct_Microsoft_Singularity_Isal_IX_EFlags_IOPL equ 03000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_NT equ 04000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_OF equ 0800H
Struct_Microsoft_Singularity_Isal_IX_EFlags_PF equ 04H
Struct_Microsoft_Singularity_Isal_IX_EFlags_RF equ 010000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_SF equ 080H
Struct_Microsoft_Singularity_Isal_IX_EFlags_TF equ 0100H
Struct_Microsoft_Singularity_Isal_IX_EFlags_VF equ 02H
Struct_Microsoft_Singularity_Isal_IX_EFlags_VIF equ 080000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_VIP equ 0100000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_VM equ 020000H
Struct_Microsoft_Singularity_Isal_IX_EFlags_ZF equ 040H

Struct_Microsoft_Singularity_Isal_IX_EFlagsShift STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_EFlagsShift ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_EFlagsShift) EQ 1

Struct_Microsoft_Singularity_Isal_IX_EFlagsShift_IF equ 09H

Struct_Microsoft_Singularity_Isal_IX_EVectors STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_EVectors ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_EVectors) EQ 1

Struct_Microsoft_Singularity_Isal_IX_EVectors_AlignmentCheck equ 011H
Struct_Microsoft_Singularity_Isal_IX_EVectors_BaseUserException equ 020H
Struct_Microsoft_Singularity_Isal_IX_EVectors_BoundRangeException equ 05H
Struct_Microsoft_Singularity_Isal_IX_EVectors_Breakpoint equ 03H
Struct_Microsoft_Singularity_Isal_IX_EVectors_CoprocessorNotAvailable equ 07H
Struct_Microsoft_Singularity_Isal_IX_EVectors_CoprocessorSegmentOverrun equ 09H
Struct_Microsoft_Singularity_Isal_IX_EVectors_DebuggerBreakRequest equ 01fH
Struct_Microsoft_Singularity_Isal_IX_EVectors_DivideError equ 00H
Struct_Microsoft_Singularity_Isal_IX_EVectors_DoubleFault equ 08H
Struct_Microsoft_Singularity_Isal_IX_EVectors_FirstChanceException equ 01dH
Struct_Microsoft_Singularity_Isal_IX_EVectors_FpuMathFault equ 010H
Struct_Microsoft_Singularity_Isal_IX_EVectors_GCSynchronization equ 025H
Struct_Microsoft_Singularity_Isal_IX_EVectors_GeneralProtectionFault equ 0dH
Struct_Microsoft_Singularity_Isal_IX_EVectors_HaltApProcessors equ 024H
Struct_Microsoft_Singularity_Isal_IX_EVectors_IllegalInstruction equ 06H
Struct_Microsoft_Singularity_Isal_IX_EVectors_IntelReserved equ 0eH
Struct_Microsoft_Singularity_Isal_IX_EVectors_InvalidTss equ 0aH
Struct_Microsoft_Singularity_Isal_IX_EVectors_IoBaseVector equ 060H
Struct_Microsoft_Singularity_Isal_IX_EVectors_IoLastVector equ 09fH
Struct_Microsoft_Singularity_Isal_IX_EVectors_MachineCheck equ 012H
Struct_Microsoft_Singularity_Isal_IX_EVectors_Nmi equ 02H
Struct_Microsoft_Singularity_Isal_IX_EVectors_OverflowException equ 04H
Struct_Microsoft_Singularity_Isal_IX_EVectors_PageFault equ 0eH
Struct_Microsoft_Singularity_Isal_IX_EVectors_SecondChanceException equ 01eH
Struct_Microsoft_Singularity_Isal_IX_EVectors_SegmentNotPresent equ 0bH
Struct_Microsoft_Singularity_Isal_IX_EVectors_SingleStep equ 01H
Struct_Microsoft_Singularity_Isal_IX_EVectors_SpuriousInterrupt equ 0dfH
Struct_Microsoft_Singularity_Isal_IX_EVectors_SseMathFault equ 013H
Struct_Microsoft_Singularity_Isal_IX_EVectors_StackSegmentFault equ 0cH

Struct_Microsoft_Singularity_Isal_IX_Gdte64 STRUCT 1
    _limit                      uint16                                 ?  ;    0
    _base0_15                   uint16                                 ?  ;    2
    _base16_23                  uint8                                  ?  ;    4
    _access                     uint8                                  ?  ;    5
    _granularity                uint8                                  ?  ;    6
    _base24_31                  uint8                                  ?  ;    7
    _base32_63                  uint32                                 ?  ;    8
    _reserved                   uint32                                 ?  ;   12
    ; bartok layout dataSize = 16
Struct_Microsoft_Singularity_Isal_IX_Gdte64 ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._limit EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._base0_15 EQ 2
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._base16_23 EQ 4
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._access EQ 5
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._granularity EQ 6
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._base24_31 EQ 7
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._base32_63 EQ 8
.ERRE Struct_Microsoft_Singularity_Isal_IX_Gdte64._reserved EQ 12
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_Gdte64) EQ 16


Struct_Microsoft_Singularity_Isal_IX_PE STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_Isal_IX_PE ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_PE) EQ 1

Struct_Microsoft_Singularity_Isal_IX_PE_ACCESSED equ 020H
Struct_Microsoft_Singularity_Isal_IX_PE_CACHEDISABLE equ 010H
Struct_Microsoft_Singularity_Isal_IX_PE_DIRTY equ 040H
Struct_Microsoft_Singularity_Isal_IX_PE_GLOBAL equ 0100H
Struct_Microsoft_Singularity_Isal_IX_PE_IS2MB equ 080H
Struct_Microsoft_Singularity_Isal_IX_PE_NX equ 08000000000000000H
Struct_Microsoft_Singularity_Isal_IX_PE_PAT equ 080H
Struct_Microsoft_Singularity_Isal_IX_PE_USER equ 04H
Struct_Microsoft_Singularity_Isal_IX_PE_VALID equ 01H
Struct_Microsoft_Singularity_Isal_IX_PE_WRITEABLE equ 02H
Struct_Microsoft_Singularity_Isal_IX_PE_WRITETHROUGH equ 08H

Struct_Microsoft_Singularity_Isal_IX_TSS STRUCT 1
    _previous_tss               uint16                                 ?  ;    0
    _pad0                       uint16                                 ?  ;    2
    _esp0                       uint32                                 ?  ;    4
    _ss0                        uint16                                 ?  ;    8
    _pad1                       uint16                                 ?  ;   10
    _esp1                       uint32                                 ?  ;   12
    _ss1                        uint16                                 ?  ;   16
    _pad2                       uint16                                 ?  ;   18
    _esp2                       uint32                                 ?  ;   20
    _ss2                        uint16                                 ?  ;   24
    _pad3                       uint16                                 ?  ;   26
    _cr3                        uint32                                 ?  ;   28
    _eip                        uint32                                 ?  ;   32
    _eflags                     uint32                                 ?  ;   36
    _eax                        uint32                                 ?  ;   40
    _ecx                        uint32                                 ?  ;   44
    _edx                        uint32                                 ?  ;   48
    _ebx                        uint32                                 ?  ;   52
    _esp                        uint32                                 ?  ;   56
    _ebp                        uint32                                 ?  ;   60
    _esi                        uint32                                 ?  ;   64
    _edi                        uint32                                 ?  ;   68
    _es                         uint16                                 ?  ;   72
    _pades                      uint16                                 ?  ;   74
    _cs                         uint16                                 ?  ;   76
    _padcs                      uint16                                 ?  ;   78
    _ss                         uint16                                 ?  ;   80
    _padss                      uint16                                 ?  ;   82
    _ds                         uint16                                 ?  ;   84
    _padds                      uint16                                 ?  ;   86
    _fs                         uint16                                 ?  ;   88
    _padfs                      uint16                                 ?  ;   90
    _gs                         uint16                                 ?  ;   92
    _padgs                      uint16                                 ?  ;   94
    _ldt                        uint16                                 ?  ;   96
    _padldt                     uint16                                 ?  ;   98
    _trap_bit                   uint16                                 ?  ;  100
    _io_bitmap_offset           uint16                                 ?  ;  102
    ; bartok layout dataSize = 104
Struct_Microsoft_Singularity_Isal_IX_TSS ENDS

.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._previous_tss EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._pad0 EQ 2
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._esp0 EQ 4
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ss0 EQ 8
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._pad1 EQ 10
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._esp1 EQ 12
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ss1 EQ 16
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._pad2 EQ 18
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._esp2 EQ 20
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ss2 EQ 24
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._pad3 EQ 26
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._cr3 EQ 28
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._eip EQ 32
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._eflags EQ 36
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._eax EQ 40
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ecx EQ 44
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._edx EQ 48
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ebx EQ 52
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._esp EQ 56
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ebp EQ 60
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._esi EQ 64
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._edi EQ 68
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._es EQ 72
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._pades EQ 74
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._cs EQ 76
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padcs EQ 78
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ss EQ 80
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padss EQ 82
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ds EQ 84
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padds EQ 86
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._fs EQ 88
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padfs EQ 90
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._gs EQ 92
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padgs EQ 94
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._ldt EQ 96
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._padldt EQ 98
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._trap_bit EQ 100
.ERRE Struct_Microsoft_Singularity_Isal_IX_TSS._io_bitmap_offset EQ 102
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_IX_TSS) EQ 104


Struct_Microsoft_Singularity_Isal_ThreadRecord STRUCT 1
    _spill                      Struct_Microsoft_Singularity_Isal_SpillContext {} ;    0
    _activeStackLimit           uintptr                                ?  ;  576
    __padding000                int8 12 dup (?)                           ;  580
    ; bartok layout dataSize = 592
Struct_Microsoft_Singularity_Isal_ThreadRecord ENDS

.ERRE Struct_Microsoft_Singularity_Isal_ThreadRecord._spill EQ 0
.ERRE Struct_Microsoft_Singularity_Isal_ThreadRecord._activeStackLimit EQ 576
.ERRE (SIZE Struct_Microsoft_Singularity_Isal_ThreadRecord) EQ 592


Struct_Microsoft_Singularity_Memory_PhysicalAddress STRUCT 1
    __padding000                int8 8 dup (?)                            ;    0
    ; bartok layout dataSize = 8
Struct_Microsoft_Singularity_Memory_PhysicalAddress ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_Memory_PhysicalAddress) EQ 8

externdef ?m__ctor@Struct_Microsoft_Singularity_Memory_PhysicalAddress@@SIXPAU1@PAUuintPtr@@@Z:NEAR

Class_Microsoft_Singularity_Memory_Stacks STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Memory_Stacks ENDS

.ERRE Class_Microsoft_Singularity_Memory_Stacks._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Memory_Stacks) EQ 4

externdef ?g_LinkStack0@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack100@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack104@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack108@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack112@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack116@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack12@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack120@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack124@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack128@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack16@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack20@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack24@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack28@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack32@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack36@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack4@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack40@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack44@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack48@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack52@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack56@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack60@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack64@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack68@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack72@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack76@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack8@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack80@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack84@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack88@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack92@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_LinkStack96@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack0@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack12@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack16@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack20@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack24@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack28@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack32@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack36@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack4@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack40@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack44@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack48@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack52@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack56@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack60@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack64@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?g_UnlinkStack8@Class_Microsoft_Singularity_Memory_Stacks@@SIXXZ:NEAR
externdef ?c_LinkStackBegin@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_LinkStackFunctionsBegin@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_LinkStackFunctionsLimit@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_LinkStackLimit@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_LinkStackStubsBegin@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_LinkStackStubsLimit@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_UnlinkStackBegin@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ?c_UnlinkStackLimit@Class_Microsoft_Singularity_Memory_Stacks@@2EA:uint8
externdef ??_7Microsoft_Singularity_Memory_Stacks@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Monitoring STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Monitoring ENDS

.ERRE Class_Microsoft_Singularity_Monitoring._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Monitoring) EQ 4

externdef ?g_FillLogEntry@Class_Microsoft_Singularity_Monitoring@@SIHPAUStruct_Microsoft_Singularity_Monitoring_LogEntry@@PA_K@Z:NEAR
externdef ?g_FillTextEntry@Class_Microsoft_Singularity_Monitoring@@SIHPAE_K0H@Z:NEAR
externdef ?g_Initialize@Class_Microsoft_Singularity_Monitoring@@SIXXZ:NEAR
externdef ?g_isActive@Class_Microsoft_Singularity_Monitoring@@SI_NXZ:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Monitoring@@SIXGGPAUClass_System_String@@@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Monitoring@@SIXGGGIIIII@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Monitoring@@SIXGG@Z:NEAR
externdef ?g_setActive@Class_Microsoft_Singularity_Monitoring@@SIX_N@Z:NEAR
externdef ?c_buffer@Class_Microsoft_Singularity_Monitoring@@2PAEA:PTR_uint8
externdef ??_7Microsoft_Singularity_Monitoring@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_Monitoring_LogEntry STRUCT 1
    _cycleCount                 uint64                                 ?  ;    0
    _eip                        uintptr                                ?  ;    8
    _threadId                   uint16                                 ?  ;   12
    _processId                  uint16                                 ?  ;   14
    _provider                   uint16                                 ?  ;   16
    _type                       uint16                                 ?  ;   18
    _text                       PTR_uint8                              ?  ;   20
    _cpu                        uint16                                 ?  ;   24
    _version                    uint16                                 ?  ;   26
    _arg0                       uintptr                                ?  ;   28
    _arg1                       uintptr                                ?  ;   32
    _arg2                       uintptr                                ?  ;   36
    _arg3                       uintptr                                ?  ;   40
    _arg4                       uintptr                                ?  ;   44
    ; bartok layout dataSize = 48
Struct_Microsoft_Singularity_Monitoring_LogEntry ENDS

.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._cycleCount EQ 0
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._eip EQ 8
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._threadId EQ 12
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._processId EQ 14
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._provider EQ 16
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._type EQ 18
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._text EQ 20
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._cpu EQ 24
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._version EQ 26
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._arg0 EQ 28
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._arg1 EQ 32
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._arg2 EQ 36
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._arg3 EQ 40
.ERRE Struct_Microsoft_Singularity_Monitoring_LogEntry._arg4 EQ 44
.ERRE (SIZE Struct_Microsoft_Singularity_Monitoring_LogEntry) EQ 48


Class_Microsoft_Singularity_PrivilegedGate STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_PrivilegedGate ENDS

.ERRE Class_Microsoft_Singularity_PrivilegedGate._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_PrivilegedGate) EQ 4

externdef ?g_DisableInterrupts@Class_Microsoft_Singularity_PrivilegedGate@@SI_NXZ:NEAR
externdef ?g_InterruptsDisabled@Class_Microsoft_Singularity_PrivilegedGate@@SI_NXZ:NEAR
externdef ?g_RestoreInterrupts@Class_Microsoft_Singularity_PrivilegedGate@@SIX_N@Z:NEAR
externdef ??_7Microsoft_Singularity_PrivilegedGate@@6B@:PTR_Class_System_VTable

Class_Microsoft_Singularity_Processor STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Processor ENDS

.ERRE Class_Microsoft_Singularity_Processor._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Processor) EQ 4

externdef ?g_DisableLocalPreemption@Class_Microsoft_Singularity_Processor@@SI_NXZ:NEAR
externdef ?g_GetCurrentProcessorContext@Class_Microsoft_Singularity_Processor@@SIPAUStruct_Microsoft_Singularity_ProcessorContext@@XZ:NEAR
externdef ?g_GetCurrentThreadContext@Class_Microsoft_Singularity_Processor@@SIPAUStruct_Microsoft_Singularity_ThreadContext@@XZ:NEAR
externdef ?g_RestoreLocalPreemption@Class_Microsoft_Singularity_Processor@@SIX_N@Z:NEAR
externdef ??_7Microsoft_Singularity_Processor@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_ProcessorContext STRUCT 1
    _cpuRecord                  Struct_Microsoft_Singularity_Isal_CpuRecord {} ;    0
    _halCpu                     PTR_void                               ?  ; 1184
    __processor                 PTR_void                               ?  ; 1188
    _exception                  uintptr                                ?  ; 1192
    _ipiFreeze                  int32                                  ?  ; 1196
    _nextProcessorContext       PTR_Struct_Microsoft_Singularity_ProcessorContext ?  ; 1200
    _gcIpiGate                  int32                                  ?  ; 1204
    __padding000                int8 8 dup (?)                            ; 1208
    ; bartok layout dataSize = 1216
Struct_Microsoft_Singularity_ProcessorContext ENDS

.ERRE Struct_Microsoft_Singularity_ProcessorContext._cpuRecord EQ 0
.ERRE Struct_Microsoft_Singularity_ProcessorContext._halCpu EQ 1184
.ERRE Struct_Microsoft_Singularity_ProcessorContext.__processor EQ 1188
.ERRE Struct_Microsoft_Singularity_ProcessorContext._exception EQ 1192
.ERRE Struct_Microsoft_Singularity_ProcessorContext._ipiFreeze EQ 1196
.ERRE Struct_Microsoft_Singularity_ProcessorContext._nextProcessorContext EQ 1200
.ERRE Struct_Microsoft_Singularity_ProcessorContext._gcIpiGate EQ 1204
.ERRE (SIZE Struct_Microsoft_Singularity_ProcessorContext) EQ 1216

externdef ?m_GetProcessor@Struct_Microsoft_Singularity_ProcessorContext@@SIPAUClass_Microsoft_Singularity_Processor@@PAU1@@Z:NEAR
externdef ?m_UpdateAfterGC@Struct_Microsoft_Singularity_ProcessorContext@@SIXPAU1@PAUClass_Microsoft_Singularity_Processor@@@Z:NEAR

Struct_Microsoft_Singularity_ThreadContext STRUCT 1
    _threadRecord               Struct_Microsoft_Singularity_Isal_ThreadRecord {} ;    0
    _num                        uint16                                 ?  ;  592
    _regs                       uint16                                 ?  ;  594
    _prev                       PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  596
    _next                       PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  600
    _prevInKern                 PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  604
    _nextInKern                 PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  608
    _prevInProc                 PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  612
    _nextInProc                 PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;  616
    _stackBegin                 uintptr                                ?  ;  620
    _stackLimit                 uintptr                                ?  ;  624
    _processId                  uint16                                 ?  ;  628
    _uncaughtFlag               bool                                   ?  ;  630
    _suspendAlert               bool                                   ?  ;  631
    _kernelThread               uintptr                                ?  ;  632
    __thread                    PTR_void                               ?  ;  636
    _kernelMarkers              PTR_Struct_System_GCs_CallStack_TransitionRecord ?  ;  640
    _stackMarkers               PTR_Struct_System_GCs_CallStack_TransitionRecord ?  ;  644
    _kernelThreadIndex          uint16                                 ?  ;  648
    _threadIndex                uint16                                 ?  ;  650
    _gcStates                   int32                                  ?  ;  652
    __padding000                int8 16 dup (?)                           ;  656
    ; bartok layout dataSize = 672
Struct_Microsoft_Singularity_ThreadContext ENDS

.ERRE Struct_Microsoft_Singularity_ThreadContext._threadRecord EQ 0
.ERRE Struct_Microsoft_Singularity_ThreadContext._num EQ 592
.ERRE Struct_Microsoft_Singularity_ThreadContext._regs EQ 594
.ERRE Struct_Microsoft_Singularity_ThreadContext._prev EQ 596
.ERRE Struct_Microsoft_Singularity_ThreadContext._next EQ 600
.ERRE Struct_Microsoft_Singularity_ThreadContext._prevInKern EQ 604
.ERRE Struct_Microsoft_Singularity_ThreadContext._nextInKern EQ 608
.ERRE Struct_Microsoft_Singularity_ThreadContext._prevInProc EQ 612
.ERRE Struct_Microsoft_Singularity_ThreadContext._nextInProc EQ 616
.ERRE Struct_Microsoft_Singularity_ThreadContext._stackBegin EQ 620
.ERRE Struct_Microsoft_Singularity_ThreadContext._stackLimit EQ 624
.ERRE Struct_Microsoft_Singularity_ThreadContext._processId EQ 628
.ERRE Struct_Microsoft_Singularity_ThreadContext._uncaughtFlag EQ 630
.ERRE Struct_Microsoft_Singularity_ThreadContext._suspendAlert EQ 631
.ERRE Struct_Microsoft_Singularity_ThreadContext._kernelThread EQ 632
.ERRE Struct_Microsoft_Singularity_ThreadContext.__thread EQ 636
.ERRE Struct_Microsoft_Singularity_ThreadContext._kernelMarkers EQ 640
.ERRE Struct_Microsoft_Singularity_ThreadContext._stackMarkers EQ 644
.ERRE Struct_Microsoft_Singularity_ThreadContext._kernelThreadIndex EQ 648
.ERRE Struct_Microsoft_Singularity_ThreadContext._threadIndex EQ 650
.ERRE Struct_Microsoft_Singularity_ThreadContext._gcStates EQ 652
.ERRE (SIZE Struct_Microsoft_Singularity_ThreadContext) EQ 672

externdef ?m_GetThread@Struct_Microsoft_Singularity_ThreadContext@@SIPAUClass_System_Threading_Thread@@PAU1@@Z:NEAR
externdef ?m_IsInKernelMode@Struct_Microsoft_Singularity_ThreadContext@@SI_NPAU1@@Z:NEAR
externdef ?m_SetKernelMode@Struct_Microsoft_Singularity_ThreadContext@@SIXPAU1@@Z:NEAR
externdef ?m_SetProcessMode@Struct_Microsoft_Singularity_ThreadContext@@SIXPAU1@@Z:NEAR
externdef ?m_UpdateAfterGC@Struct_Microsoft_Singularity_ThreadContext@@SIXPAU1@PAUClass_System_Threading_Thread@@@Z:NEAR

Class_Microsoft_Singularity_Tracing STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_Microsoft_Singularity_Tracing ENDS

.ERRE Class_Microsoft_Singularity_Tracing._postHeader EQ 0
.ERRE (SIZE Class_Microsoft_Singularity_Tracing) EQ 4

externdef ?g_GetSystemTracingStorageHandle@Class_Microsoft_Singularity_Tracing@@SIPAUuintPtr@@XZ:NEAR
externdef ?g_Initialize@Class_Microsoft_Singularity_Tracing@@SIXXZ:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@00@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@0PAUuintPtr@@1@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@0PAUuintPtr@@@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@0@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@11111@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@1111@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@111@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@11@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@1@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@PAUuintPtr@@@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXEPAUClass_System_String@@@Z:NEAR
externdef ?g_Log@Class_Microsoft_Singularity_Tracing@@SIXE@Z:NEAR
externdef ??_7Microsoft_Singularity_Tracing@@6B@:PTR_Class_System_VTable

Struct_Microsoft_Singularity_V1_Processes_ProcessHandle STRUCT 1
    __padding000                int8 4 dup (?)                            ;    0
    ; bartok layout dataSize = 4
Struct_Microsoft_Singularity_V1_Processes_ProcessHandle ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_V1_Processes_ProcessHandle) EQ 4

externdef ?g_SuspendBarrier@Struct_Microsoft_Singularity_V1_Processes_ProcessHandle@@SIXXZ:NEAR

Struct_Microsoft_Singularity_V1_Services_DebugService STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_V1_Services_DebugService ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_V1_Services_DebugService) EQ 1

externdef ?g_Print@Struct_Microsoft_Singularity_V1_Services_DebugService@@SIXPA_WH@Z:NEAR

Struct_Microsoft_Singularity_V1_Services_PlatformService STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_V1_Services_PlatformService ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_V1_Services_PlatformService) EQ 1

externdef ?g_GetProcessorContextOffset@Struct_Microsoft_Singularity_V1_Services_PlatformService@@SIHXZ:NEAR
externdef ?g_GetThreadContextOffset@Struct_Microsoft_Singularity_V1_Services_PlatformService@@SIHXZ:NEAR

Struct_Microsoft_Singularity_V1_Services_ProcessService STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_V1_Services_ProcessService ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_V1_Services_ProcessService) EQ 1

externdef ?g_GetSharedSourceHandles@Struct_Microsoft_Singularity_V1_Services_ProcessService@@SI_NIPAPAUuintPtr@@00@Z:NEAR
externdef ?g_GetSharedSourceHandlesImpl@Struct_Microsoft_Singularity_V1_Services_ProcessService@@SI_NIPAPAUuintPtr@@00@Z:NEAR

Struct_Microsoft_Singularity_V1_Services_StackService STRUCT 1
    __padding000                int8 1 dup (?)                            ;    0
    ; bartok layout dataSize = 1
Struct_Microsoft_Singularity_V1_Services_StackService ENDS

.ERRE (SIZE Struct_Microsoft_Singularity_V1_Services_StackService) EQ 1

externdef ?g_AllocateStackSegment@Struct_Microsoft_Singularity_V1_Services_StackService@@SIPAUuintPtr@@PAU2@@Z:NEAR
externdef ?g_FreeStackSegment@Struct_Microsoft_Singularity_V1_Services_StackService@@SIXXZ:NEAR

Class_System_Buffer STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_Buffer ENDS

.ERRE Class_System_Buffer._postHeader EQ 0
.ERRE (SIZE Class_System_Buffer) EQ 4

externdef ?g_CopyPages@Class_System_Buffer@@SIXPAE0H@Z:NEAR
externdef ?g_MoveMemory@Class_System_Buffer@@SIXPAE0H@Z:NEAR
externdef ?g_ZeroMemory@Class_System_Buffer@@SIXPAEH@Z:NEAR
externdef ?g_ZeroPages@Class_System_Buffer@@SIXPAEH@Z:NEAR
externdef ??_7System_Buffer@@6B@:PTR_Class_System_VTable

Struct_System_Decimal STRUCT 1
    __padding000                int8 16 dup (?)                           ;    0
    ; bartok layout dataSize = 16
Struct_System_Decimal ENDS

.ERRE (SIZE Struct_System_Decimal) EQ 16

externdef ?g_DecimalAdd@Struct_System_Decimal@@SIHPAU1@00@Z:NEAR
externdef ?g_DecimalCompare@Struct_System_Decimal@@SIHPAU1@0@Z:NEAR
externdef ?g_DecimalDivide@Struct_System_Decimal@@SIHPAU1@00@Z:NEAR
externdef ?g_DecimalFloor@Struct_System_Decimal@@SIHPAU1@0@Z:NEAR
externdef ?g_DecimalFromDouble@Struct_System_Decimal@@SIHNPAU1@@Z:NEAR
externdef ?g_DecimalFromFloat@Struct_System_Decimal@@SIHMPAU1@@Z:NEAR
externdef ?g_DecimalMultiply@Struct_System_Decimal@@SIHPAU1@00@Z:NEAR
externdef ?g_DecimalRound@Struct_System_Decimal@@SIHPAU1@H0@Z:NEAR
externdef ?g_DecimalSubtract@Struct_System_Decimal@@SIHPAU1@00@Z:NEAR
externdef ?g_DecimalTruncate@Struct_System_Decimal@@SIHPAU1@0@Z:NEAR
externdef ?g_DoubleFromDecimal@Struct_System_Decimal@@SIHPAU1@PAN@Z:NEAR
externdef ?g_FloatFromDecimal@Struct_System_Decimal@@SIHPAU1@PAM@Z:NEAR

Class_System_Exception STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    __message                   PTR_Class_System_String                ?  ;    8
    __notifiedDebugger          bool                                   ?  ;   12
    __padding001                int8 3 dup (?)                            ;   13
    __throwAddress              uintptr                                ?  ;   16
    ; bartok layout dataSize = 20
Class_System_Exception ENDS

.ERRE Class_System_Exception._postHeader EQ 0
.ERRE Class_System_Exception.__message EQ 8
.ERRE Class_System_Exception.__notifiedDebugger EQ 12
.ERRE Class_System_Exception.__throwAddress EQ 16
.ERRE (SIZE Class_System_Exception) EQ 20

externdef ?g_IsUnlinkStack@Class_System_Exception@@SI_NPAUuintPtr@@@Z:NEAR
externdef ??_7System_Exception@@6B@:PTR_Class_System_VTable

Class_System_DivideByZeroException STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    __message                   PTR_Class_System_String                ?  ;    8
    __notifiedDebugger          bool                                   ?  ;   12
    __padding001                int8 3 dup (?)                            ;   13
    __throwAddress              uintptr                                ?  ;   16
    ; bartok layout dataSize = 20
Class_System_DivideByZeroException ENDS

.ERRE Class_System_DivideByZeroException._postHeader EQ 0
.ERRE Class_System_DivideByZeroException.__message EQ 8
.ERRE Class_System_DivideByZeroException.__notifiedDebugger EQ 12
.ERRE Class_System_DivideByZeroException.__throwAddress EQ 16
.ERRE (SIZE Class_System_DivideByZeroException) EQ 20

externdef ?m__ctor@Class_System_DivideByZeroException@@SIXPAU1@@Z:NEAR
externdef ??_7System_DivideByZeroException@@6B@:PTR_Class_System_VTable

Class_System_GC STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_GC ENDS

.ERRE Class_System_GC._postHeader EQ 0
.ERRE (SIZE Class_System_GC) EQ 4

externdef ?g_AllocateObject@Class_System_GC@@SIPAUClass_System_Object@@PAUClass_System_VTable@@@Z:NEAR
externdef ?g_CollectBody@Class_System_GC@@SIPAUClass_System_Threading_Thread@@PAU2@H@Z:NEAR
externdef ?c_allocationGCInhibitCount@Class_System_GC@@2HA:int32
externdef ??_7System_GC@@6B@:PTR_Class_System_VTable

Struct_System_GCs_CalleeSaveRegisters STRUCT 1
    _EBX                        uintptr                                ?  ;    0
    _EDI                        uintptr                                ?  ;    4
    _ESI                        uintptr                                ?  ;    8
    _EBP                        uintptr                                ?  ;   12
    ; bartok layout dataSize = 16
Struct_System_GCs_CalleeSaveRegisters ENDS

.ERRE Struct_System_GCs_CalleeSaveRegisters._EBX EQ 0
.ERRE Struct_System_GCs_CalleeSaveRegisters._EDI EQ 4
.ERRE Struct_System_GCs_CalleeSaveRegisters._ESI EQ 8
.ERRE Struct_System_GCs_CalleeSaveRegisters._EBP EQ 12
.ERRE (SIZE Struct_System_GCs_CalleeSaveRegisters) EQ 16


Class_System_GCs_CallStack STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_GCs_CallStack ENDS

.ERRE Class_System_GCs_CallStack._postHeader EQ 0
.ERRE (SIZE Class_System_GCs_CallStack) EQ 4

externdef ?c_codeBaseStartTable@Class_System_GCs_CallStack@@2PAIA:PTR_uintptr
externdef ??_7System_GCs_CallStack@@6B@:PTR_Class_System_VTable

Struct_System_GCs_CallStack_TransitionRecord STRUCT 1
    _oldTransitionRecord        PTR_Struct_System_GCs_CallStack_TransitionRecord ?  ;    0
    _callAddr                   uintptr                                ?  ;    4
    _stackBottom                uintptr                                ?  ;    8
    _calleeSaveRegisters        Struct_System_GCs_CalleeSaveRegisters  {} ;   12
    ; bartok layout dataSize = 28
Struct_System_GCs_CallStack_TransitionRecord ENDS

.ERRE Struct_System_GCs_CallStack_TransitionRecord._oldTransitionRecord EQ 0
.ERRE Struct_System_GCs_CallStack_TransitionRecord._callAddr EQ 4
.ERRE Struct_System_GCs_CallStack_TransitionRecord._stackBottom EQ 8
.ERRE Struct_System_GCs_CallStack_TransitionRecord._calleeSaveRegisters EQ 12
.ERRE (SIZE Struct_System_GCs_CallStack_TransitionRecord) EQ 28


Class_System_GCs_PageTable STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_GCs_PageTable ENDS

.ERRE Class_System_GCs_PageTable._postHeader EQ 0
.ERRE (SIZE Class_System_GCs_PageTable) EQ 4

externdef ?c_halPageDescriptor@Class_System_GCs_PageTable@@2PAIA:PTR_uint32
externdef ??_7System_GCs_PageTable@@6B@:PTR_Class_System_VTable

Class_System_GCs_Transitions STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_GCs_Transitions ENDS

.ERRE Class_System_GCs_Transitions._postHeader EQ 0
.ERRE (SIZE Class_System_GCs_Transitions) EQ 4

externdef ?g_LeaveManagedSpace@Class_System_GCs_Transitions@@SIXPAUStruct_Microsoft_Singularity_ThreadContext@@@Z:NEAR
externdef ?g_RestoreMutatorControlIfNeeded@Class_System_GCs_Transitions@@SIXXZ:NEAR
externdef ?g_ReturnToManagedSpace@Class_System_GCs_Transitions@@SIXPAUStruct_Microsoft_Singularity_ThreadContext@@@Z:NEAR
Class_System_GCs_Transitions_DormantState equ 010H
Class_System_GCs_Transitions_MutatorState equ 020H
Class_System_GCs_Transitions_OtherDormantState equ 01H
Class_System_GCs_Transitions_OtherMutatorState equ 02H
externdef ??_7System_GCs_Transitions@@6B@:PTR_Class_System_VTable

Class_System_Math STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_Math ENDS

.ERRE Class_System_Math._postHeader EQ 0
.ERRE (SIZE Class_System_Math) EQ 4

externdef ?g_Abs@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Acos@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Asin@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Atan@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Atan2@Class_System_Math@@SINNN@Z:NEAR
externdef ?g_Ceiling@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Cos@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Cosh@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Exp@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Floor@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Log@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Log10@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Mod@Class_System_Math@@SINNN@Z:NEAR
externdef ?g_Pow@Class_System_Math@@SINNN@Z:NEAR
externdef ?g_Round@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Sin@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Sinh@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Sqrt@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Tan@Class_System_Math@@SINN@Z:NEAR
externdef ?g_Tanh@Class_System_Math@@SINN@Z:NEAR
externdef ??_7System_Math@@6B@:PTR_Class_System_VTable

Class_System_NullReferenceException STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    __message                   PTR_Class_System_String                ?  ;    8
    __notifiedDebugger          bool                                   ?  ;   12
    __padding001                int8 3 dup (?)                            ;   13
    __throwAddress              uintptr                                ?  ;   16
    ; bartok layout dataSize = 20
Class_System_NullReferenceException ENDS

.ERRE Class_System_NullReferenceException._postHeader EQ 0
.ERRE Class_System_NullReferenceException.__message EQ 8
.ERRE Class_System_NullReferenceException.__notifiedDebugger EQ 12
.ERRE Class_System_NullReferenceException.__throwAddress EQ 16
.ERRE (SIZE Class_System_NullReferenceException) EQ 20

externdef ?m__ctor@Class_System_NullReferenceException@@SIXPAU1@@Z:NEAR
externdef ??_7System_NullReferenceException@@6B@:PTR_Class_System_VTable

Class_System_Number STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 16 dup (?)                           ;    4
    ; bartok layout dataSize = 20
Class_System_Number ENDS

.ERRE Class_System_Number._postHeader EQ 0
.ERRE (SIZE Class_System_Number) EQ 20

externdef ?g_atof@Class_System_Number@@SINPAUClassVector_uint8@@@Z:NEAR
externdef ?g_ecvt@Class_System_Number@@SI_NNHPAUClassVector_bartok_char@@PAHPA_N@Z:NEAR
externdef ??_7System_Number@@6B@:PTR_Class_System_VTable

Class_System_OverflowException STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    __message                   PTR_Class_System_String                ?  ;    8
    __notifiedDebugger          bool                                   ?  ;   12
    __padding001                int8 3 dup (?)                            ;   13
    __throwAddress              uintptr                                ?  ;   16
    ; bartok layout dataSize = 20
Class_System_OverflowException ENDS

.ERRE Class_System_OverflowException._postHeader EQ 0
.ERRE Class_System_OverflowException.__message EQ 8
.ERRE Class_System_OverflowException.__notifiedDebugger EQ 12
.ERRE Class_System_OverflowException.__throwAddress EQ 16
.ERRE (SIZE Class_System_OverflowException) EQ 20

externdef ?m__ctor@Class_System_OverflowException@@SIXPAU1@@Z:NEAR
externdef ??_7System_OverflowException@@6B@:PTR_Class_System_VTable

Class_System_Type STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    ; bartok layout dataSize = 4
Class_System_Type ENDS

.ERRE Class_System_Type._postHeader EQ 0
.ERRE (SIZE Class_System_Type) EQ 4

externdef ??_7System_Type@@6B@:PTR_Class_System_VTable

Class_System_RuntimeType STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 12 dup (?)                           ;    4
    _name                       PTR_Class_System_String                ?  ;   16
    __padding001                int8 24 dup (?)                           ;   20
    _classVtable                PTR_Class_System_VTable                ?  ;   44
    __padding002                int8 24 dup (?)                           ;   48
    ; bartok layout dataSize = 72
Class_System_RuntimeType ENDS

.ERRE Class_System_RuntimeType._postHeader EQ 0
.ERRE Class_System_RuntimeType._name EQ 16
.ERRE Class_System_RuntimeType._classVtable EQ 44
.ERRE (SIZE Class_System_RuntimeType) EQ 72

externdef ??_7System_RuntimeType@@6B@:PTR_Class_System_VTable

Struct_System_SchedulerTime STRUCT 1
    __padding000                int8 8 dup (?)                            ;    0
    ; bartok layout dataSize = 8
Struct_System_SchedulerTime ENDS

.ERRE (SIZE Struct_System_SchedulerTime) EQ 8


Class_System_StackOverflowException STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    __message                   PTR_Class_System_String                ?  ;    8
    __notifiedDebugger          bool                                   ?  ;   12
    __padding001                int8 3 dup (?)                            ;   13
    __throwAddress              uintptr                                ?  ;   16
    ; bartok layout dataSize = 20
Class_System_StackOverflowException ENDS

.ERRE Class_System_StackOverflowException._postHeader EQ 0
.ERRE Class_System_StackOverflowException.__message EQ 8
.ERRE Class_System_StackOverflowException.__notifiedDebugger EQ 12
.ERRE Class_System_StackOverflowException.__throwAddress EQ 16
.ERRE (SIZE Class_System_StackOverflowException) EQ 20

externdef ?m__ctor@Class_System_StackOverflowException@@SIXPAU1@@Z:NEAR
externdef ??_7System_StackOverflowException@@6B@:PTR_Class_System_VTable

Class_System_String STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 4 dup (?)                            ;    4
    _m_stringLength             int32                                  ?  ;    8
    _m_firstChar                bartok_char                            ?  ;   12
    ; bartok layout dataSize = 14
Class_System_String ENDS

.ERRE Class_System_String._postHeader EQ 0
.ERRE Class_System_String._m_stringLength EQ 8
.ERRE Class_System_String._m_firstChar EQ 12
.ERRE (SIZE Class_System_String) EQ 14

externdef ??_7System_String@@6B@:PTR_Class_System_VTable

Struct_System_Threading_SpinLock STRUCT 1
    __padding000                int8 8 dup (?)                            ;    0
    ; bartok layout dataSize = 8
Struct_System_Threading_SpinLock ENDS

.ERRE (SIZE Struct_System_Threading_SpinLock) EQ 8


Class_System_Threading_Thread STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 16 dup (?)                           ;    4
    _asmStackBase               uintptr                                ?  ;   20
    _asmStackLimit              uintptr                                ?  ;   24
    _asmStackMarker             PTR_Struct_System_GCs_CallStack_TransitionRecord ?  ;   28
    _context                    PTR_Struct_Microsoft_Singularity_ThreadContext ?  ;   32
    __padding001                int8 108 dup (?)                          ;   36
    ; bartok layout dataSize = 144
Class_System_Threading_Thread ENDS

.ERRE Class_System_Threading_Thread._postHeader EQ 0
.ERRE Class_System_Threading_Thread._asmStackBase EQ 20
.ERRE Class_System_Threading_Thread._asmStackLimit EQ 24
.ERRE Class_System_Threading_Thread._asmStackMarker EQ 28
.ERRE Class_System_Threading_Thread._context EQ 32
.ERRE (SIZE Class_System_Threading_Thread) EQ 144

externdef ?g_CheckKernelProcessBoundary@Class_System_Threading_Thread@@SIPAUuintPtr@@PAU2@0PAUClass_System_Exception@@@Z:NEAR
externdef ?g_ThreadStub@Class_System_Threading_Thread@@SIXH@Z:NEAR
externdef ??_7System_Threading_Thread@@6B@:PTR_Class_System_VTable

Class_System_VTable STRUCT 1
    _postHeader                 Struct_Microsoft_Bartok_Runtime_PostHeader {} ;    0
    __padding000                int8 64 dup (?)                           ;    4
    _vtableType                 PTR_Class_System_RuntimeType           ?  ;   68
    __padding001                int8 8 dup (?)                            ;   72
    _isAcyclicRefType           bool                                   ?  ;   80
    ; bartok layout dataSize = 81
Class_System_VTable ENDS

.ERRE Class_System_VTable._postHeader EQ 0
.ERRE Class_System_VTable._vtableType EQ 68
.ERRE Class_System_VTable._isAcyclicRefType EQ 80
.ERRE (SIZE Class_System_VTable) EQ 81

externdef ?g_Initialize@Class_System_VTable@@SIXPAUClass_System_RuntimeType@@@Z:NEAR
externdef ?g_IsExceptionHandler@Class_System_VTable@@SI_NPAUClass_System_Type@@PAUClass_System_Exception@@@Z:NEAR
externdef ?g_TerminateByException@Class_System_VTable@@SIXPAUClass_System_Exception@@@Z:NEAR
externdef ?g_throwNewOverflowException@Class_System_VTable@@SIXXZ:NEAR
externdef ?c_dynamicCountProfileFunction@Class_System_VTable@@2PAUClassVector_int64@@A:PTR_ClassVector_int64
externdef ??_7System_VTable@@6B@:PTR_Class_System_VTable

