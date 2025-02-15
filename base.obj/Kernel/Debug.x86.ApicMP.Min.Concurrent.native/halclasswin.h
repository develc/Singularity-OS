#pragma pack(push, 1) 
//
// Warning: This .h file is generated automatically by Bartok.
//          If you want to change its contents, edit the source .cs files.
//

#ifndef SINGULARITY_LOADER
#pragma pack(push, 1)
#endif

typedef PTR_TYPE /* void* */ Null;
struct Class_Microsoft_Bartok_Runtime_Constants;
struct Struct_Microsoft_Bartok_Runtime_PostHeader;
struct Struct_Microsoft_Bartok_Runtime_StructuralType;
struct Class_Microsoft_Singularity_DebugStub;
struct Struct_Microsoft_Singularity_Eventing_ArrayType;
struct Class_Microsoft_Singularity_Eventing_Controller;
struct Class_Microsoft_Singularity_Eventing_DataType;
struct Class_Microsoft_Singularity_Eventing_EventDescriptor;
struct Class_Microsoft_Singularity_Eventing_EventingStorage;
struct Class_Microsoft_Singularity_Eventing_EventSource;
struct Class_Microsoft_Singularity_Eventing_GlobalStorage;
struct Class_Microsoft_Singularity_Eventing_KernelController;
struct Class_Microsoft_Singularity_Eventing_LocalController;
struct Class_Microsoft_Singularity_Eventing_MemoryStorage;
struct Struct_Microsoft_Singularity_Eventing_QualityOfService;
struct Class_Microsoft_Singularity_Eventing_QuerySession;
struct Class_Microsoft_Singularity_GCProfilerLogger;
struct Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer;
struct Class_Microsoft_Singularity_Hal_Cpu;
struct Class_Microsoft_Singularity_Hal_HalDevices;
struct Class_Microsoft_Singularity_Hal_Platform;
struct Struct_Microsoft_Singularity_Io_FileImage;
struct Class_Microsoft_Singularity_Io_IoPort;
struct Class_Microsoft_Singularity_Io_Resources;
struct Struct_Microsoft_Singularity_Isal_CpuRecord;
struct Struct_Microsoft_Singularity_Isal_InterruptContext;
struct Class_Microsoft_Singularity_Isal_Isa;
struct Class_Microsoft_Singularity_Isal_Isa_ICallback;
struct Struct_Microsoft_Singularity_Isal_Isa_Type;
struct Struct_Microsoft_Singularity_Isal_IX_CR0;
struct Struct_Microsoft_Singularity_Isal_IX_CR3;
struct Struct_Microsoft_Singularity_Isal_IX_CR4;
struct Struct_Microsoft_Singularity_Isal_IX_DescriptorTable;
struct Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt;
struct Struct_Microsoft_Singularity_Isal_IX_EFlags;
struct Struct_Microsoft_Singularity_Isal_IX_EFlagsShift;
struct Struct_Microsoft_Singularity_Isal_IX_EVectors;
struct Struct_Microsoft_Singularity_Isal_IX_Fpcw;
struct Struct_Microsoft_Singularity_Isal_IX_Fpsw;
struct Struct_Microsoft_Singularity_Isal_IX_Gdte;
struct Struct_Microsoft_Singularity_Isal_IX_Gdte64;
struct Struct_Microsoft_Singularity_Isal_IX_Gdtp;
struct Struct_Microsoft_Singularity_Isal_IX_Idte;
struct Struct_Microsoft_Singularity_Isal_IX_Idtp;
struct Struct_Microsoft_Singularity_Isal_IX_InterruptTable;
struct Struct_Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher;
struct Struct_Microsoft_Singularity_Isal_IX_MmxContext;
struct Struct_Microsoft_Singularity_Isal_IX_PE;
struct Struct_Microsoft_Singularity_Isal_IX_TSS;
struct Struct_Microsoft_Singularity_Isal_IX_uint128;
struct Struct_Microsoft_Singularity_Isal_SpillContext;
struct Struct_Microsoft_Singularity_Isal_ThreadRecord;
struct Struct_Microsoft_Singularity_Kd_AlphaKdControlReport;
struct Struct_Microsoft_Singularity_Kd_AlphaKdControlSet;
struct Struct_Microsoft_Singularity_Kd_ArmContext;
struct Struct_Microsoft_Singularity_Kd_ArmKdControlReport;
struct Struct_Microsoft_Singularity_Kd_ArmKdControlSet;
struct Struct_Microsoft_Singularity_Kd_ArmKProcessorState;
struct Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters;
struct Struct_Microsoft_Singularity_Kd_ArmRuntimeFunction;
struct Struct_Microsoft_Singularity_Kd_ArmRuntimeFunctionException;
struct Struct_Microsoft_Singularity_Kd_ExceptionRecord64;
struct Struct_Microsoft_Singularity_Kd_Ia64KdControlReport;
struct Struct_Microsoft_Singularity_Kd_Ia64KdControlSet;
struct Struct_Microsoft_Singularity_Kd_InstructionStream;
struct Struct_Microsoft_Singularity_Kd_UInt128;
struct Struct_Microsoft_Singularity_Kd_X64Context;
struct Struct_Microsoft_Singularity_Kd_X64Descriptor;
struct Struct_Microsoft_Singularity_Kd_X64KdControlReport;
struct Struct_Microsoft_Singularity_Kd_X64KdControlSet;
struct Struct_Microsoft_Singularity_Kd_X64KProcessorState;
struct Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters;
struct Struct_Microsoft_Singularity_Kd_X64VectorRegisters;
struct Struct_Microsoft_Singularity_Kd_X64XmmSaveArea;
struct Struct_Microsoft_Singularity_Kd_X86Context;
struct Struct_Microsoft_Singularity_Kd_X86Descriptor;
struct Struct_Microsoft_Singularity_Kd_X86Fp387Register;
struct Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea;
struct Struct_Microsoft_Singularity_Kd_X86KdControlReport;
struct Struct_Microsoft_Singularity_Kd_X86KdControlSet;
struct Struct_Microsoft_Singularity_Kd_X86KProcessorState;
struct Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters;
struct Struct_Microsoft_Singularity_Kd_X86SegmentRegisters;
struct Struct_Microsoft_Singularity_Kd_X86Unaligned128;
struct Struct_Microsoft_Singularity_Kd_X86XmmSaveArea;
struct Class_Microsoft_Singularity_Kernel;
struct Class_Microsoft_Singularity_KernelDebugger_Kd;
struct Struct_Microsoft_Singularity_KernelDebugger_KdPacketType;
struct Struct_Microsoft_Singularity_KernelDebugger_KdStatus;
struct Class_Microsoft_Singularity_Loader_PEImage;
struct Class_Microsoft_Singularity_Memory_MemoryManager;
struct Struct_Microsoft_Singularity_Memory_PhysicalAddress;
struct Class_Microsoft_Singularity_Memory_Stacks;
struct Class_Microsoft_Singularity_Memory_VMManager;
struct Class_Microsoft_Singularity_Monitoring;
struct Struct_Microsoft_Singularity_Monitoring_LogEntry;
struct Struct_Microsoft_Singularity_MpBootInfo;
struct Struct_Microsoft_Singularity_MpBootStatus;
struct Class_Microsoft_Singularity_MpExecution;
struct Class_Microsoft_Singularity_PrivilegedGate;
struct Class_Microsoft_Singularity_Process;
struct Class_Microsoft_Singularity_Processor;
struct Struct_Microsoft_Singularity_ProcessorContext;
struct Class_Microsoft_Singularity_ProcessUncaughtException;
struct Class_Microsoft_Singularity_Scheduling_ProcessorDispatcher;
struct Class_Microsoft_Singularity_Scheduling_Scheduler;
struct Class_Microsoft_Singularity_Scheduling_SchedulerLock;
struct Class_Microsoft_Singularity_Scheduling_ThreadEntry;
struct Class_Microsoft_Singularity_Scheduling_ThreadQueue;
struct Struct_Microsoft_Singularity_Scheduling_ThreadQueueStruct;
struct Struct_Microsoft_Singularity_SMAPINFO;
struct Struct_Microsoft_Singularity_ThreadContext;
struct Class_Microsoft_Singularity_Tracing;
struct Struct_Microsoft_Singularity_V1_Services_PlatformService;
struct Struct_Microsoft_Singularity_V1_Services_ProcessService;
struct Struct_Microsoft_Singularity_V1_Services_StackService;
struct Class_System_Buffer;
struct Struct_System_Decimal;
struct Class_System_DivideByZeroException;
struct Class_System_Exception;
struct Class_System_GC;
struct Struct_System_GCs_CalleeSaveRegisters;
struct Class_System_GCs_CallStack;
struct Struct_System_GCs_CallStack_TransitionRecord;
struct Class_System_GCs_PageTable;
struct Class_System_GCs_Transitions;
struct Class_System_Math;
struct Class_System_NullReferenceException;
struct Class_System_Number;
struct Class_System_Object;
struct Class_System_OverflowException;
struct Class_System_RuntimeType;
struct Struct_System_SchedulerTime;
struct Class_System_StackOverflowException;
struct Class_System_String;
struct Struct_System_Threading_SpinLock;
struct Class_System_Threading_Thread;
struct Class_System_Type;
struct Class_System_VTable;
struct ClassVector_WCHAR;
struct ClassVector_Class_Microsoft_Singularity_Hal_Cpu;
struct ClassVector_Class_System_String;
struct ClassVector_int32;
struct ClassVector_int64;
struct ClassVector_uint8;

struct Class_Microsoft_Bartok_Runtime_PostHeader
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Bartok_Runtime_PostHeader@@2UClass_System_VTable@@A=??_7Microsoft_Bartok_Runtime_PostHeader@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Bartok_Runtime_PostHeader
{
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_System_VTable* */       vtableObject;                            //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Bartok_Runtime_PostHeader, vtableObject) == 0);
STATIC_ASSERT(sizeof(Struct_Microsoft_Bartok_Runtime_PostHeader) == 4);

struct Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Object@@2UClass_System_VTable@@A=??_7System_Object@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    Struct_Microsoft_Bartok_Runtime_PostHeader postHeader;               //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(OFFSETOF(Class_System_Object, postHeader) == 0);
STATIC_ASSERT(sizeof(Class_System_Object) == 4);

struct Class_Microsoft_Bartok_Runtime_Constants : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Bartok_Runtime_Constants@@2UClass_System_VTable@@A=??_7Microsoft_Bartok_Runtime_Constants@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* ClassVector_Class_System_String* */ c_StructuralTypeNames;
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* ClassVector_int32* */         arrayOfStride;                           //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Bartok_Runtime_Constants, arrayOfStride) == 4);
STATIC_ASSERT(sizeof(Class_Microsoft_Bartok_Runtime_Constants) == 8);

struct Class_Microsoft_Bartok_Runtime_StructuralType
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Bartok_Runtime_StructuralType@@2UClass_System_VTable@@A=??_7Microsoft_Bartok_Runtime_StructuralType@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Bartok_Runtime_StructuralType
{
    INT8                        __padding000[4];                         //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Bartok_Runtime_StructuralType) == 4);

#define Struct_Microsoft_Bartok_Runtime_StructuralType_Bool 0x4    // 4
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Char 0x5    // 5
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Float32 0xe    // 14
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Float64 0xf    // 15
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Int16 0x7    // 7
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Int32 0x8    // 8
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Int64 0x9    // 9
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Int8 0x6    // 6
#define Struct_Microsoft_Bartok_Runtime_StructuralType_IntPtr 0x10    // 16
#define Struct_Microsoft_Bartok_Runtime_StructuralType_Reference 0x1    // 1
#define Struct_Microsoft_Bartok_Runtime_StructuralType_UInt16 0xb    // 11
#define Struct_Microsoft_Bartok_Runtime_StructuralType_UInt32 0xc    // 12
#define Struct_Microsoft_Bartok_Runtime_StructuralType_UInt64 0xd    // 13
#define Struct_Microsoft_Bartok_Runtime_StructuralType_UInt8 0xa    // 10
#define Struct_Microsoft_Bartok_Runtime_StructuralType_UIntPtr 0x11    // 17

struct Class_Microsoft_Singularity_DebugStub : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_DebugStub@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_DebugStub@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_DebugStub) == 4);

struct Class_Microsoft_Singularity_Eventing_ArrayType
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_ArrayType@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_ArrayType@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Eventing_ArrayType
{
    UINT16                      Length;                                  //    0
    UINT16                      ItemSize;                                //    2
    UINT32                      Type;                                    //    4
    PTR_TYPE /* void* */                      Buffer;                                  //    8
    // bartok layout dataSize = 12
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Eventing_ArrayType, Length) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Eventing_ArrayType, ItemSize) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Eventing_ArrayType, Type) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Eventing_ArrayType, Buffer) == 8);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Eventing_ArrayType) == 12);

struct Class_Microsoft_Singularity_Eventing_Controller : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_Controller@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_Controller@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[4];                         //    4
    // bartok layout dataSize = 8
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_Controller) == 8);

#define Class_Microsoft_Singularity_Eventing_Controller_MonitoringInfo 0x2    // 2
#define Class_Microsoft_Singularity_Eventing_Controller_TracingInfo 0x1    // 1

struct Class_Microsoft_Singularity_Eventing_DataType : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_DataType@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_DataType@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_DataType) == 4);

#define Class_Microsoft_Singularity_Eventing_DataType___arrayType 0x8000    // 32768
#define Class_Microsoft_Singularity_Eventing_DataType___byte 0x2    // 2
#define Class_Microsoft_Singularity_Eventing_DataType___int 0x5    // 5
#define Class_Microsoft_Singularity_Eventing_DataType___int16 0x3    // 3
#define Class_Microsoft_Singularity_Eventing_DataType___int32 0x5    // 5
#define Class_Microsoft_Singularity_Eventing_DataType___int64 0x7    // 7
#define Class_Microsoft_Singularity_Eventing_DataType___int8 0x1    // 1
#define Class_Microsoft_Singularity_Eventing_DataType___IntPtr 0x9    // 9
#define Class_Microsoft_Singularity_Eventing_DataType___string 0x4000    // 16384
#define Class_Microsoft_Singularity_Eventing_DataType___szChar 0x2000    // 8192
#define Class_Microsoft_Singularity_Eventing_DataType___uint 0x6    // 6
#define Class_Microsoft_Singularity_Eventing_DataType___uint16 0x4    // 4
#define Class_Microsoft_Singularity_Eventing_DataType___uint32 0x6    // 6
#define Class_Microsoft_Singularity_Eventing_DataType___uint64 0x8    // 8
#define Class_Microsoft_Singularity_Eventing_DataType___uint8 0x2    // 2
#define Class_Microsoft_Singularity_Eventing_DataType___UIntPtr 0xa    // 10

struct Class_Microsoft_Singularity_Eventing_EventDescriptor : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_EventDescriptor@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_EventDescriptor@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_EventDescriptor) == 24);

struct Class_Microsoft_Singularity_Eventing_EventingStorage : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_EventingStorage@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_EventingStorage@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_EventingStorage) == 24);

#define Class_Microsoft_Singularity_Eventing_EventingStorage_EVENTING_STORAGE_FLAGS_ENABLED 0x10000    // 65536
#define Class_Microsoft_Singularity_Eventing_EventingStorage_EVENTING_STORAGE_FLAGS_STACKTRACES 0x2    // 2

struct Class_Microsoft_Singularity_Eventing_EventSource : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_EventSource@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_EventSource@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_EventSource) == 24);

#define Class_Microsoft_Singularity_Eventing_EventSource_CAPTURE_DEBUG_PRINT 0x2    // 2
#define Class_Microsoft_Singularity_Eventing_EventSource_CAPTURE_STACK_TRACE 0x1    // 1
#define Class_Microsoft_Singularity_Eventing_EventSource_ENABLE_ALL_MASK 0xffff0000    // 4294901760

struct Class_Microsoft_Singularity_Eventing_GlobalStorage : Class_Microsoft_Singularity_Eventing_EventingStorage
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_GlobalStorage@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_GlobalStorage@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 24
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_GlobalStorage) == 24);

struct Class_Microsoft_Singularity_Eventing_LocalController : Class_Microsoft_Singularity_Eventing_Controller
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_LocalController@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_LocalController@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[20];                        //    8
    // bartok layout dataSize = 28
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_LocalController) == 28);

struct Class_Microsoft_Singularity_Eventing_KernelController : Class_Microsoft_Singularity_Eventing_LocalController
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_KernelController@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_KernelController@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[4];                         //   28
    // bartok layout dataSize = 32
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_KernelController) == 32);

struct Class_Microsoft_Singularity_Eventing_MemoryStorage : Class_Microsoft_Singularity_Eventing_EventingStorage
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_MemoryStorage@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_MemoryStorage@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[12];                        //   24
    // bartok layout dataSize = 36
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_MemoryStorage) == 36);

struct Class_Microsoft_Singularity_Eventing_QualityOfService
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_QualityOfService@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_QualityOfService@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Eventing_QualityOfService
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Eventing_QualityOfService) == 16);

#define Struct_Microsoft_Singularity_Eventing_QualityOfService_ActiveEvents 0x3    // 3
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_BreakOnRecycle 0x40    // 64
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_DropNewEvents 0x20    // 32
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_OOM_GeneralFailure 0x10    // 16
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_PermanentEvents 0x1    // 1
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_RecyclableEvents 0x2    // 2
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeGlobal 0x1    // 1
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeLocal 0x2    // 2
#define Struct_Microsoft_Singularity_Eventing_QualityOfService_ScopeUndefined 0x0    // 0

struct Class_Microsoft_Singularity_Eventing_QuerySession : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_QuerySession@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_QuerySession@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[12];                        //    4
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_QuerySession) == 16);

struct Class_Microsoft_Singularity_GCProfilerLogger : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_GCProfilerLogger@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_GCProfilerLogger@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static UPTR_TYPE c_StorageHandle;
    static UPTR_TYPE c_TypeStorageHandle;
    INT8                        __padding000[104];                       //    4
    // bartok layout dataSize = 108
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_GCProfilerLogger) == 108);

struct Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer) == 24);

struct Class_Microsoft_Singularity_Isal_IX_Gdtp
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Gdtp@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Gdtp@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Gdtp
{
    UINT16                      pad;                                     //    0
    UINT16                      limit;                                   //    2
    UINT32                      addr;                                    //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdtp, pad) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdtp, limit) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdtp, addr) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Gdtp) == 8);

struct Class_Microsoft_Singularity_Isal_IX_Gdte
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Gdte@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Gdte@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Gdte
{
    UINT16                      limit;                                   //    0
    UINT16                      base0_15;                                //    2
    UINT8                       base16_23;                               //    4
    UINT8                       access;                                  //    5
    UINT8                       granularity;                             //    6
    UINT8                       base24_31;                               //    7
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, limit) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, base0_15) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, base16_23) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, access) == 5);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, granularity) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte, base24_31) == 7);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Gdte) == 8);

#define Struct_Microsoft_Singularity_Isal_IX_Gdte_ACCESSED 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_CallGate16 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_CallGate32 0xc    // 12
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_CODE 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_CONFORMING 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_EXPANDDOWN 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_IntGate16 0x6    // 6
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_IntGate32 0xe    // 14
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_IS32BIT 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_IS64BIT 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Ldt 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_LIMIT20 0xf    // 15
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_PAGES 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_PRESENT 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_READABLE 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved10 0xa    // 10
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved13 0xd    // 13
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Reserved8 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_RING0 0x0    // 0
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_RING1 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_RING2 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_RING3 0x60    // 96
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_TaskGate 0x5    // 5
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_TrapGate16 0x7    // 7
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_TrapGate32 0xf    // 15
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss16Busy 0x3    // 3
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss16Free 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss32Busy 0xb    // 11
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_Tss32Free 0x9    // 9
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_USER 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_Gdte_WRITEABLE 0x2    // 2

struct Class_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt
{
    Struct_Microsoft_Singularity_Isal_IX_Gdte nul;                       //    0
    Struct_Microsoft_Singularity_Isal_IX_Gdte pv;                        //    8
    Struct_Microsoft_Singularity_Isal_IX_Gdte rc;                        //   16
    Struct_Microsoft_Singularity_Isal_IX_Gdte rd;                        //   24
    Struct_Microsoft_Singularity_Isal_IX_Gdte pc;                        //   32
    Struct_Microsoft_Singularity_Isal_IX_Gdte pd;                        //   40
    Struct_Microsoft_Singularity_Isal_IX_Gdte lc;                        //   48
    Struct_Microsoft_Singularity_Isal_IX_Gdte ld;                        //   56
    Struct_Microsoft_Singularity_Isal_IX_Gdte uc;                        //   64
    Struct_Microsoft_Singularity_Isal_IX_Gdte ud;                        //   72
    Struct_Microsoft_Singularity_Isal_IX_Gdte pp;                        //   80
    Struct_Microsoft_Singularity_Isal_IX_Gdte nn;                        //   88
    Struct_Microsoft_Singularity_Isal_IX_Gdte tss;                       //   96
    // bartok layout dataSize = 104
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, nul) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, pv) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, rc) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, rd) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, pc) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, pd) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, lc) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, ld) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, uc) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, ud) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, pp) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, nn) == 88);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt, tss) == 96);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt) == 104);

struct Class_Microsoft_Singularity_Isal_IX_DescriptorTable
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_DescriptorTable@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_DescriptorTable@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_DescriptorTable
{
    Struct_Microsoft_Singularity_Isal_IX_DescriptorTable_Gdt gdt;        //    0
    Struct_Microsoft_Singularity_Isal_IX_Gdtp gdtPtr;                    //  104
    // bartok layout dataSize = 112
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable, gdt) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable, gdtPtr) == 104);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_DescriptorTable) == 112);

struct Class_Microsoft_Singularity_Hal_Cpu : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Hal_Cpu@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Hal_Cpu@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT32                       Size;                                    //    4
    INT32                       Id;                                      //    8
    UPTR_TYPE                     CpuRecordPage;                           //   12
    UPTR_TYPE                     KernelStackLimit;                        //   16
    UPTR_TYPE                     KernelStackBegin;                        //   20
    INT32                       DomainBsp;                               //   24
    Struct_Microsoft_Singularity_Isal_IX_DescriptorTable segments;       //   28
    INT8                        __padding000[1];                         //  140
    // bartok layout dataSize = 141
    
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, Size) == 4);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, Id) == 8);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, CpuRecordPage) == 12);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, KernelStackLimit) == 16);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, KernelStackBegin) == 20);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, DomainBsp) == 24);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Cpu, segments) == 28);
STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Hal_Cpu) == 141);

struct Class_Microsoft_Singularity_MpBootInfo
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_MpBootInfo@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_MpBootInfo@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_MpBootInfo
{
    UINT32                      signature;                               //    0
    UPTR_TYPE                     KernelStackBegin;                        //    4
    UPTR_TYPE                     KernelStack;                             //    8
    UPTR_TYPE                     KernelStackLimit;                        //   12
    INT32                       TargetCpu;                               //   16
    // bartok layout dataSize = 20
    
    
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_MpBootInfo, signature) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_MpBootInfo, KernelStackBegin) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_MpBootInfo, KernelStack) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_MpBootInfo, KernelStackLimit) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_MpBootInfo, TargetCpu) == 16);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_MpBootInfo) == 20);

#define Struct_Microsoft_Singularity_MpBootInfo_MAX_CPU 0xf    // 15
#define Struct_Microsoft_Singularity_MpBootInfo_Signature 0x4d504249    // 1297105481

struct Class_Microsoft_Singularity_Hal_Platform : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Hal_Platform@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Hal_Platform@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* Class_Microsoft_Singularity_Hal_Platform* */ c_thePlatform;
    INT32                       Size;                                    //    4
    UINT32                      BootYear;                                //    8
    UINT32                      BootMonth;                               //   12
    UINT32                      BootDay;                                 //   16
    UINT32                      BootHour;                                //   20
    UINT32                      BootMinute;                              //   24
    UINT32                      BootSecond;                              //   28
    INT32                       CpuMaxCount;                             //   32
    INT32                       CpuRealCount;                            //   36
    INT32                       BootCount;                               //   40
    UPTR_TYPE                     Smap32;                                  //   44
    INT32                       SmapCount;                               //   48
    UPTR_TYPE                     PhysicalBase;                            //   52
    PTR_TYPE /* UINT32* */                    OutgoingMessage;                         //   56
    PTR_TYPE /* INT32* */                     OutgoingCount;                           //   60
    PTR_TYPE /* UINT32* */                    IncomingFree;                            //   64
    PTR_TYPE /* INT32* */                     IncomingFreeCount;                       //   68
    PTR_TYPE /* UINT32* */                    IncomingMessage;                         //   72
    PTR_TYPE /* INT32* */                     IncomingCount;                           //   76
    PTR_TYPE /* UINT32* */                    OutgoingFree;                            //   80
    PTR_TYPE /* INT32* */                     OutgoingFreeCount;                       //   84
    UINT32                      MaxBufferLength;                         //   88
    UINT32                      thisDestinationId;                       //   92
    UINT32                      hasApic;                                 //   96
    UPTR_TYPE                     BootAllocatedMemory;                     //  100
    UPTR_TYPE                     BootAllocatedMemorySize;                 //  104
    UPTR_TYPE                     CommandLine32;                           //  108
    INT32                       CommandLineCount;                        //  112
    INT32                       CpuRecordPointerOffset;                  //  116
    INT32                       ThreadRecordPointerOffset;               //  120
    UPTR_TYPE                     LogRecordBuffer;                         //  124
    UPTR_TYPE                     LogRecordSize;                           //  128
    UPTR_TYPE                     LogTextBuffer;                           //  132
    UPTR_TYPE                     LogTextSize;                             //  136
    UPTR_TYPE                     KernelDllBase;                           //  140
    UPTR_TYPE                     KernelDllSize;                           //  144
    UPTR_TYPE                     KernelDllFirstPage;                      //  148
    UPTR_TYPE                     MiniDumpBase;                            //  152
    UPTR_TYPE                     MiniDumpLimit;                           //  156
    INT32                       DebuggerType;                            //  160
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Hal_Cpu* */ bootCpu;                       //  164
    UINT32                      RecSize;                                 //  168
    UINT16                      DebugBasePort;                           //  172
    UINT16                      DebugSpinBase;                           //  174
    UINT32                      TwiddleSpinBase;                         //  176
    UINT64                      Info32;                                  //  180
    UINT64                      Kill32;                                  //  188
    UINT32                      KillAction;                              //  196
    UINT64                      DumpAddr32;                              //  200
    UINT64                      FileImageTableBase32;                    //  208
    UINT32                      FileImageTableEntries;                   //  216
    UINT32                      DumpSize32;                              //  220
    UINT64                      DumpRemainder;                           //  224
    UINT64                      DumpLimit;                               //  232
    UINT64                      NativeContext;                           //  240
    UINT64                      Cpus;                                    //  248
    UINT16                      BiosPicMask;                             //  256
    UINT8                       BiosWarmResetCmos;                       //  258
    INT8                        __padding000[1];                         //  259
    UINT32                      BiosWarmResetVector;                     //  260
    UINT32                      Info16;                                  //  264
    UINT64                      IdtEnter0;                               //  268
    UINT64                      IdtEnter1;                               //  276
    UINT64                      IdtEnterN;                               //  284
    UINT64                      IdtTarget;                               //  292
    UINT64                      Pdpt32;                                  //  300
    UINT64                      KernelPdpt64;                            //  308
    UINT64                      Undump;                                  //  316
    UINT32                      PciBiosAX;                               //  324
    UINT32                      PciBiosBX;                               //  328
    UINT32                      PciBiosCX;                               //  332
    UINT32                      PciBiosEDX;                              //  336
    UINT64                      AcpiRoot32;                              //  340
    UINT64                      PnpNodesAddr32;                          //  348
    UINT32                      PnpNodesSize32;                          //  356
    UINT64                      SmbiosRoot32;                            //  360
    UINT64                      DmiRoot32;                               //  368
    UINT32                      IsaCsns;                                 //  376
    UINT16                      IsaReadPort;                             //  380
    INT8                        __padding001[2];                         //  382
    UINT32                      Ebda32;                                  //  384
    UINT32                      MpFloat32;                               //  388
    UINT64                      Ohci1394Base;                            //  392
    UINT64                      Ohci1394BufferAddr32;                    //  400
    UINT32                      Ohci1394BufferSize32;                    //  408
    UINT64                      VesaBuffer;                              //  412
    UINT64                      MpEnter32;                               //  420
    UINT32                      MpCpuCount;                              //  428
    UINT32                      MpStatus32;                              //  432
    UINT64                      MpStartupLock32;                         //  436
    Struct_Microsoft_Singularity_MpBootInfo MpBootInfo;                  //  444
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* ClassVector_Class_Microsoft_Singularity_Hal_Cpu* */ processors;        //  464
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Hal_HalDevices* */ devices;                //  468
    // bartok layout dataSize = 472
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Size) == 4);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootYear) == 8);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootMonth) == 12);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootDay) == 16);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootHour) == 20);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootMinute) == 24);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootSecond) == 28);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, CpuMaxCount) == 32);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, CpuRealCount) == 36);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootCount) == 40);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Smap32) == 44);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, SmapCount) == 48);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PhysicalBase) == 52);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, OutgoingMessage) == 56);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, OutgoingCount) == 60);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IncomingFree) == 64);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IncomingFreeCount) == 68);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IncomingMessage) == 72);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IncomingCount) == 76);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, OutgoingFree) == 80);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, OutgoingFreeCount) == 84);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MaxBufferLength) == 88);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, thisDestinationId) == 92);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, hasApic) == 96);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootAllocatedMemory) == 100);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BootAllocatedMemorySize) == 104);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, CommandLine32) == 108);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, CommandLineCount) == 112);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, CpuRecordPointerOffset) == 116);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, ThreadRecordPointerOffset) == 120);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, LogRecordBuffer) == 124);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, LogRecordSize) == 128);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, LogTextBuffer) == 132);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, LogTextSize) == 136);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, KernelDllBase) == 140);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, KernelDllSize) == 144);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, KernelDllFirstPage) == 148);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MiniDumpBase) == 152);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MiniDumpLimit) == 156);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DebuggerType) == 160);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, bootCpu) == 164);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, RecSize) == 168);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DebugBasePort) == 172);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DebugSpinBase) == 174);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, TwiddleSpinBase) == 176);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Info32) == 180);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Kill32) == 188);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, KillAction) == 196);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DumpAddr32) == 200);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, FileImageTableBase32) == 208);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, FileImageTableEntries) == 216);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DumpSize32) == 220);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DumpRemainder) == 224);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DumpLimit) == 232);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, NativeContext) == 240);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Cpus) == 248);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BiosPicMask) == 256);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BiosWarmResetCmos) == 258);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, BiosWarmResetVector) == 260);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Info16) == 264);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IdtEnter0) == 268);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IdtEnter1) == 276);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IdtEnterN) == 284);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IdtTarget) == 292);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Pdpt32) == 300);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, KernelPdpt64) == 308);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Undump) == 316);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PciBiosAX) == 324);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PciBiosBX) == 328);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PciBiosCX) == 332);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PciBiosEDX) == 336);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, AcpiRoot32) == 340);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PnpNodesAddr32) == 348);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, PnpNodesSize32) == 356);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, SmbiosRoot32) == 360);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, DmiRoot32) == 368);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IsaCsns) == 376);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, IsaReadPort) == 380);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Ebda32) == 384);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpFloat32) == 388);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Ohci1394Base) == 392);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Ohci1394BufferAddr32) == 400);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, Ohci1394BufferSize32) == 408);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, VesaBuffer) == 412);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpEnter32) == 420);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpCpuCount) == 428);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpStatus32) == 432);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpStartupLock32) == 436);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, MpBootInfo) == 444);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, processors) == 464);
STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Hal_Platform, devices) == 468);
STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Hal_Platform) == 472);

#define Class_Microsoft_Singularity_Hal_Platform_DEBUGGER_1394 0x2    // 2
#define Class_Microsoft_Singularity_Hal_Platform_DEBUGGER_NONE 0x0    // 0
#define Class_Microsoft_Singularity_Hal_Platform_DEBUGGER_SERIAL 0x1    // 1
#define Class_Microsoft_Singularity_Hal_Platform_ERROR_BAD_PLATFORM 0x2    // 2
#define Class_Microsoft_Singularity_Hal_Platform_ERROR_BAD_SIZE 0x1    // 1
#define Class_Microsoft_Singularity_Hal_Platform_EXIT_AND_HALT 0x1ffc    // 8188
#define Class_Microsoft_Singularity_Hal_Platform_EXIT_AND_RESTART 0x1fff    // 8191
#define Class_Microsoft_Singularity_Hal_Platform_EXIT_AND_SHUTDOWN 0x1ffe    // 8190
#define Class_Microsoft_Singularity_Hal_Platform_EXIT_AND_WARMBOOT 0x1ffd    // 8189
#define Class_Microsoft_Singularity_Hal_Platform_IO_MEMORY_SIZE 0x800000    // 8388608
#define Class_Microsoft_Singularity_Hal_Platform_KERNEL_BOUNDARY 0x40000000    // 1073741824
#define Class_Microsoft_Singularity_Hal_Platform_MAX_VIRTUAL_ADDR 0x80000000    // 2147483648
#define Class_Microsoft_Singularity_Hal_Platform_MP_ABI_BASE 0x600000    // 6291456
#define Class_Microsoft_Singularity_Hal_Platform_PAGE_SIZE 0x1000    // 4096
#define Class_Microsoft_Singularity_Hal_Platform_SUCCESS 0x0    // 0
#define Class_Microsoft_Singularity_Hal_Platform_UNCACHED_MAPPED 0x2000000    // 33554432
#define Class_Microsoft_Singularity_Hal_Platform_UNCACHED_PHYSICAL 0xfe000000    // 4261412864

struct Class_Microsoft_Singularity_Io_FileImage
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Io_FileImage@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Io_FileImage@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Io_FileImage
{
    UPTR_TYPE                     Address;                                 //    0
    UINT32                      Size;                                    //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Io_FileImage, Address) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Io_FileImage, Size) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Io_FileImage) == 8);

struct Class_Microsoft_Singularity_Io_IoPort : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Io_IoPort@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Io_IoPort@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[7];                         //    4
    // bartok layout dataSize = 11
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Io_IoPort) == 11);

struct Class_Microsoft_Singularity_Io_Resources : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Io_Resources@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Io_Resources@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Io_Resources) == 4);

struct Class_Microsoft_Singularity_Isal_IX_uint128
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_uint128@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_uint128@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_uint128
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_uint128) == 16);

struct Class_Microsoft_Singularity_Isal_IX_MmxContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_MmxContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_MmxContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_MmxContext
{
    UINT16                      fcw;                                     //    0
    UINT16                      fsw;                                     //    2
    UINT16                      ftw;                                     //    4
    UINT16                      fop;                                     //    6
    UINT32                      ip;                                      //    8
    UINT16                      cs;                                      //   12
    UINT16                      reserved0;                               //   14
    UINT32                      dp;                                      //   16
    UINT16                      ds;                                      //   20
    UINT16                      reserved1;                               //   22
    UINT32                      mxcsr;                                   //   24
    UINT32                      mxcsrmask;                               //   28
    Struct_Microsoft_Singularity_Isal_IX_uint128 st0;                    //   32
    Struct_Microsoft_Singularity_Isal_IX_uint128 st1;                    //   48
    Struct_Microsoft_Singularity_Isal_IX_uint128 st2;                    //   64
    Struct_Microsoft_Singularity_Isal_IX_uint128 st3;                    //   80
    Struct_Microsoft_Singularity_Isal_IX_uint128 st4;                    //   96
    Struct_Microsoft_Singularity_Isal_IX_uint128 st5;                    //  112
    Struct_Microsoft_Singularity_Isal_IX_uint128 st6;                    //  128
    Struct_Microsoft_Singularity_Isal_IX_uint128 st7;                    //  144
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm0;                   //  160
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm1;                   //  176
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm2;                   //  192
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm3;                   //  208
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm4;                   //  224
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm5;                   //  240
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm6;                   //  256
    Struct_Microsoft_Singularity_Isal_IX_uint128 xmm7;                   //  272
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved2;              //  288
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved3;              //  304
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved4;              //  320
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved5;              //  336
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved6;              //  352
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved7;              //  368
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved8;              //  384
    Struct_Microsoft_Singularity_Isal_IX_uint128 reserved9;              //  400
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedA;              //  416
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedB;              //  432
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedC;              //  448
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedD;              //  464
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedE;              //  480
    Struct_Microsoft_Singularity_Isal_IX_uint128 reservedF;              //  496
    // bartok layout dataSize = 512
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, fcw) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, fsw) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, ftw) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, fop) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, ip) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, cs) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved0) == 14);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, dp) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, ds) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved1) == 22);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, mxcsr) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, mxcsrmask) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st0) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st1) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st2) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st3) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st4) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st5) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st6) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, st7) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm0) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm1) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm2) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm3) == 208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm4) == 224);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm5) == 240);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm6) == 256);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, xmm7) == 272);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved2) == 288);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved3) == 304);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved4) == 320);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved5) == 336);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved6) == 352);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved7) == 368);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved8) == 384);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reserved9) == 400);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedA) == 416);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedB) == 432);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedC) == 448);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedD) == 464);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedE) == 480);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_MmxContext, reservedF) == 496);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_MmxContext) == 512);

struct Class_Microsoft_Singularity_Isal_SpillContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_SpillContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_SpillContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_SpillContext
{
    UPTR_TYPE                     ax;                                      //    0
    UPTR_TYPE                     bx;                                      //    4
    UPTR_TYPE                     cx;                                      //    8
    UPTR_TYPE                     dx;                                      //   12
    UPTR_TYPE                     di;                                      //   16
    UPTR_TYPE                     si;                                      //   20
    UPTR_TYPE                     sp;                                      //   24
    UPTR_TYPE                     ip;                                      //   28
    UPTR_TYPE                     bp;                                      //   32
    UPTR_TYPE                     fl;                                      //   36
    INT8                        __padding000[8];                         //   40
    Struct_Microsoft_Singularity_Isal_IX_MmxContext mmx;                 //   48
    UPTR_TYPE                     cs;                                      //  560
    UPTR_TYPE                     stackLimit;                              //  564
    INT32                       spillFlags;                              //  568
    INT8                        __padding001[4];                         //  572
    // bartok layout dataSize = 576
    
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, ax) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, bx) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, cx) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, dx) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, di) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, si) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, sp) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, ip) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, bp) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, fl) == 36);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, mmx) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, cs) == 560);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, stackLimit) == 564);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_SpillContext, spillFlags) == 568);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_SpillContext) == 576);

#define Struct_Microsoft_Singularity_Isal_SpillContext_ContentsSpilled 0x1    // 1

struct Class_Microsoft_Singularity_Isal_CpuRecord
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_CpuRecord@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_CpuRecord@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_CpuRecord
{
    Struct_Microsoft_Singularity_Isal_SpillContext spill;                //    0
    INT32                       id;                                      //  576
    UPTR_TYPE                     interruptStackBegin;                     //  580
    UPTR_TYPE                     interruptStackLimit;                     //  584
    INT8                        __padding000[596];                       //  588
    // bartok layout dataSize = 1184
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, spill) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, id) == 576);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, interruptStackBegin) == 580);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, interruptStackLimit) == 584);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_CpuRecord) == 1184);

struct Class_Microsoft_Singularity_Isal_InterruptContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_InterruptContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_InterruptContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_InterruptContext
{
    UPTR_TYPE                     dx;                                      //    0
    UPTR_TYPE                     cx;                                      //    4
    UPTR_TYPE                     ax;                                      //    8
    UPTR_TYPE                     vector;                                  //   12
    UPTR_TYPE                     err;                                     //   16
    UPTR_TYPE                     ip;                                      //   20
    UPTR_TYPE                     cs;                                      //   24
    UPTR_TYPE                     fl;                                      //   28
    UPTR_TYPE                     sp;                                      //   32
    UPTR_TYPE                     ss;                                      //   36
    // bartok layout dataSize = 40
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, dx) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, cx) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, ax) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, vector) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, err) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, ip) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, cs) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, fl) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, sp) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_InterruptContext, ss) == 36);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_InterruptContext) == 40);

#define Struct_Microsoft_Singularity_Isal_InterruptContext_VectorExceptionMax 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_InterruptContext_VectorSchedulerMin 0x21    // 33

struct Class_Microsoft_Singularity_Isal_IX_InterruptTable
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_InterruptTable@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_InterruptTable@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_InterruptTable
{
    INT8                        __padding000[2048];                      //    0
    // bartok layout dataSize = 2048
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_InterruptTable) == 2048);

struct Class_Microsoft_Singularity_Isal_Isa : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_Isa@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_Isa@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static INT32 c_currentCpuOffset;
    static INT32 c_currentThreadOffset;
    static UINT8 c_DefaultReturnFromInterrupt;
    static Struct_Microsoft_Singularity_Isal_IX_InterruptTable c_idt;
    static PTR_TYPE /* void* */ c_returnFromInterrupt;
    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Isal_Isa) == 4);

struct Class_Microsoft_Singularity_Isal_Isa_ICallback : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_Isa_ICallback@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_Isa_ICallback@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Isal_Isa_ICallback) == 4);

struct Class_Microsoft_Singularity_Isal_Isa_Type
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_Isa_Type@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_Isa_Type@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_Isa_Type
{
    INT32                       value;                                   //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_Isa_Type, value) == 0);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_Isa_Type) == 4);

#define Struct_Microsoft_Singularity_Isal_Isa_Type_Arm 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_Isa_Type_X64 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_Isa_Type_X86 0x0    // 0

struct Class_Microsoft_Singularity_Isal_IX_CR0
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_CR0@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_CR0@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_CR0
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_CR0) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_CR0_AM 0x40000    // 262144
#define Struct_Microsoft_Singularity_Isal_IX_CR0_CD 0x40000000    // 1073741824
#define Struct_Microsoft_Singularity_Isal_IX_CR0_EM 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_CR0_ET 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_CR0_MP 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_CR0_NE 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_CR0_NW 0x20000000    // 536870912
#define Struct_Microsoft_Singularity_Isal_IX_CR0_PE 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_CR0_PG 0x80000000    // 2147483648
#define Struct_Microsoft_Singularity_Isal_IX_CR0_TS 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_CR0_WP 0x10000    // 65536

struct Class_Microsoft_Singularity_Isal_IX_CR3
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_CR3@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_CR3@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_CR3
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_CR3) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_CR3_PCD 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_CR3_PWT 0x8    // 8

struct Class_Microsoft_Singularity_Isal_IX_CR4
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_CR4@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_CR4@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_CR4
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_CR4) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_CR4_DE 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_CR4_MCE 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_CR4_OSFXSR 0x200    // 512
#define Struct_Microsoft_Singularity_Isal_IX_CR4_OSXMMEXCPT 0x400    // 1024
#define Struct_Microsoft_Singularity_Isal_IX_CR4_PAE 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_CR4_PCE 0x100    // 256
#define Struct_Microsoft_Singularity_Isal_IX_CR4_PGE 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_CR4_PSE 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_CR4_PVI 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_CR4_TSD 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_CR4_VME 0x1    // 1

struct Class_Microsoft_Singularity_Isal_IX_EFlags
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_EFlags@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_EFlags@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_EFlags
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_EFlags) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_EFlags_AC 0x40000    // 262144
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_AF 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_CF 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_DF 0x400    // 1024
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_ID 0x200000    // 2097152
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_IF 0x200    // 512
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_IOPL 0x3000    // 12288
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_NT 0x4000    // 16384
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_OF 0x800    // 2048
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_PF 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_RF 0x10000    // 65536
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_SF 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_TF 0x100    // 256
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_VF 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_VIF 0x80000    // 524288
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_VIP 0x100000    // 1048576
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_VM 0x20000    // 131072
#define Struct_Microsoft_Singularity_Isal_IX_EFlags_ZF 0x40    // 64

struct Class_Microsoft_Singularity_Isal_IX_EFlagsShift
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_EFlagsShift@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_EFlagsShift@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_EFlagsShift
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_EFlagsShift) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_EFlagsShift_IF 0x9    // 9

struct Class_Microsoft_Singularity_Isal_IX_EVectors
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_EVectors@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_EVectors@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_EVectors
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_EVectors) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_EVectors_AlignmentCheck 0x11    // 17
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_BaseUserException 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_BoundRangeException 0x5    // 5
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_Breakpoint 0x3    // 3
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_CoprocessorNotAvailable 0x7    // 7
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_CoprocessorSegmentOverrun 0x9    // 9
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_DebuggerBreakRequest 0x1f    // 31
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_DivideError 0x0    // 0
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_DoubleFault 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_FirstChanceException 0x1d    // 29
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_FpuMathFault 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_GCSynchronization 0x25    // 37
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_GeneralProtectionFault 0xd    // 13
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_HaltApProcessors 0x24    // 36
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_IllegalInstruction 0x6    // 6
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_IntelReserved 0xe    // 14
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_InvalidTss 0xa    // 10
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_IoBaseVector 0x60    // 96
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_IoLastVector 0x9f    // 159
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_MachineCheck 0x12    // 18
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_Nmi 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_OverflowException 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_PageFault 0xe    // 14
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_SecondChanceException 0x1e    // 30
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_SegmentNotPresent 0xb    // 11
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_SingleStep 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_SpuriousInterrupt 0xdf    // 223
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_SseMathFault 0x13    // 19
#define Struct_Microsoft_Singularity_Isal_IX_EVectors_StackSegmentFault 0xc    // 12

struct Class_Microsoft_Singularity_Isal_IX_Fpcw
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Fpcw@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Fpcw@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Fpcw
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Fpcw) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_DenormalOperandMask 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_InvalidOperationMask 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_OverflowMask 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_Precision24 0x0    // 0
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_Precision53 0x200    // 512
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_Precision64 0x300    // 768
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_PrecisionControlMask 0x300    // 768
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_PrecisionMask 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_RoundChop 0xc00    // 3072
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_RoundControlMask 0xc00    // 3072
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_RoundDown 0x400    // 1024
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_RoundNear 0x0    // 0
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_RoundUp 0x800    // 2048
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_UnderflowMask 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_Fpcw_ZeroDivideMask 0x4    // 4

struct Class_Microsoft_Singularity_Isal_IX_Fpsw
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Fpsw@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Fpsw@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Fpsw
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Fpsw) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_Busy 0x8000    // 32768
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_C0 0x100    // 256
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_C1 0x200    // 512
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_C2 0x400    // 1024
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_C3 0x4000    // 16384
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_DenormalOperandError 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_ErrorSummary 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_InvalidOperationError 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_OverflowError 0x8    // 8
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_PrecisionError 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_StackFaultError 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_Top 0x3800    // 14336
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_UnderflowError 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_Fpsw_ZeroDivideError 0x4    // 4

struct Class_Microsoft_Singularity_Isal_IX_Gdte64
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Gdte64@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Gdte64@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Gdte64
{
    UINT16                      limit;                                   //    0
    UINT16                      base0_15;                                //    2
    UINT8                       base16_23;                               //    4
    UINT8                       access;                                  //    5
    UINT8                       granularity;                             //    6
    UINT8                       base24_31;                               //    7
    UINT32                      base32_63;                               //    8
    UINT32                      reserved;                                //   12
    // bartok layout dataSize = 16
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, limit) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, base0_15) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, base16_23) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, access) == 5);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, granularity) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, base24_31) == 7);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, base32_63) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Gdte64, reserved) == 12);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Gdte64) == 16);

struct Class_Microsoft_Singularity_Isal_IX_Idte
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Idte@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Idte@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Idte
{
    UINT16                      offset_0_15;                             //    0
    UINT16                      selector;                                //    2
    UINT8                       flags;                                   //    4
    UINT8                       access;                                  //    5
    UINT16                      offset_16_31;                            //    6
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idte, offset_0_15) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idte, selector) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idte, flags) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idte, access) == 5);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idte, offset_16_31) == 6);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Idte) == 8);

#define Struct_Microsoft_Singularity_Isal_IX_Idte_CALL_GATE 0xc    // 12
#define Struct_Microsoft_Singularity_Isal_IX_Idte_DPL_RING0 0x0    // 0
#define Struct_Microsoft_Singularity_Isal_IX_Idte_DPL_RING1 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_Idte_DPL_RING2 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_Idte_DPL_RING3 0x60    // 96
#define Struct_Microsoft_Singularity_Isal_IX_Idte_INT_GATE 0xe    // 14
#define Struct_Microsoft_Singularity_Isal_IX_Idte_PRESENT 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_Idte_TASK_GATE 0x5    // 5
#define Struct_Microsoft_Singularity_Isal_IX_Idte_TRAP_GATE 0xf    // 15

struct Class_Microsoft_Singularity_Isal_IX_Idtp
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_Idtp@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_Idtp@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_Idtp
{
    UINT16                      pad;                                     //    0
    UINT16                      limit;                                   //    2
    UINT32                      addr;                                    //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idtp, pad) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idtp, limit) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_Idtp, addr) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_Idtp) == 8);

struct Class_Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_InterruptTable_Dispatcher) == 16);

struct Class_Microsoft_Singularity_Isal_IX_PE
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_PE@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_PE@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_PE
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_PE) == 1);

#define Struct_Microsoft_Singularity_Isal_IX_PE_ACCESSED 0x20    // 32
#define Struct_Microsoft_Singularity_Isal_IX_PE_CACHEDISABLE 0x10    // 16
#define Struct_Microsoft_Singularity_Isal_IX_PE_DIRTY 0x40    // 64
#define Struct_Microsoft_Singularity_Isal_IX_PE_GLOBAL 0x100    // 256
#define Struct_Microsoft_Singularity_Isal_IX_PE_IS2MB 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_PE_NX 0x8000000000000000    // 9223372036854775808
#define Struct_Microsoft_Singularity_Isal_IX_PE_PAT 0x80    // 128
#define Struct_Microsoft_Singularity_Isal_IX_PE_USER 0x4    // 4
#define Struct_Microsoft_Singularity_Isal_IX_PE_VALID 0x1    // 1
#define Struct_Microsoft_Singularity_Isal_IX_PE_WRITEABLE 0x2    // 2
#define Struct_Microsoft_Singularity_Isal_IX_PE_WRITETHROUGH 0x8    // 8

struct Class_Microsoft_Singularity_Isal_IX_TSS
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_IX_TSS@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_IX_TSS@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_IX_TSS
{
    UINT16                      previous_tss;                            //    0
    UINT16                      pad0;                                    //    2
    UINT32                      esp0;                                    //    4
    UINT16                      ss0;                                     //    8
    UINT16                      pad1;                                    //   10
    UINT32                      esp1;                                    //   12
    UINT16                      ss1;                                     //   16
    UINT16                      pad2;                                    //   18
    UINT32                      esp2;                                    //   20
    UINT16                      ss2;                                     //   24
    UINT16                      pad3;                                    //   26
    UINT32                      cr3;                                     //   28
    UINT32                      eip;                                     //   32
    UINT32                      eflags;                                  //   36
    UINT32                      eax;                                     //   40
    UINT32                      ecx;                                     //   44
    UINT32                      edx;                                     //   48
    UINT32                      ebx;                                     //   52
    UINT32                      esp;                                     //   56
    UINT32                      ebp;                                     //   60
    UINT32                      esi;                                     //   64
    UINT32                      edi;                                     //   68
    UINT16                      es;                                      //   72
    UINT16                      pades;                                   //   74
    UINT16                      cs;                                      //   76
    UINT16                      padcs;                                   //   78
    UINT16                      ss;                                      //   80
    UINT16                      padss;                                   //   82
    UINT16                      ds;                                      //   84
    UINT16                      padds;                                   //   86
    UINT16                      fs;                                      //   88
    UINT16                      padfs;                                   //   90
    UINT16                      gs;                                      //   92
    UINT16                      padgs;                                   //   94
    UINT16                      ldt;                                     //   96
    UINT16                      padldt;                                  //   98
    UINT16                      trap_bit;                                //  100
    UINT16                      io_bitmap_offset;                        //  102
    // bartok layout dataSize = 104
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, previous_tss) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, pad0) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, esp0) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ss0) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, pad1) == 10);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, esp1) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ss1) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, pad2) == 18);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, esp2) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ss2) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, pad3) == 26);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, cr3) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, eip) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, eflags) == 36);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, eax) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ecx) == 44);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, edx) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ebx) == 52);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, esp) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ebp) == 60);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, esi) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, edi) == 68);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, es) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, pades) == 74);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, cs) == 76);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padcs) == 78);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ss) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padss) == 82);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ds) == 84);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padds) == 86);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, fs) == 88);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padfs) == 90);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, gs) == 92);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padgs) == 94);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, ldt) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, padldt) == 98);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, trap_bit) == 100);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_IX_TSS, io_bitmap_offset) == 102);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_IX_TSS) == 104);

struct Class_Microsoft_Singularity_Isal_ThreadRecord
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Isal_ThreadRecord@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Isal_ThreadRecord@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Isal_ThreadRecord
{
    Struct_Microsoft_Singularity_Isal_SpillContext spill;                //    0
    UPTR_TYPE                     activeStackLimit;                        //  576
    INT8                        __padding000[12];                        //  580
    // bartok layout dataSize = 592
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_ThreadRecord, spill) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_ThreadRecord, activeStackLimit) == 576);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_ThreadRecord) == 592);

struct Class_Microsoft_Singularity_Kd_InstructionStream
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_InstructionStream@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_InstructionStream@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_InstructionStream
{
    UINT8                       InstByte0;                               //    0
    UINT8                       InstByte1;                               //    1
    UINT8                       InstByte2;                               //    2
    UINT8                       InstByte3;                               //    3
    UINT8                       InstByte4;                               //    4
    UINT8                       InstByte5;                               //    5
    UINT8                       InstByte6;                               //    6
    UINT8                       InstByte7;                               //    7
    UINT8                       InstByte8;                               //    8
    UINT8                       InstByte9;                               //    9
    UINT8                       InstByte10;                              //   10
    UINT8                       InstByte11;                              //   11
    UINT8                       InstByte12;                              //   12
    UINT8                       InstByte13;                              //   13
    UINT8                       InstByte14;                              //   14
    UINT8                       InstByte15;                              //   15
    // bartok layout dataSize = 16
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte0) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte1) == 1);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte2) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte3) == 3);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte4) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte5) == 5);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte6) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte7) == 7);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte8) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte9) == 9);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte10) == 10);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte11) == 11);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte12) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte13) == 13);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte14) == 14);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_InstructionStream, InstByte15) == 15);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_InstructionStream) == 16);

struct Class_Microsoft_Singularity_Kd_AlphaKdControlReport
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_AlphaKdControlReport@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_AlphaKdControlReport@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_AlphaKdControlReport
{
    UINT32                      InstructionCount;                        //    0
    Struct_Microsoft_Singularity_Kd_InstructionStream InstructionStream; //    4
    // bartok layout dataSize = 20
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_AlphaKdControlReport, InstructionCount) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_AlphaKdControlReport, InstructionStream) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_AlphaKdControlReport) == 20);

struct Class_Microsoft_Singularity_Kd_AlphaKdControlSet
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_AlphaKdControlSet@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_AlphaKdControlSet@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_AlphaKdControlSet
{
    UINT32                      ContinueStatus;                          //    0
    UINT32                      __padding;                               //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_AlphaKdControlSet, ContinueStatus) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_AlphaKdControlSet, __padding) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_AlphaKdControlSet) == 8);

struct Class_Microsoft_Singularity_Kd_ArmContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmContext
{
    UINT32                      ContextFlags;                            //    0
    UINT32                      R0;                                      //    4
    UINT32                      R1;                                      //    8
    UINT32                      R2;                                      //   12
    UINT32                      R3;                                      //   16
    UINT32                      R4;                                      //   20
    UINT32                      R5;                                      //   24
    UINT32                      R6;                                      //   28
    UINT32                      R7;                                      //   32
    UINT32                      R8;                                      //   36
    UINT32                      R9;                                      //   40
    UINT32                      R10;                                     //   44
    UINT32                      R11;                                     //   48
    UINT32                      R12;                                     //   52
    UINT32                      Sp;                                      //   56
    UINT32                      Lr;                                      //   60
    UINT32                      Pc;                                      //   64
    UINT32                      Cpsr;                                    //   68
    // bartok layout dataSize = 72
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, ContextFlags) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R0) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R1) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R2) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R3) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R4) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R5) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R6) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R7) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R8) == 36);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R9) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R10) == 44);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R11) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, R12) == 52);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, Sp) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, Lr) == 60);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, Pc) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmContext, Cpsr) == 68);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmContext) == 72);

struct Class_Microsoft_Singularity_Kd_ArmKdControlReport
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmKdControlReport@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmKdControlReport@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmKdControlReport
{
    UINT32                      Cpsr;                                    //    0
    UINT32                      InstructionCount;                        //    4
    Struct_Microsoft_Singularity_Kd_InstructionStream InstructionStream; //    8
    // bartok layout dataSize = 24
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlReport, Cpsr) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlReport, InstructionCount) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlReport, InstructionStream) == 8);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmKdControlReport) == 24);

struct Class_Microsoft_Singularity_Kd_ArmKdControlSet
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmKdControlSet@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmKdControlSet@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmKdControlSet
{
    UINT32                      ContinueStatus;                          //    0
    UINT32                      Continue;                                //    4
    UINT32                      CurrentSymbolStart;                      //    8
    UINT32                      CurrentSymbolEnd;                        //   12
    // bartok layout dataSize = 16
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlSet, ContinueStatus) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlSet, Continue) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlSet, CurrentSymbolStart) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKdControlSet, CurrentSymbolEnd) == 12);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmKdControlSet) == 16);

struct Class_Microsoft_Singularity_Kd_ArmKSpecialRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmKSpecialRegisters@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmKSpecialRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters
{
    UINT32                      Cp15Cr0Id;                               //    0
    UINT32                      Cp15Cr0Cachetype;                        //    4
    UINT32                      Cp15Cr1Control;                          //    8
    UINT32                      Cp15Cr2Ttb;                              //   12
    UINT32                      Cp15Cr3Dacr;                             //   16
    UINT32                      Cp15Cr5FaultStatus;                      //   20
    UINT32                      Cp15Cr5FaultAddress;                     //   24
    UINT32                      Cp15Cr13ProcessId;                       //   28
    // bartok layout dataSize = 32
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr0Id) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr0Cachetype) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr1Control) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr2Ttb) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr3Dacr) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr5FaultStatus) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr5FaultAddress) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters, Cp15Cr13ProcessId) == 28);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters) == 32);

struct Class_Microsoft_Singularity_Kd_ArmKProcessorState
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmKProcessorState@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmKProcessorState@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmKProcessorState
{
    Struct_Microsoft_Singularity_Kd_ArmKSpecialRegisters SpecialRegisters; //    0
    Struct_Microsoft_Singularity_Kd_ArmContext ContextFrame;             //   32
    // bartok layout dataSize = 104
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKProcessorState, SpecialRegisters) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmKProcessorState, ContextFrame) == 32);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmKProcessorState) == 104);

struct Class_Microsoft_Singularity_Kd_ArmRuntimeFunction
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmRuntimeFunction@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmRuntimeFunction@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmRuntimeFunction
{
    UINT32                      BeginAddress;                            //    0
    UINT32                      Flags;                                   //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunction, BeginAddress) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunction, Flags) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunction) == 8);

struct Class_Microsoft_Singularity_Kd_ArmRuntimeFunctionException
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ArmRuntimeFunctionException@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ArmRuntimeFunctionException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ArmRuntimeFunctionException
{
    UINT32                      Handler;                                 //    0
    UINT32                      HandlerData;                             //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunctionException, Handler) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunctionException, HandlerData) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ArmRuntimeFunctionException) == 8);

struct Class_Microsoft_Singularity_Kd_ExceptionRecord64
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_ExceptionRecord64@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_ExceptionRecord64@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_ExceptionRecord64
{
    UINT32                      ExceptionCode;                           //    0
    UINT32                      ExceptionFlags;                          //    4
    UINT64                      ExceptionRecord;                         //    8
    UINT64                      ExceptionAddress;                        //   16
    UINT32                      NumberParameters;                        //   24
    UINT32                      __unusedAlignment;                       //   28
    UINT64                      ExceptionInformation0;                   //   32
    UINT64                      ExceptionInformation1;                   //   40
    UINT64                      ExceptionInformation2;                   //   48
    UINT64                      ExceptionInformation3;                   //   56
    UINT64                      ExceptionInformation4;                   //   64
    UINT64                      ExceptionInformation5;                   //   72
    UINT64                      ExceptionInformation6;                   //   80
    UINT64                      ExceptionInformation7;                   //   88
    UINT64                      ExceptionInformation8;                   //   96
    UINT64                      ExceptionInformation9;                   //  104
    UINT64                      ExceptionInformation10;                  //  112
    UINT64                      ExceptionInformation11;                  //  120
    UINT64                      ExceptionInformation12;                  //  128
    UINT64                      ExceptionInformation13;                  //  136
    UINT64                      ExceptionInformation14;                  //  144
    // bartok layout dataSize = 152
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionCode) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionFlags) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionRecord) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionAddress) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, NumberParameters) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, __unusedAlignment) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation0) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation1) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation2) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation3) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation4) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation5) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation6) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation7) == 88);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation8) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation9) == 104);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation10) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation11) == 120);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation12) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation13) == 136);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_ExceptionRecord64, ExceptionInformation14) == 144);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_ExceptionRecord64) == 152);

struct Class_Microsoft_Singularity_Kd_Ia64KdControlReport
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_Ia64KdControlReport@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_Ia64KdControlReport@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_Ia64KdControlReport
{
    UINT32                      InstructionCount;                        //    0
    Struct_Microsoft_Singularity_Kd_InstructionStream InstructionStream; //    4
    // bartok layout dataSize = 20
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlReport, InstructionCount) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlReport, InstructionStream) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_Ia64KdControlReport) == 20);

struct Class_Microsoft_Singularity_Kd_Ia64KdControlSet
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_Ia64KdControlSet@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_Ia64KdControlSet@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_Ia64KdControlSet
{
    UINT32                      ContinueStatus;                          //    0
    UINT32                      Continue;                                //    4
    UINT64                      CurrentSymbolStart;                      //    8
    UINT64                      CurrentSymbolEnd;                        //   16
    // bartok layout dataSize = 24
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlSet, ContinueStatus) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlSet, Continue) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlSet, CurrentSymbolStart) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_Ia64KdControlSet, CurrentSymbolEnd) == 16);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_Ia64KdControlSet) == 24);

struct Class_Microsoft_Singularity_Kd_UInt128
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_UInt128@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_UInt128@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_UInt128
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_UInt128) == 16);

struct Class_Microsoft_Singularity_Kd_X64VectorRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64VectorRegisters@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64VectorRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64VectorRegisters
{
    Struct_Microsoft_Singularity_Kd_UInt128 Vr0;                         //    0
    Struct_Microsoft_Singularity_Kd_UInt128 Vr1;                         //   16
    Struct_Microsoft_Singularity_Kd_UInt128 Vr2;                         //   32
    Struct_Microsoft_Singularity_Kd_UInt128 Vr3;                         //   48
    Struct_Microsoft_Singularity_Kd_UInt128 Vr4;                         //   64
    Struct_Microsoft_Singularity_Kd_UInt128 Vr5;                         //   80
    Struct_Microsoft_Singularity_Kd_UInt128 Vr6;                         //   96
    Struct_Microsoft_Singularity_Kd_UInt128 Vr7;                         //  112
    Struct_Microsoft_Singularity_Kd_UInt128 Vr8;                         //  128
    Struct_Microsoft_Singularity_Kd_UInt128 Vr9;                         //  144
    Struct_Microsoft_Singularity_Kd_UInt128 Vr10;                        //  160
    Struct_Microsoft_Singularity_Kd_UInt128 Vr11;                        //  176
    Struct_Microsoft_Singularity_Kd_UInt128 Vr12;                        //  192
    Struct_Microsoft_Singularity_Kd_UInt128 Vr13;                        //  208
    Struct_Microsoft_Singularity_Kd_UInt128 Vr14;                        //  224
    Struct_Microsoft_Singularity_Kd_UInt128 Vr15;                        //  240
    Struct_Microsoft_Singularity_Kd_UInt128 Vr16;                        //  256
    Struct_Microsoft_Singularity_Kd_UInt128 Vr17;                        //  272
    Struct_Microsoft_Singularity_Kd_UInt128 Vr18;                        //  288
    Struct_Microsoft_Singularity_Kd_UInt128 Vr19;                        //  304
    Struct_Microsoft_Singularity_Kd_UInt128 Vr20;                        //  320
    Struct_Microsoft_Singularity_Kd_UInt128 Vr21;                        //  336
    Struct_Microsoft_Singularity_Kd_UInt128 Vr22;                        //  352
    Struct_Microsoft_Singularity_Kd_UInt128 Vr23;                        //  368
    Struct_Microsoft_Singularity_Kd_UInt128 Vr24;                        //  384
    Struct_Microsoft_Singularity_Kd_UInt128 Vr25;                        //  400
    // bartok layout dataSize = 416
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr0) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr1) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr2) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr3) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr4) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr5) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr6) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr7) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr8) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr9) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr10) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr11) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr12) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr13) == 208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr14) == 224);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr15) == 240);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr16) == 256);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr17) == 272);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr18) == 288);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr19) == 304);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr20) == 320);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr21) == 336);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr22) == 352);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr23) == 368);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr24) == 384);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64VectorRegisters, Vr25) == 400);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64VectorRegisters) == 416);

struct Class_Microsoft_Singularity_Kd_X86Unaligned128
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86Unaligned128@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86Unaligned128@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86Unaligned128
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86Unaligned128) == 16);

struct Class_Microsoft_Singularity_Kd_X64XmmSaveArea
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64XmmSaveArea@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64XmmSaveArea@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64XmmSaveArea
{
    UINT16                      ControlWord;                             //    0
    UINT16                      StatusWord;                              //    2
    UINT16                      TagWord;                                 //    4
    INT8                        __padding000[2];                         //    6
    UINT64                      ErrorAddress;                            //    8
    UINT64                      DataAddress;                             //   16
    UINT32                      MxCsr;                                   //   24
    UINT32                      MxCsrMask;                               //   28
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St0;                 //   32
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St1;                 //   48
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St2;                 //   64
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St3;                 //   80
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St4;                 //   96
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St5;                 //  112
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St6;                 //  128
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St7;                 //  144
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm0;                //  160
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm1;                //  176
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm2;                //  192
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm3;                //  208
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm4;                //  224
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm5;                //  240
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm6;                //  256
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm7;                //  272
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm8;                //  288
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm9;                //  304
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm10;               //  320
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm11;               //  336
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm12;               //  352
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm13;               //  368
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm14;               //  384
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm15;               //  400
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg0;        //  416
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg1;        //  432
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg2;        //  448
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg3;        //  464
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg4;        //  480
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 ReservedReg5;        //  496
    // bartok layout dataSize = 512
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ControlWord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, StatusWord) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, TagWord) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ErrorAddress) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, DataAddress) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, MxCsr) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, MxCsrMask) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St0) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St1) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St2) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St3) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St4) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St5) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St6) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, St7) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm0) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm1) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm2) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm3) == 208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm4) == 224);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm5) == 240);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm6) == 256);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm7) == 272);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm8) == 288);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm9) == 304);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm10) == 320);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm11) == 336);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm12) == 352);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm13) == 368);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm14) == 384);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, Xmm15) == 400);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg0) == 416);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg1) == 432);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg2) == 448);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg3) == 464);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg4) == 480);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea, ReservedReg5) == 496);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64XmmSaveArea) == 512);

struct Class_Microsoft_Singularity_Kd_X64Context
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64Context@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64Context@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64Context
{
    UINT64                      P1Home;                                  //    0
    UINT64                      P2Home;                                  //    8
    UINT64                      P3Home;                                  //   16
    UINT64                      P4Home;                                  //   24
    UINT64                      P5Home;                                  //   32
    UINT64                      P6Home;                                  //   40
    UINT32                      ContextFlags;                            //   48
    UINT32                      MxCsr;                                   //   52
    UINT16                      SegCs;                                   //   56
    UINT16                      SegDs;                                   //   58
    UINT16                      SegEs;                                   //   60
    UINT16                      SegFs;                                   //   62
    UINT16                      SegGs;                                   //   64
    UINT16                      SegSs;                                   //   66
    UINT32                      EFlags;                                  //   68
    UINT64                      Dr0;                                     //   72
    UINT64                      Dr1;                                     //   80
    UINT64                      Dr2;                                     //   88
    UINT64                      Dr3;                                     //   96
    UINT64                      Dr6;                                     //  104
    UINT64                      Dr7;                                     //  112
    UINT64                      Rax;                                     //  120
    UINT64                      Rcx;                                     //  128
    UINT64                      Rdx;                                     //  136
    UINT64                      Rbx;                                     //  144
    UINT64                      Rsp;                                     //  152
    UINT64                      Rbp;                                     //  160
    UINT64                      Rsi;                                     //  168
    UINT64                      Rdi;                                     //  176
    UINT64                      R8;                                      //  184
    UINT64                      R9;                                      //  192
    UINT64                      R10;                                     //  200
    UINT64                      R11;                                     //  208
    UINT64                      R12;                                     //  216
    UINT64                      R13;                                     //  224
    UINT64                      R14;                                     //  232
    UINT64                      R15;                                     //  240
    UINT64                      Rip;                                     //  248
    Struct_Microsoft_Singularity_Kd_X64XmmSaveArea FltSave;              //  256
    Struct_Microsoft_Singularity_Kd_X64VectorRegisters VectorRegister;   //  768
    UINT64                      VectorControl;                           // 1184
    UINT64                      DebugControl;                            // 1192
    UINT64                      LastBranchToRip;                         // 1200
    UINT64                      LastBranchFromRip;                       // 1208
    UINT64                      LastExceptionToRip;                      // 1216
    UINT64                      LastExceptionFromRip;                    // 1224
    // bartok layout dataSize = 1232
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P1Home) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P2Home) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P3Home) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P4Home) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P5Home) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, P6Home) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, ContextFlags) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, MxCsr) == 52);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegCs) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegDs) == 58);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegEs) == 60);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegFs) == 62);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegGs) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, SegSs) == 66);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, EFlags) == 68);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr0) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr1) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr2) == 88);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr3) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr6) == 104);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Dr7) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rax) == 120);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rcx) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rdx) == 136);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rbx) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rsp) == 152);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rbp) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rsi) == 168);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rdi) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R8) == 184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R9) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R10) == 200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R11) == 208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R12) == 216);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R13) == 224);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R14) == 232);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, R15) == 240);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, Rip) == 248);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, FltSave) == 256);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, VectorRegister) == 768);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, VectorControl) == 1184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, DebugControl) == 1192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, LastBranchToRip) == 1200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, LastBranchFromRip) == 1208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, LastExceptionToRip) == 1216);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Context, LastExceptionFromRip) == 1224);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64Context) == 1232);

struct Class_Microsoft_Singularity_Kd_X64Descriptor
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64Descriptor@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64Descriptor@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64Descriptor
{
    UINT16                      Pad0;                                    //    0
    UINT16                      Pad1;                                    //    2
    UINT16                      Pad2;                                    //    4
    UINT16                      Limit;                                   //    6
    UINT64                      Base;                                    //    8
    // bartok layout dataSize = 16
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Descriptor, Pad0) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Descriptor, Pad1) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Descriptor, Pad2) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Descriptor, Limit) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64Descriptor, Base) == 8);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64Descriptor) == 16);

struct Class_Microsoft_Singularity_Kd_X64KdControlReport
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64KdControlReport@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64KdControlReport@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64KdControlReport
{
    UINT64                      Dr6;                                     //    0
    UINT64                      Dr7;                                     //    8
    UINT32                      EFlags;                                  //   16
    UINT16                      InstructionCount;                        //   20
    UINT16                      ReportFlags;                             //   22
    Struct_Microsoft_Singularity_Kd_InstructionStream InstructionStream; //   24
    UINT16                      SegCs;                                   //   40
    UINT16                      SegDs;                                   //   42
    UINT16                      SegEs;                                   //   44
    UINT16                      SegFs;                                   //   46
    // bartok layout dataSize = 48
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, Dr6) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, Dr7) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, EFlags) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, InstructionCount) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, ReportFlags) == 22);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, InstructionStream) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, SegCs) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, SegDs) == 42);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, SegEs) == 44);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlReport, SegFs) == 46);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64KdControlReport) == 48);

struct Class_Microsoft_Singularity_Kd_X64KdControlSet
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64KdControlSet@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64KdControlSet@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64KdControlSet
{
    UINT32                      ContinueStatus;                          //    0
    UINT32                      TraceFlag;                               //    4
    UINT64                      Dr7;                                     //    8
    UINT64                      CurrentSymbolStart;                      //   16
    UINT64                      CurrentSymbolEnd;                        //   24
    // bartok layout dataSize = 32
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlSet, ContinueStatus) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlSet, TraceFlag) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlSet, Dr7) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlSet, CurrentSymbolStart) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KdControlSet, CurrentSymbolEnd) == 24);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64KdControlSet) == 32);

struct Class_Microsoft_Singularity_Kd_X64KSpecialRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64KSpecialRegisters@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64KSpecialRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters
{
    UINT64                      Cr0;                                     //    0
    UINT64                      Cr2;                                     //    8
    UINT64                      Cr3;                                     //   16
    UINT64                      Cr4;                                     //   24
    UINT64                      KernelDr0;                               //   32
    UINT64                      KernelDr1;                               //   40
    UINT64                      KernelDr2;                               //   48
    UINT64                      KernelDr3;                               //   56
    UINT64                      KernelDr6;                               //   64
    UINT64                      KernelDr7;                               //   72
    Struct_Microsoft_Singularity_Kd_X64Descriptor Gdtr;                  //   80
    Struct_Microsoft_Singularity_Kd_X64Descriptor Idtr;                  //   96
    UINT16                      Tr;                                      //  112
    UINT16                      Ldtr;                                    //  114
    UINT32                      MxCsr;                                   //  116
    UINT64                      DebugControl;                            //  120
    UINT64                      LastBranchToRip;                         //  128
    UINT64                      LastBranchFromRip;                       //  136
    UINT64                      LastExceptionToRip;                      //  144
    UINT64                      LastExceptionFromRip;                    //  152
    UINT64                      Cr8;                                     //  160
    UINT64                      MsrGsBase;                               //  168
    UINT64                      MsrGsSwap;                               //  176
    UINT64                      MsrStar;                                 //  184
    UINT64                      MsrLStar;                                //  192
    UINT64                      MsrCStar;                                //  200
    UINT64                      MsrSyscallMask;                          //  208
    // bartok layout dataSize = 216
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Cr0) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Cr2) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Cr3) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Cr4) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr0) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr1) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr2) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr3) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr6) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, KernelDr7) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Gdtr) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Idtr) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Tr) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Ldtr) == 114);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MxCsr) == 116);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, DebugControl) == 120);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, LastBranchToRip) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, LastBranchFromRip) == 136);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, LastExceptionToRip) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, LastExceptionFromRip) == 152);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, Cr8) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrGsBase) == 168);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrGsSwap) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrStar) == 184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrLStar) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrCStar) == 200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters, MsrSyscallMask) == 208);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters) == 216);

struct Class_Microsoft_Singularity_Kd_X64KProcessorState
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X64KProcessorState@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X64KProcessorState@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X64KProcessorState
{
    Struct_Microsoft_Singularity_Kd_X64KSpecialRegisters SpecialRegisters; //    0
    UINT64                      Fill;                                    //  216
    Struct_Microsoft_Singularity_Kd_X64Context ContextFrame;             //  224
    // bartok layout dataSize = 1456
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KProcessorState, SpecialRegisters) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KProcessorState, Fill) == 216);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X64KProcessorState, ContextFrame) == 224);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X64KProcessorState) == 1456);

struct Class_Microsoft_Singularity_Kd_X86Fp387Register
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86Fp387Register@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86Fp387Register@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86Fp387Register
{
    INT8                        __padding000[10];                        //    0
    // bartok layout dataSize = 10
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86Fp387Register) == 10);

struct Class_Microsoft_Singularity_Kd_X86Fp387SaveArea
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86Fp387SaveArea@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86Fp387SaveArea@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea
{
    UINT32                      ControlWord;                             //    0
    UINT32                      StatusWord;                              //    4
    UINT32                      TagWord;                                 //    8
    UINT32                      ErrorOffset;                             //   12
    UINT32                      ErrorSelector;                           //   16
    UINT32                      DataOffset;                              //   20
    UINT32                      DataSelector;                            //   24
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St0;                //   28
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St1;                //   38
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St2;                //   48
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St3;                //   58
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St4;                //   68
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St5;                //   78
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St6;                //   88
    Struct_Microsoft_Singularity_Kd_X86Fp387Register St7;                //   98
    UINT32                      Cr0NpxState;                             //  108
    // bartok layout dataSize = 112
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, ControlWord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, StatusWord) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, TagWord) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, ErrorOffset) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, ErrorSelector) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, DataOffset) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, DataSelector) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St0) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St1) == 38);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St2) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St3) == 58);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St4) == 68);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St5) == 78);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St6) == 88);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, St7) == 98);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea, Cr0NpxState) == 108);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea) == 112);

struct Class_Microsoft_Singularity_Kd_X86XmmSaveArea
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86XmmSaveArea@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86XmmSaveArea@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86XmmSaveArea
{
    UINT16                      ControlWord;                             //    0
    UINT16                      StatusWord;                              //    2
    UINT16                      TagWord;                                 //    4
    UINT16                      ErrorOpcode;                             //    6
    UINT32                      ErrorOffset;                             //    8
    UINT16                      ErrorSelector;                           //   12
    UINT16                      reserved0;                               //   14
    UINT32                      DataOffset;                              //   16
    UINT16                      DataSelector;                            //   20
    UINT16                      reserved1;                               //   22
    UINT32                      MxCsr;                                   //   24
    UINT32                      MxCsrMask;                               //   28
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St0;                 //   32
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St1;                 //   48
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St2;                 //   64
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St3;                 //   80
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St4;                 //   96
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St5;                 //  112
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St6;                 //  128
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 St7;                 //  144
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm0;                //  160
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm1;                //  176
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm2;                //  192
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm3;                //  208
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm4;                //  224
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm5;                //  240
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm6;                //  256
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 Xmm7;                //  272
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved2;           //  288
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved3;           //  304
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved4;           //  320
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved5;           //  336
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved6;           //  352
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved7;           //  368
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved8;           //  384
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reserved9;           //  400
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedA;           //  416
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedB;           //  432
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedC;           //  448
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedD;           //  464
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedE;           //  480
    Struct_Microsoft_Singularity_Kd_X86Unaligned128 reservedF;           //  496
    // bartok layout dataSize = 512
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, ControlWord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, StatusWord) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, TagWord) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, ErrorOpcode) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, ErrorOffset) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, ErrorSelector) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved0) == 14);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, DataOffset) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, DataSelector) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved1) == 22);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, MxCsr) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, MxCsrMask) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St0) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St1) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St2) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St3) == 80);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St4) == 96);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St5) == 112);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St6) == 128);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, St7) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm0) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm1) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm2) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm3) == 208);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm4) == 224);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm5) == 240);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm6) == 256);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, Xmm7) == 272);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved2) == 288);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved3) == 304);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved4) == 320);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved5) == 336);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved6) == 352);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved7) == 368);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved8) == 384);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reserved9) == 400);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedA) == 416);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedB) == 432);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedC) == 448);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedD) == 464);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedE) == 480);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea, reservedF) == 496);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86XmmSaveArea) == 512);

struct Class_Microsoft_Singularity_Kd_X86Context
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86Context@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86Context@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86Context
{
    UINT32                      ContextFlags;                            //    0
    UINT32                      Dr0;                                     //    4
    UINT32                      Dr1;                                     //    8
    UINT32                      Dr2;                                     //   12
    UINT32                      Dr3;                                     //   16
    UINT32                      Dr6;                                     //   20
    UINT32                      Dr7;                                     //   24
    Struct_Microsoft_Singularity_Kd_X86Fp387SaveArea FloatSave;          //   28
    UINT32                      SegGs;                                   //  140
    UINT32                      SegFs;                                   //  144
    UINT32                      SegEs;                                   //  148
    UINT32                      SegDs;                                   //  152
    UINT32                      Edi;                                     //  156
    UINT32                      Esi;                                     //  160
    UINT32                      Ebx;                                     //  164
    UINT32                      Edx;                                     //  168
    UINT32                      Ecx;                                     //  172
    UINT32                      Eax;                                     //  176
    UINT32                      Ebp;                                     //  180
    UINT32                      Eip;                                     //  184
    UINT32                      SegCs;                                   //  188
    UINT32                      EFlags;                                  //  192
    UINT32                      Esp;                                     //  196
    UINT32                      SegSs;                                   //  200
    Struct_Microsoft_Singularity_Kd_X86XmmSaveArea ExtendedRegisters;    //  204
    // bartok layout dataSize = 716
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, ContextFlags) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr0) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr1) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr2) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr3) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr6) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Dr7) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, FloatSave) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegGs) == 140);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegFs) == 144);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegEs) == 148);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegDs) == 152);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Edi) == 156);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Esi) == 160);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Ebx) == 164);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Edx) == 168);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Ecx) == 172);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Eax) == 176);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Ebp) == 180);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Eip) == 184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegCs) == 188);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, EFlags) == 192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, Esp) == 196);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, SegSs) == 200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Context, ExtendedRegisters) == 204);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86Context) == 716);

struct Class_Microsoft_Singularity_Kd_X86Descriptor
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86Descriptor@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86Descriptor@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86Descriptor
{
    UINT16                      Pad;                                     //    0
    UINT16                      Limit;                                   //    2
    UINT32                      Base;                                    //    4
    // bartok layout dataSize = 8
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Descriptor, Pad) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Descriptor, Limit) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86Descriptor, Base) == 4);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86Descriptor) == 8);

struct Class_Microsoft_Singularity_Kd_X86KdControlReport
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86KdControlReport@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86KdControlReport@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86KdControlReport
{
    UINT32                      Dr6;                                     //    0
    UINT32                      Dr7;                                     //    4
    UINT16                      InstructionCount;                        //    8
    UINT16                      ReportFlags;                             //   10
    Struct_Microsoft_Singularity_Kd_InstructionStream InstructionStream; //   12
    UINT16                      SegCs;                                   //   28
    UINT16                      SegDs;                                   //   30
    UINT16                      SegEs;                                   //   32
    UINT16                      SegFs;                                   //   34
    UINT32                      EFlags;                                  //   36
    // bartok layout dataSize = 40
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, Dr6) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, Dr7) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, InstructionCount) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, ReportFlags) == 10);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, InstructionStream) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, SegCs) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, SegDs) == 30);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, SegEs) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, SegFs) == 34);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlReport, EFlags) == 36);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86KdControlReport) == 40);

struct Class_Microsoft_Singularity_Kd_X86KdControlSet
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86KdControlSet@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86KdControlSet@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86KdControlSet
{
    UINT32                      ContinueStatus;                          //    0
    UINT32                      TraceFlag;                               //    4
    UINT32                      Dr7;                                     //    8
    UINT32                      CurrentSymbolStart;                      //   12
    UINT32                      CurrentSymbolEnd;                        //   16
    // bartok layout dataSize = 20
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlSet, ContinueStatus) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlSet, TraceFlag) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlSet, Dr7) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlSet, CurrentSymbolStart) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KdControlSet, CurrentSymbolEnd) == 16);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86KdControlSet) == 20);

struct Class_Microsoft_Singularity_Kd_X86KSpecialRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86KSpecialRegisters@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86KSpecialRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters
{
    UINT32                      Cr0;                                     //    0
    UINT32                      Cr2;                                     //    4
    UINT32                      Cr3;                                     //    8
    UINT32                      Cr4;                                     //   12
    UINT32                      KernelDr0;                               //   16
    UINT32                      KernelDr1;                               //   20
    UINT32                      KernelDr2;                               //   24
    UINT32                      KernelDr3;                               //   28
    UINT32                      KernelDr6;                               //   32
    UINT32                      KernelDr7;                               //   36
    Struct_Microsoft_Singularity_Kd_X86Descriptor Gdtr;                  //   40
    Struct_Microsoft_Singularity_Kd_X86Descriptor Idtr;                  //   48
    UINT16                      Tr;                                      //   56
    UINT16                      Ldtr;                                    //   58
    UINT32                      Reserved0;                               //   60
    UINT32                      Reserved1;                               //   64
    UINT32                      Reserved2;                               //   68
    UINT32                      Reserved3;                               //   72
    UINT32                      Reserved4;                               //   76
    UINT32                      Reserved5;                               //   80
    // bartok layout dataSize = 84
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Cr0) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Cr2) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Cr3) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Cr4) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr0) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr1) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr2) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr3) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr6) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, KernelDr7) == 36);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Gdtr) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Idtr) == 48);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Tr) == 56);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Ldtr) == 58);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved0) == 60);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved1) == 64);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved2) == 68);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved3) == 72);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved4) == 76);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters, Reserved5) == 80);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters) == 84);

struct Class_Microsoft_Singularity_Kd_X86KProcessorState
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86KProcessorState@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86KProcessorState@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86KProcessorState
{
    Struct_Microsoft_Singularity_Kd_X86Context ContextFrame;             //    0
    Struct_Microsoft_Singularity_Kd_X86KSpecialRegisters SpecialRegisters; //  716
    // bartok layout dataSize = 800
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KProcessorState, ContextFrame) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86KProcessorState, SpecialRegisters) == 716);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86KProcessorState) == 800);

struct Class_Microsoft_Singularity_Kd_X86SegmentRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kd_X86SegmentRegisters@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kd_X86SegmentRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Kd_X86SegmentRegisters
{
    UINT16                      SegCs;                                   //    0
    UINT16                      SegDs;                                   //    2
    UINT16                      SegEs;                                   //    4
    UINT16                      SegFs;                                   //    6
    UINT16                      SegGs;                                   //    8
    UINT16                      SegSs;                                   //   10
    // bartok layout dataSize = 12
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegCs) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegDs) == 2);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegEs) == 4);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegFs) == 6);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegGs) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters, SegSs) == 10);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Kd_X86SegmentRegisters) == 12);

struct Class_Microsoft_Singularity_Kernel : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Kernel@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Kernel@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Kernel) == 4);

struct Class_Microsoft_Singularity_KernelDebugger_Kd : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_KernelDebugger_Kd@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_KernelDebugger_Kd@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_KernelDebugger_Kd) == 4);

struct Class_Microsoft_Singularity_KernelDebugger_KdPacketType
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_KernelDebugger_KdPacketType@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_KernelDebugger_KdPacketType@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_KernelDebugger_KdPacketType
{
    INT8                        __padding000[4];                         //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_KernelDebugger_KdPacketType) == 4);

#define Struct_Microsoft_Singularity_KernelDebugger_KdPacketType_FileIo 0xb    // 11

struct Class_Microsoft_Singularity_KernelDebugger_KdStatus
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_KernelDebugger_KdStatus@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_KernelDebugger_KdStatus@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_KernelDebugger_KdStatus
{
    INT8                        __padding000[4];                         //    0
    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_KernelDebugger_KdStatus) == 4);

#define Struct_Microsoft_Singularity_KernelDebugger_KdStatus_PacketReceived 0x0    // 0
#define Struct_Microsoft_Singularity_KernelDebugger_KdStatus_PacketResend 0x2    // 2
#define Struct_Microsoft_Singularity_KernelDebugger_KdStatus_PacketTimeout 0x1    // 1

struct Class_Microsoft_Singularity_Loader_PEImage : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Loader_PEImage@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Loader_PEImage@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[80];                        //    4
    // bartok layout dataSize = 84
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Loader_PEImage) == 84);

struct Class_Microsoft_Singularity_Memory_PhysicalAddress
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Memory_PhysicalAddress@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Memory_PhysicalAddress@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Memory_PhysicalAddress
{
    INT8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Memory_PhysicalAddress) == 8);

struct Class_Microsoft_Singularity_Memory_MemoryManager : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Memory_MemoryManager@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Memory_MemoryManager@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static UCHAR c_isInitialized;
    // bartok layout dataSize = 4
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Memory_MemoryManager) == 4);

struct Class_Microsoft_Singularity_Memory_Stacks : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Memory_Stacks@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Memory_Stacks@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static UINT8 c_LinkStackBegin;
    static UINT8 c_LinkStackFunctionsBegin;
    static UINT8 c_LinkStackFunctionsLimit;
    static UINT8 c_LinkStackLimit;
    static UINT8 c_LinkStackStubsBegin;
    static UINT8 c_LinkStackStubsLimit;
    static UINT8 c_UnlinkStackBegin;
    static UINT8 c_UnlinkStackLimit;
    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Memory_Stacks) == 4);

struct Class_Microsoft_Singularity_Memory_VMManager : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Memory_VMManager@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Memory_VMManager@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Memory_VMManager) == 4);

struct Class_Microsoft_Singularity_Monitoring : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Monitoring@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Monitoring@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* UINT8* */ c_buffer;
    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Monitoring) == 4);

struct Class_Microsoft_Singularity_Monitoring_LogEntry
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Monitoring_LogEntry@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Monitoring_LogEntry@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Monitoring_LogEntry
{
    UINT64                      cycleCount;                              //    0
    UPTR_TYPE                     eip;                                     //    8
    UINT16                      threadId;                                //   12
    UINT16                      processId;                               //   14
    UINT16                      provider;                                //   16
    UINT16                      type;                                    //   18
    PTR_TYPE /* UINT8* */                     text;                                    //   20
    UINT16                      cpu;                                     //   24
    UINT16                      version;                                 //   26
    UPTR_TYPE                     arg0;                                    //   28
    UPTR_TYPE                     arg1;                                    //   32
    UPTR_TYPE                     arg2;                                    //   36
    UPTR_TYPE                     arg3;                                    //   40
    UPTR_TYPE                     arg4;                                    //   44
    // bartok layout dataSize = 48
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, cycleCount) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, eip) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, threadId) == 12);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, processId) == 14);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, provider) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, type) == 18);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, text) == 20);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, cpu) == 24);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, version) == 26);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, arg0) == 28);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, arg1) == 32);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, arg2) == 36);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, arg3) == 40);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Monitoring_LogEntry, arg4) == 44);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Monitoring_LogEntry) == 48);

struct Class_Microsoft_Singularity_MpBootStatus
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_MpBootStatus@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_MpBootStatus@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_MpBootStatus
{
    INT8                        __padding000[4];                         //    0
    // bartok layout dataSize = 4
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_MpBootStatus) == 4);

#define Struct_Microsoft_Singularity_MpBootStatus_AllocFailure 0x80000003    // 2147483651
#define Struct_Microsoft_Singularity_MpBootStatus_BadSignature 0x80000001    // 2147483649
#define Struct_Microsoft_Singularity_MpBootStatus_ConfigLimit 0x80000002    // 2147483650
#define Struct_Microsoft_Singularity_MpBootStatus_FailureMask 0x80000000    // 2147483648
#define Struct_Microsoft_Singularity_MpBootStatus_HalEntry 0x5    // 5
#define Struct_Microsoft_Singularity_MpBootStatus_Phase1Entry 0x1    // 1
#define Struct_Microsoft_Singularity_MpBootStatus_Phase2Entry 0x2    // 2
#define Struct_Microsoft_Singularity_MpBootStatus_Phase3Entry 0x3    // 3
#define Struct_Microsoft_Singularity_MpBootStatus_UndumpEntry 0x4    // 4

struct Class_Microsoft_Singularity_MpExecution : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_MpExecution@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_MpExecution@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_MpExecution) == 4);

struct Class_Microsoft_Singularity_PrivilegedGate : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_PrivilegedGate@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_PrivilegedGate@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_PrivilegedGate) == 4);

struct Class_Microsoft_Singularity_Processor : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Processor@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Processor@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[24];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Scheduling_ProcessorDispatcher* */ dispatcher; //   28
    INT8                        __padding001[61];                        //   32
    // bartok layout dataSize = 93
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Processor, dispatcher) == 28);
STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Processor) == 93);

struct Class_Microsoft_Singularity_ProcessorContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_ProcessorContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_ProcessorContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_ProcessorContext
{
    Struct_Microsoft_Singularity_Isal_CpuRecord cpuRecord;               //    0
    PTR_TYPE /* void* */                      halCpu;                                  // 1184
    PTR_TYPE /* void* */                      _processor;                              // 1188
    UPTR_TYPE                     exception;                               // 1192
    INT32                       ipiFreeze;                               // 1196
    PTR_TYPE /* Struct_Microsoft_Singularity_ProcessorContext* */ nextProcessorContext; // 1200
    INT32                       gcIpiGate;                               // 1204
    INT8                        __padding000[8];                         // 1208
    // bartok layout dataSize = 1216
    
    
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, cpuRecord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, halCpu) == 1184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, _processor) == 1188);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, exception) == 1192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, ipiFreeze) == 1196);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, nextProcessorContext) == 1200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, gcIpiGate) == 1204);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_ProcessorContext) == 1216);

struct Class_System_Exception : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Exception@@2UClass_System_VTable@@A=??_7System_Exception@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[4];                         //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_System_String* */       _message;                                //    8
    UCHAR                        _notifiedDebugger;                       //   12
    INT8                        __padding001[3];                         //   13
    UPTR_TYPE                     _throwAddress;                           //   16
    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(OFFSETOF(Class_System_Exception, _message) == 8);
STATIC_ASSERT(OFFSETOF(Class_System_Exception, _notifiedDebugger) == 12);
STATIC_ASSERT(OFFSETOF(Class_System_Exception, _throwAddress) == 16);
STATIC_ASSERT(sizeof(Class_System_Exception) == 20);

struct Class_Microsoft_Singularity_ProcessUncaughtException : Class_System_Exception
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_ProcessUncaughtException@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_ProcessUncaughtException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_ProcessUncaughtException) == 20);

struct Class_Microsoft_Singularity_Scheduling_ProcessorDispatcher : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_ProcessorDispatcher@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_ProcessorDispatcher@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[48];                        //    4
    // bartok layout dataSize = 52
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Scheduling_ProcessorDispatcher) == 52);

struct Class_Microsoft_Singularity_Scheduling_Scheduler : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_Scheduler@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_Scheduler@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Scheduling_Scheduler) == 4);

struct Class_System_Threading_SpinLock
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Threading_SpinLock@@2UClass_System_VTable@@A=??_7System_Threading_SpinLock@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_System_Threading_SpinLock
{
    INT8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
};

STATIC_ASSERT(sizeof(Struct_System_Threading_SpinLock) == 8);

struct Class_Microsoft_Singularity_Scheduling_SchedulerLock : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_SchedulerLock@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_SchedulerLock@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    Struct_System_Threading_SpinLock spinlock;                           //    4
    // bartok layout dataSize = 12
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Scheduling_SchedulerLock, spinlock) == 4);
STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Scheduling_SchedulerLock) == 12);

struct Class_Microsoft_Singularity_Scheduling_ThreadEntry : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_ThreadEntry@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_ThreadEntry@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[12];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Scheduling_ThreadQueue* */ queue;          //   16
    INT8                        __padding001[4];                         //   20
    // bartok layout dataSize = 24
};

STATIC_ASSERT(OFFSETOF(Class_Microsoft_Singularity_Scheduling_ThreadEntry, queue) == 16);
STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Scheduling_ThreadEntry) == 24);

struct Class_Microsoft_Singularity_Scheduling_ThreadQueue : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_ThreadQueue@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_ThreadQueue@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[12];                        //    4
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Scheduling_ThreadQueue) == 16);

struct Class_Microsoft_Singularity_Scheduling_ThreadQueueStruct
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Scheduling_ThreadQueueStruct@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Scheduling_ThreadQueueStruct@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_Scheduling_ThreadQueueStruct
{
    INT8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Scheduling_ThreadQueueStruct) == 8);

struct Class_Microsoft_Singularity_SMAPINFO
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_SMAPINFO@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_SMAPINFO@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_SMAPINFO
{
    UINT64                      addr;                                    //    0
    UINT64                      size;                                    //    8
    UINT32                      type;                                    //   16
    UINT32                      extendedAttributes;                      //   20
    // bartok layout dataSize = 24
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_SMAPINFO, addr) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_SMAPINFO, size) == 8);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_SMAPINFO, type) == 16);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_SMAPINFO, extendedAttributes) == 20);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_SMAPINFO) == 24);

#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeACPI 0x3    // 3
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeFree 0x1    // 1
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeKernelNonGc 0x6    // 6
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeKernelStack 0x7    // 7
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeMax 0x7    // 7
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeNVS 0x4    // 4
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeReserved 0x2    // 2
#define Struct_Microsoft_Singularity_SMAPINFO_AddressTypeUnusable 0x5    // 5
#define Struct_Microsoft_Singularity_SMAPINFO_ExtendedAttributeRangeEnabled 0x1    // 1
#define Struct_Microsoft_Singularity_SMAPINFO_ExtendedAttributeRangeNV 0x2    // 2

struct Class_Microsoft_Singularity_ThreadContext
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_ThreadContext@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_ThreadContext@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_ThreadContext
{
    Struct_Microsoft_Singularity_Isal_ThreadRecord threadRecord;         //    0
    UINT16                      num;                                     //  592
    UINT16                      regs;                                    //  594
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ prev;                   //  596
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ next;                   //  600
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ prevInKern;             //  604
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ nextInKern;             //  608
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ prevInProc;             //  612
    PTR_TYPE /* Struct_Microsoft_Singularity_ThreadContext* */ nextInProc;             //  616
    UPTR_TYPE                     stackBegin;                              //  620
    UPTR_TYPE                     stackLimit;                              //  624
    UINT16                      processId;                               //  628
    UCHAR                        uncaughtFlag;                            //  630
    UCHAR                        suspendAlert;                            //  631
    PTR_TYPE /* void* */                      _thread;                                 //  632
    UPTR_TYPE                     processThread;                           //  636
    PTR_TYPE /* Struct_System_GCs_CallStack_TransitionRecord* */ stackMarkers;         //  640
    PTR_TYPE /* Struct_System_GCs_CallStack_TransitionRecord* */ processMarkers;       //  644
    UINT16                      threadIndex;                             //  648
    UINT16                      processThreadIndex;                      //  650
    INT32                       gcStates;                                //  652
    INT8                        __padding000[16];                        //  656
    // bartok layout dataSize = 672
    
    
    
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, threadRecord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, num) == 592);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, regs) == 594);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, prev) == 596);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, next) == 600);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, prevInKern) == 604);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, nextInKern) == 608);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, prevInProc) == 612);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, nextInProc) == 616);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, stackBegin) == 620);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, stackLimit) == 624);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, processId) == 628);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, uncaughtFlag) == 630);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, suspendAlert) == 631);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, _thread) == 632);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, processThread) == 636);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, stackMarkers) == 640);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, processMarkers) == 644);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, threadIndex) == 648);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, processThreadIndex) == 650);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, gcStates) == 652);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_ThreadContext) == 672);

struct Class_Microsoft_Singularity_Tracing : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Tracing@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Tracing@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Tracing) == 4);

struct Class_Microsoft_Singularity_V1_Services_PlatformService
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_V1_Services_PlatformService@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_V1_Services_PlatformService@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_V1_Services_PlatformService
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_V1_Services_PlatformService) == 1);

struct Class_Microsoft_Singularity_V1_Services_ProcessService
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_V1_Services_ProcessService@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_V1_Services_ProcessService@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_V1_Services_ProcessService
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_V1_Services_ProcessService) == 1);

struct Class_Microsoft_Singularity_V1_Services_StackService
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_V1_Services_StackService@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_V1_Services_StackService@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_V1_Services_StackService
{
    INT8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    
    
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_V1_Services_StackService) == 1);

struct Class_System_Buffer : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Buffer@@2UClass_System_VTable@@A=??_7System_Buffer@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_System_Buffer) == 4);

struct Class_System_Decimal
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Decimal@@2UClass_System_VTable@@A=??_7System_Decimal@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_System_Decimal
{
    INT8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Struct_System_Decimal) == 16);

struct Class_System_DivideByZeroException : Class_System_Exception
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_DivideByZeroException@@2UClass_System_VTable@@A=??_7System_DivideByZeroException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(sizeof(Class_System_DivideByZeroException) == 20);

struct Class_System_GC : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GC@@2UClass_System_VTable@@A=??_7System_GC@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static INT32 c_allocationGCInhibitCount;
    // bartok layout dataSize = 4
    
    
};

STATIC_ASSERT(sizeof(Class_System_GC) == 4);

struct Class_System_GCs_CalleeSaveRegisters
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GCs_CalleeSaveRegisters@@2UClass_System_VTable@@A=??_7System_GCs_CalleeSaveRegisters@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_System_GCs_CalleeSaveRegisters
{
    UPTR_TYPE                     EBX;                                     //    0
    UPTR_TYPE                     EDI;                                     //    4
    UPTR_TYPE                     ESI;                                     //    8
    UPTR_TYPE                     EBP;                                     //   12
    // bartok layout dataSize = 16
};

STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CalleeSaveRegisters, EBX) == 0);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CalleeSaveRegisters, EDI) == 4);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CalleeSaveRegisters, ESI) == 8);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CalleeSaveRegisters, EBP) == 12);
STATIC_ASSERT(sizeof(Struct_System_GCs_CalleeSaveRegisters) == 16);

struct Class_System_GCs_CallStack : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GCs_CallStack@@2UClass_System_VTable@@A=??_7System_GCs_CallStack@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* UPTR_TYPE* */ c_codeBaseStartTable;
    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_System_GCs_CallStack) == 4);

struct Class_System_GCs_CallStack_TransitionRecord
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GCs_CallStack_TransitionRecord@@2UClass_System_VTable@@A=??_7System_GCs_CallStack_TransitionRecord@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_System_GCs_CallStack_TransitionRecord
{
    PTR_TYPE /* Struct_System_GCs_CallStack_TransitionRecord* */ oldTransitionRecord;  //    0
    UPTR_TYPE                     callAddr;                                //    4
    UPTR_TYPE                     stackBottom;                             //    8
    Struct_System_GCs_CalleeSaveRegisters calleeSaveRegisters;           //   12
    // bartok layout dataSize = 28
};

STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CallStack_TransitionRecord, oldTransitionRecord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CallStack_TransitionRecord, callAddr) == 4);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CallStack_TransitionRecord, stackBottom) == 8);
STATIC_ASSERT(OFFSETOF(Struct_System_GCs_CallStack_TransitionRecord, calleeSaveRegisters) == 12);
STATIC_ASSERT(sizeof(Struct_System_GCs_CallStack_TransitionRecord) == 28);

struct Class_System_GCs_PageTable : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GCs_PageTable@@2UClass_System_VTable@@A=??_7System_GCs_PageTable@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* UINT32* */ c_halPageDescriptor;
    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_System_GCs_PageTable) == 4);

struct Class_System_GCs_Transitions : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_GCs_Transitions@@2UClass_System_VTable@@A=??_7System_GCs_Transitions@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_System_GCs_Transitions) == 4);

#define Class_System_GCs_Transitions_DormantState 0x1    // 1
#define Class_System_GCs_Transitions_MutatorState 0x2    // 2
#define Class_System_GCs_Transitions_OtherDormantState 0x10    // 16
#define Class_System_GCs_Transitions_OtherMutatorState 0x20    // 32

struct Class_System_Math : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Math@@2UClass_System_VTable@@A=??_7System_Math@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

STATIC_ASSERT(sizeof(Class_System_Math) == 4);

struct Class_System_NullReferenceException : Class_System_Exception
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_NullReferenceException@@2UClass_System_VTable@@A=??_7System_NullReferenceException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(sizeof(Class_System_NullReferenceException) == 20);

struct Class_System_Number : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Number@@2UClass_System_VTable@@A=??_7System_Number@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[16];                        //    4
    // bartok layout dataSize = 20
    
    
};

STATIC_ASSERT(sizeof(Class_System_Number) == 20);

struct Class_System_OverflowException : Class_System_Exception
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_OverflowException@@2UClass_System_VTable@@A=??_7System_OverflowException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(sizeof(Class_System_OverflowException) == 20);

struct Class_System_Type : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Type@@2UClass_System_VTable@@A=??_7System_Type@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
};

STATIC_ASSERT(sizeof(Class_System_Type) == 4);

struct Class_System_RuntimeType : Class_System_Type
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_RuntimeType@@2UClass_System_VTable@@A=??_7System_RuntimeType@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[12];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_System_String* */       name;                                    //   16
    INT8                        __padding001[24];                        //   20
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_System_VTable* */       classVtable;                             //   44
    INT8                        __padding002[24];                        //   48
    // bartok layout dataSize = 72
};

STATIC_ASSERT(OFFSETOF(Class_System_RuntimeType, name) == 16);
STATIC_ASSERT(OFFSETOF(Class_System_RuntimeType, classVtable) == 44);
STATIC_ASSERT(sizeof(Class_System_RuntimeType) == 72);

struct Class_System_SchedulerTime
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_SchedulerTime@@2UClass_System_VTable@@A=??_7System_SchedulerTime@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_System_SchedulerTime
{
    INT8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
};

STATIC_ASSERT(sizeof(Struct_System_SchedulerTime) == 8);

struct Class_System_StackOverflowException : Class_System_Exception
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_StackOverflowException@@2UClass_System_VTable@@A=??_7System_StackOverflowException@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 20
    
};

STATIC_ASSERT(sizeof(Class_System_StackOverflowException) == 20);

struct Class_System_String : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_String@@2UClass_System_VTable@@A=??_7System_String@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    INT8                        __padding000[4];                         //    4
    INT32                       m_stringLength;                          //    8
    WCHAR                 m_firstChar;                             //   12
    // bartok layout dataSize = 14
};

STATIC_ASSERT(OFFSETOF(Class_System_String, m_stringLength) == 8);
STATIC_ASSERT(OFFSETOF(Class_System_String, m_firstChar) == 12);
STATIC_ASSERT(sizeof(Class_System_String) == 14);

struct Class_System_Threading_Thread : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_Threading_Thread@@2UClass_System_VTable@@A=??_7System_Threading_Thread@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    UPTR_TYPE                     asmStackBase;                            //    4
    UPTR_TYPE                     asmStackLimit;                           //    8
    PTR_TYPE /* Struct_System_GCs_CallStack_TransitionRecord* */ asmStackMarker;       //   12
    INT8                        __padding000[32];                        //   16
    INT32                       insideOfContextSwitchDepth;              //   48
    INT8                        __padding001[72];                        //   52
    Struct_System_SchedulerTime blockedUntil;                            //  124
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Scheduling_ThreadEntry* */ schedulerEntry; //  132
    INT8                        __padding002[12];                        //  136
    Struct_Microsoft_Singularity_ThreadContext context;                  //  148
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_Microsoft_Singularity_Process* */ process;                       //  820
    INT8                        __padding003[88];                        //  824
    // bartok layout dataSize = 912
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackBase) == 4);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackLimit) == 8);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackMarker) == 12);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, insideOfContextSwitchDepth) == 48);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, blockedUntil) == 124);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, schedulerEntry) == 132);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, context) == 148);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, process) == 820);
STATIC_ASSERT(sizeof(Class_System_Threading_Thread) == 912);

struct Class_System_VTable : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_System_VTable@@2U1@A=??_7System_VTable@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    static PTR_TYPE /* ClassVector_int64* */ c_dynamicCountProfileFunction;
    INT8                        __padding000[64];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    PTR_TYPE /* Class_System_RuntimeType* */  vtableType;                              //   68
    INT8                        __padding001[8];                         //   72
    UCHAR                        isAcyclicRefType;                        //   80
    // bartok layout dataSize = 81
    
    
    
    
};

STATIC_ASSERT(OFFSETOF(Class_System_VTable, vtableType) == 68);
STATIC_ASSERT(OFFSETOF(Class_System_VTable, isAcyclicRefType) == 80);
STATIC_ASSERT(sizeof(Class_System_VTable) == 81);

#ifndef SINGULARITY_LOADER
#pragma pack(pop) // 1
#endif
#pragma pack(pop) 
