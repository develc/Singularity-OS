//
// Warning: This .h file is generated automatically by Bartok.
//          If you want to change its contents, edit the source .cs files.
//

#ifndef SINGULARITY_LOADER
#pragma pack(push, 1)
#endif

typedef void * Null;
struct Class_Microsoft_Bartok_Runtime_Constants;
struct Struct_Microsoft_Bartok_Runtime_PostHeader;
struct Struct_Microsoft_Bartok_Runtime_StructuralType;
struct Class_Microsoft_Singularity_AppRuntime;
struct Class_Microsoft_Singularity_DebugStub;
struct Struct_Microsoft_Singularity_Eventing_ArrayType;
struct Class_Microsoft_Singularity_Eventing_Controller;
struct Class_Microsoft_Singularity_Eventing_DataType;
struct Class_Microsoft_Singularity_Eventing_EventDescriptor;
struct Class_Microsoft_Singularity_Eventing_EventingStorage;
struct Class_Microsoft_Singularity_Eventing_EventSource;
struct Class_Microsoft_Singularity_Eventing_GlobalStorage;
struct Class_Microsoft_Singularity_Eventing_LocalController;
struct Class_Microsoft_Singularity_Eventing_MemoryStorage;
struct Struct_Microsoft_Singularity_Eventing_QualityOfService;
struct Class_Microsoft_Singularity_Eventing_QuerySession;
struct Class_Microsoft_Singularity_Eventing_SystemControllerProxy;
struct Class_Microsoft_Singularity_GCProfilerLogger;
struct Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer;
struct Class_Microsoft_Singularity_Io_IoPort;
struct Struct_Microsoft_Singularity_Isal_CpuRecord;
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
struct Struct_Microsoft_Singularity_Isal_IX_Gdte;
struct Struct_Microsoft_Singularity_Isal_IX_Gdte64;
struct Struct_Microsoft_Singularity_Isal_IX_Gdtp;
struct Struct_Microsoft_Singularity_Isal_IX_MmxContext;
struct Struct_Microsoft_Singularity_Isal_IX_PE;
struct Struct_Microsoft_Singularity_Isal_IX_TSS;
struct Struct_Microsoft_Singularity_Isal_IX_uint128;
struct Struct_Microsoft_Singularity_Isal_SpillContext;
struct Struct_Microsoft_Singularity_Isal_ThreadRecord;
struct Struct_Microsoft_Singularity_Memory_PhysicalAddress;
struct Class_Microsoft_Singularity_Memory_Stacks;
struct Class_Microsoft_Singularity_Monitoring;
struct Struct_Microsoft_Singularity_Monitoring_LogEntry;
struct Class_Microsoft_Singularity_PrivilegedGate;
struct Class_Microsoft_Singularity_Processor;
struct Struct_Microsoft_Singularity_ProcessorContext;
struct Struct_Microsoft_Singularity_ThreadContext;
struct Class_Microsoft_Singularity_Tracing;
struct Struct_Microsoft_Singularity_V1_Processes_ProcessHandle;
struct Struct_Microsoft_Singularity_V1_Services_DebugService;
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
struct ClassVector_bartok_char;
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
    Class_System_VTable *       vtableObject;                            //    0
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

    static ClassVector_Class_System_String * c_StructuralTypeNames;
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    ClassVector_int32 *         arrayOfStride;                           //    4
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
    int8                        __padding000[4];                         //    0
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

struct Class_Microsoft_Singularity_AppRuntime : Class_System_Object
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_AppRuntime@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_AppRuntime@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    // bartok layout dataSize = 4
    static int32 g_AppStart(Class_System_Type *);
    static int32 g_CallMain(ClassVector_Class_System_String *);
    static bool g_MainReturnsInt();
    static void g_SetDebuggerPresence(bool);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_AppRuntime) == 4);

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
    static void g_Break();
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
    uint16                      Length;                                  //    0
    uint16                      ItemSize;                                //    2
    uint32                      Type;                                    //    4
    void *                      Buffer;                                  //    8
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

    int8                        __padding000[4];                         //    4
    // bartok layout dataSize = 8
    static bool g_GetSharedSourceHandlesInternal(uint32, UIntPtr *, UIntPtr *, UIntPtr *);
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

    int8                        __padding000[20];                        //    4
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

    int8                        __padding000[20];                        //    4
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

    int8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
    static UIntPtr g_LogSourceEntryImpl(UIntPtr, uint32, UIntPtr, uint8 *, int32, int32, Struct_Microsoft_Singularity_Eventing_ArrayType *);
    static UIntPtr g_LogSourceEntryImpl(UIntPtr, uint32, UIntPtr, uint8 *, int32);
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

    int8                        __padding000[20];                        //    8
    // bartok layout dataSize = 28
    static UIntPtr g_AllocateSourceHandleImpl(Class_System_String *);
    static UIntPtr g_FetchLocalStorage();
    static bool g_GetControllerHandle(UIntPtr *, UIntPtr *);
    static bool g_QueryNativeSourceInfo(UIntPtr, UIntPtr *, bartok_char *, uint16);
    static int32 g_QuerySystemSources(UIntPtr *, uint16);
    static void g_RegisterActiveSourceImpl(UIntPtr, UIntPtr, UIntPtr, uint16, uint16);
    static UIntPtr g_RegisterEnumDescriptorInternal(Class_System_String *, uint16);
    static UIntPtr g_RegisterEventDescriptorInternal(Class_System_String *, Class_System_String *);
    static UIntPtr g_RegisterEventFieldInternal(UIntPtr, Class_System_String *, uint16, uint16);
    static UIntPtr g_RegisterEventGenericFieldInternal(UIntPtr, Class_System_String *, uint16, uint16, UIntPtr);
    static void g_RegisterSourceStorageImpl(UIntPtr, UIntPtr, uint32);
    static bool g_RegisterStorageImpl(UIntPtr);
    static UIntPtr g_RegisterValueDescriptorInternal(UIntPtr, Class_System_String *, uint64, uint8);
    static bool g_SetRepositoryStorage(UIntPtr);
    static void g_UnRegisterSourceImpl(UIntPtr);
    static void g_UnRegisterStorageImpl(UIntPtr);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_LocalController) == 28);

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

    int8                        __padding000[12];                        //   24
    // bartok layout dataSize = 36
    static UIntPtr g_CreateQueryViewImpl(UIntPtr, bool);
    static void g_DeleteQueryViewImpl(UIntPtr);
    static uint32 g_GetMemoryStorageOveheadImpl();
    static UIntPtr g_GetNextEntryImpl(UIntPtr, UIntPtr *, uint32 *, uint8 *, uint16);
    static UIntPtr g_MemoryStorageCreateImpl(uint32, uint8 *, uint32, uint32);
    static void g_MemoryStorageRegisterBufferImpl(UIntPtr, uint8 *, uint32);
    static UIntPtr g_WalkEventDescriptorImpl(UIntPtr, UIntPtr, uint16 *, uint16 *, bartok_char *, uint16);
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
    int8                        __padding000[16];                        //    0
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

    int8                        __padding000[12];                        //    4
    // bartok layout dataSize = 16
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_QuerySession) == 16);

struct Class_Microsoft_Singularity_Eventing_SystemControllerProxy : Class_Microsoft_Singularity_Eventing_Controller
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_Eventing_SystemControllerProxy@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_Eventing_SystemControllerProxy@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;

    int8                        __padding000[8];                         //    8
    // bartok layout dataSize = 16
    static bool g_DebugPrintLogEntry(UIntPtr);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Eventing_SystemControllerProxy) == 16);

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

    static uintptr c_StorageHandle;
    static uintptr c_TypeStorageHandle;
    int8                        __padding000[104];                       //    4
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

    int8                        __padding000[20];                        //    4
    // bartok layout dataSize = 24
    static void g_LogAllocation(int32, UIntPtr, uint32);
    static void g_LogFunction(uint32, UIntPtr);
    static void g_LogGenerations(int32, int32 *);
    static void g_LogInterval(uint64);
    static void g_LogObject(uint32, UIntPtr *);
    static void g_LogRoots(uint32, UIntPtr *);
    static void g_LogStack(uint32, uint32, UIntPtr, uint32, uint32 *);
    static void g_LogType(uint32, Class_System_String *);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_GCProfilerLogger_ProfilerBuffer) == 24);

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

    int8                        __padding000[7];                         //    4
    // bartok layout dataSize = 11
    static uint16 g_HalReadInt16(uint32);
    static uint32 g_HalReadInt32(uint32);
    static uint8 g_HalReadInt8(uint32);
    static void g_HalWriteInt16(uint32, uint16);
    static void g_HalWriteInt32(uint32, uint32);
    static void g_HalWriteInt8(uint32, uint8);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Io_IoPort) == 11);

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
    int8                        __padding000[16];                        //    0
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
    uint16                      fcw;                                     //    0
    uint16                      fsw;                                     //    2
    uint16                      ftw;                                     //    4
    uint16                      fop;                                     //    6
    uint32                      ip;                                      //    8
    uint16                      cs;                                      //   12
    uint16                      reserved0;                               //   14
    uint32                      dp;                                      //   16
    uint16                      ds;                                      //   20
    uint16                      reserved1;                               //   22
    uint32                      mxcsr;                                   //   24
    uint32                      mxcsrmask;                               //   28
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
    uintptr                     ax;                                      //    0
    uintptr                     bx;                                      //    4
    uintptr                     cx;                                      //    8
    uintptr                     dx;                                      //   12
    uintptr                     di;                                      //   16
    uintptr                     si;                                      //   20
    uintptr                     sp;                                      //   24
    uintptr                     ip;                                      //   28
    uintptr                     bp;                                      //   32
    uintptr                     fl;                                      //   36
    int8                        __padding000[8];                         //   40
    Struct_Microsoft_Singularity_Isal_IX_MmxContext mmx;                 //   48
    uintptr                     cs;                                      //  560
    uintptr                     stackLimit;                              //  564
    int32                       spillFlags;                              //  568
    int8                        __padding001[4];                         //  572
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
    int32                       id;                                      //  576
    uintptr                     interruptStackBegin;                     //  580
    uintptr                     interruptStackLimit;                     //  584
    int8                        __padding000[596];                       //  588
    // bartok layout dataSize = 1184
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, spill) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, id) == 576);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, interruptStackBegin) == 580);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_CpuRecord, interruptStackLimit) == 584);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_CpuRecord) == 1184);

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

    static int32 c_currentCpuOffset;
    static int32 c_currentThreadOffset;
    // bartok layout dataSize = 4
    static void g_ClearFpuStatus();
    static UIntPtr g_GetCs();
    static Struct_Microsoft_Singularity_Isal_CpuRecord * g_GetCurrentCpu();
    static Struct_Microsoft_Singularity_Isal_ThreadRecord * g_GetCurrentThread();
    static uint64 g_GetCycleCount();
    static UIntPtr g_GetFrameCallerFrame(UIntPtr);
    static UIntPtr g_GetFramePointer();
    static UIntPtr g_GetFrameReturnAddress(UIntPtr);
    static UIntPtr g_GetStackPointer();
    static int32 g_In(uint16);
    static void g_InitFpu();
    static bool g_IsInUserMode();
    static void g_Out(uint16, int32);
    static void g_ReadCpuid(uint32, uint32 *, uint32 *, uint32 *, uint32 *);
    static uint32 g_ReadFpuStatus();
    static uint64 g_ReadMsr(uint32);
    static uint64 g_ReadPmc(uint32);
    static void g_RepInS(uint32, uint16, uint8 *);
    static void g_RepOutS(uint32, uint16, uint8 *);
    static void g_WriteMsr(uint32, uint64);
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
    static UIntPtr g_DoCallback(Class_Microsoft_Singularity_Isal_Isa_ICallback *, UIntPtr);
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
    int32                       value;                                   //    0
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
    int8                        __padding000[1];                         //    0
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
    int8                        __padding000[1];                         //    0
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
    int8                        __padding000[1];                         //    0
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
    uint16                      pad;                                     //    0
    uint16                      limit;                                   //    2
    uint32                      addr;                                    //    4
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
    uint16                      limit;                                   //    0
    uint16                      base0_15;                                //    2
    uint8                       base16_23;                               //    4
    uint8                       access;                                  //    5
    uint8                       granularity;                             //    6
    uint8                       base24_31;                               //    7
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
    int8                        __padding000[1];                         //    0
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
    int8                        __padding000[1];                         //    0
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
    int8                        __padding000[1];                         //    0
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
    uint16                      limit;                                   //    0
    uint16                      base0_15;                                //    2
    uint8                       base16_23;                               //    4
    uint8                       access;                                  //    5
    uint8                       granularity;                             //    6
    uint8                       base24_31;                               //    7
    uint32                      base32_63;                               //    8
    uint32                      reserved;                                //   12
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
    int8                        __padding000[1];                         //    0
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
    uint16                      previous_tss;                            //    0
    uint16                      pad0;                                    //    2
    uint32                      esp0;                                    //    4
    uint16                      ss0;                                     //    8
    uint16                      pad1;                                    //   10
    uint32                      esp1;                                    //   12
    uint16                      ss1;                                     //   16
    uint16                      pad2;                                    //   18
    uint32                      esp2;                                    //   20
    uint16                      ss2;                                     //   24
    uint16                      pad3;                                    //   26
    uint32                      cr3;                                     //   28
    uint32                      eip;                                     //   32
    uint32                      eflags;                                  //   36
    uint32                      eax;                                     //   40
    uint32                      ecx;                                     //   44
    uint32                      edx;                                     //   48
    uint32                      ebx;                                     //   52
    uint32                      esp;                                     //   56
    uint32                      ebp;                                     //   60
    uint32                      esi;                                     //   64
    uint32                      edi;                                     //   68
    uint16                      es;                                      //   72
    uint16                      pades;                                   //   74
    uint16                      cs;                                      //   76
    uint16                      padcs;                                   //   78
    uint16                      ss;                                      //   80
    uint16                      padss;                                   //   82
    uint16                      ds;                                      //   84
    uint16                      padds;                                   //   86
    uint16                      fs;                                      //   88
    uint16                      padfs;                                   //   90
    uint16                      gs;                                      //   92
    uint16                      padgs;                                   //   94
    uint16                      ldt;                                     //   96
    uint16                      padldt;                                  //   98
    uint16                      trap_bit;                                //  100
    uint16                      io_bitmap_offset;                        //  102
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
    uintptr                     activeStackLimit;                        //  576
    int8                        __padding000[12];                        //  580
    // bartok layout dataSize = 592
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_ThreadRecord, spill) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_Isal_ThreadRecord, activeStackLimit) == 576);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Isal_ThreadRecord) == 592);

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
    int8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
    static void m__ctor(Struct_Microsoft_Singularity_Memory_PhysicalAddress *, UIntPtr);
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_Memory_PhysicalAddress) == 8);

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

    static uint8 c_LinkStackBegin;
    static uint8 c_LinkStackFunctionsBegin;
    static uint8 c_LinkStackFunctionsLimit;
    static uint8 c_LinkStackLimit;
    static uint8 c_LinkStackStubsBegin;
    static uint8 c_LinkStackStubsLimit;
    static uint8 c_UnlinkStackBegin;
    static uint8 c_UnlinkStackLimit;
    // bartok layout dataSize = 4
    static void g_LinkStack0();
    static void g_LinkStack100();
    static void g_LinkStack104();
    static void g_LinkStack108();
    static void g_LinkStack112();
    static void g_LinkStack116();
    static void g_LinkStack12();
    static void g_LinkStack120();
    static void g_LinkStack124();
    static void g_LinkStack128();
    static void g_LinkStack16();
    static void g_LinkStack20();
    static void g_LinkStack24();
    static void g_LinkStack28();
    static void g_LinkStack32();
    static void g_LinkStack36();
    static void g_LinkStack4();
    static void g_LinkStack40();
    static void g_LinkStack44();
    static void g_LinkStack48();
    static void g_LinkStack52();
    static void g_LinkStack56();
    static void g_LinkStack60();
    static void g_LinkStack64();
    static void g_LinkStack68();
    static void g_LinkStack72();
    static void g_LinkStack76();
    static void g_LinkStack8();
    static void g_LinkStack80();
    static void g_LinkStack84();
    static void g_LinkStack88();
    static void g_LinkStack92();
    static void g_LinkStack96();
    static void g_UnlinkStack0();
    static void g_UnlinkStack12();
    static void g_UnlinkStack16();
    static void g_UnlinkStack20();
    static void g_UnlinkStack24();
    static void g_UnlinkStack28();
    static void g_UnlinkStack32();
    static void g_UnlinkStack36();
    static void g_UnlinkStack4();
    static void g_UnlinkStack40();
    static void g_UnlinkStack44();
    static void g_UnlinkStack48();
    static void g_UnlinkStack52();
    static void g_UnlinkStack56();
    static void g_UnlinkStack60();
    static void g_UnlinkStack64();
    static void g_UnlinkStack8();
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Memory_Stacks) == 4);

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

    static uint8 * c_buffer;
    // bartok layout dataSize = 4
    static int32 g_FillLogEntry(Struct_Microsoft_Singularity_Monitoring_LogEntry *, uint64 *);
    static int32 g_FillTextEntry(uint8 *, uint64, uint8 *, int32);
    static void g_Initialize();
    static bool g_isActive();
    static void g_Log(uint16, uint16, Class_System_String *);
    static void g_Log(uint16, uint16, uint16, uint32, uint32, uint32, uint32, uint32);
    static void g_Log(uint16, uint16);
    static void g_setActive(bool);
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
    uint64                      cycleCount;                              //    0
    uintptr                     eip;                                     //    8
    uint16                      threadId;                                //   12
    uint16                      processId;                               //   14
    uint16                      provider;                                //   16
    uint16                      type;                                    //   18
    uint8 *                     text;                                    //   20
    uint16                      cpu;                                     //   24
    uint16                      version;                                 //   26
    uintptr                     arg0;                                    //   28
    uintptr                     arg1;                                    //   32
    uintptr                     arg2;                                    //   36
    uintptr                     arg3;                                    //   40
    uintptr                     arg4;                                    //   44
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
    static bool g_DisableInterrupts();
    static bool g_InterruptsDisabled();
    static void g_RestoreInterrupts(bool);
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

    // bartok layout dataSize = 4
    static bool g_DisableLocalPreemption();
    static Struct_Microsoft_Singularity_ProcessorContext * g_GetCurrentProcessorContext();
    static Struct_Microsoft_Singularity_ThreadContext * g_GetCurrentThreadContext();
    static void g_RestoreLocalPreemption(bool);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Processor) == 4);

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
    void *                      halCpu;                                  // 1184
    void *                      _processor;                              // 1188
    uintptr                     exception;                               // 1192
    int32                       ipiFreeze;                               // 1196
    Struct_Microsoft_Singularity_ProcessorContext * nextProcessorContext; // 1200
    int32                       gcIpiGate;                               // 1204
    int8                        __padding000[8];                         // 1208
    // bartok layout dataSize = 1216
    static Class_Microsoft_Singularity_Processor * m_GetProcessor(Struct_Microsoft_Singularity_ProcessorContext *);
    static void m_UpdateAfterGC(Struct_Microsoft_Singularity_ProcessorContext *, Class_Microsoft_Singularity_Processor *);
};

STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, cpuRecord) == 0);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, halCpu) == 1184);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, _processor) == 1188);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, exception) == 1192);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, ipiFreeze) == 1196);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, nextProcessorContext) == 1200);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ProcessorContext, gcIpiGate) == 1204);
STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_ProcessorContext) == 1216);

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
    uint16                      num;                                     //  592
    uint16                      regs;                                    //  594
    Struct_Microsoft_Singularity_ThreadContext * prev;                   //  596
    Struct_Microsoft_Singularity_ThreadContext * next;                   //  600
    Struct_Microsoft_Singularity_ThreadContext * prevInKern;             //  604
    Struct_Microsoft_Singularity_ThreadContext * nextInKern;             //  608
    Struct_Microsoft_Singularity_ThreadContext * prevInProc;             //  612
    Struct_Microsoft_Singularity_ThreadContext * nextInProc;             //  616
    uintptr                     stackBegin;                              //  620
    uintptr                     stackLimit;                              //  624
    uint16                      processId;                               //  628
    bool                        uncaughtFlag;                            //  630
    bool                        suspendAlert;                            //  631
    uintptr                     kernelThread;                            //  632
    void *                      _thread;                                 //  636
    Struct_System_GCs_CallStack_TransitionRecord * kernelMarkers;        //  640
    Struct_System_GCs_CallStack_TransitionRecord * stackMarkers;         //  644
    uint16                      kernelThreadIndex;                       //  648
    uint16                      threadIndex;                             //  650
    int32                       gcStates;                                //  652
    int8                        __padding000[16];                        //  656
    // bartok layout dataSize = 672
    static Class_System_Threading_Thread * m_GetThread(Struct_Microsoft_Singularity_ThreadContext *);
    static bool m_IsInKernelMode(Struct_Microsoft_Singularity_ThreadContext *);
    static void m_SetKernelMode(Struct_Microsoft_Singularity_ThreadContext *);
    static void m_SetProcessMode(Struct_Microsoft_Singularity_ThreadContext *);
    static void m_UpdateAfterGC(Struct_Microsoft_Singularity_ThreadContext *, Class_System_Threading_Thread *);
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
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, kernelThread) == 632);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, _thread) == 636);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, kernelMarkers) == 640);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, stackMarkers) == 644);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, kernelThreadIndex) == 648);
STATIC_ASSERT(OFFSETOF(Struct_Microsoft_Singularity_ThreadContext, threadIndex) == 650);
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
    static UIntPtr g_GetSystemTracingStorageHandle();
    static void g_Initialize();
    static void g_Log(uint8, Class_System_String *, Class_System_String *, Class_System_String *);
    static void g_Log(uint8, Class_System_String *, Class_System_String *, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, Class_System_String *, UIntPtr);
    static void g_Log(uint8, Class_System_String *, Class_System_String *);
    static void g_Log(uint8, Class_System_String *, UIntPtr, UIntPtr, UIntPtr, UIntPtr, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, UIntPtr, UIntPtr, UIntPtr, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, UIntPtr, UIntPtr, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, UIntPtr, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, UIntPtr, UIntPtr);
    static void g_Log(uint8, Class_System_String *, UIntPtr);
    static void g_Log(uint8, Class_System_String *);
    static void g_Log(uint8);
};

STATIC_ASSERT(sizeof(Class_Microsoft_Singularity_Tracing) == 4);

struct Class_Microsoft_Singularity_V1_Processes_ProcessHandle
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_V1_Processes_ProcessHandle@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_V1_Processes_ProcessHandle@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_V1_Processes_ProcessHandle
{
    int8                        __padding000[4];                         //    0
    // bartok layout dataSize = 4
    static void g_SuspendBarrier();
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_V1_Processes_ProcessHandle) == 4);

struct Class_Microsoft_Singularity_V1_Services_DebugService
{
#ifndef SINGULARITY_LOADER
#pragma comment(linker, "/alternatename:?_vtable@Class_Microsoft_Singularity_V1_Services_DebugService@@2UClass_System_VTable@@A=??_7Microsoft_Singularity_V1_Services_DebugService@@6B@")
    // Do not define this static or the above #pragma will be silently ignored
    // by the C++ compiler.  In that case this static will no longer refer to
    // the correct vtable.
    static struct Class_System_VTable _vtable;
#endif
    static struct Class_System_RuntimeType _type;
};

struct Struct_Microsoft_Singularity_V1_Services_DebugService
{
    int8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    static void g_Print(bartok_char *, int32);
};

STATIC_ASSERT(sizeof(Struct_Microsoft_Singularity_V1_Services_DebugService) == 1);

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
    int8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    static int32 g_GetProcessorContextOffset();
    static int32 g_GetThreadContextOffset();
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
    int8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    static bool g_GetSharedSourceHandles(uint32, UIntPtr *, UIntPtr *, UIntPtr *);
    static bool g_GetSharedSourceHandlesImpl(uint32, UIntPtr *, UIntPtr *, UIntPtr *);
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
    int8                        __padding000[1];                         //    0
    // bartok layout dataSize = 1
    static UIntPtr g_AllocateStackSegment(UIntPtr);
    static void g_FreeStackSegment();
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
    static void g_CopyPages(uint8 *, uint8 *, int32);
    static void g_MoveMemory(uint8 *, uint8 *, int32);
    static void g_ZeroMemory(uint8 *, int32);
    static void g_ZeroPages(uint8 *, int32);
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
    int8                        __padding000[16];                        //    0
    // bartok layout dataSize = 16
    static int32 g_DecimalAdd(Struct_System_Decimal *, Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalCompare(Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalDivide(Struct_System_Decimal *, Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalFloor(Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalFromDouble(float64, Struct_System_Decimal *);
    static int32 g_DecimalFromFloat(float32, Struct_System_Decimal *);
    static int32 g_DecimalMultiply(Struct_System_Decimal *, Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalRound(Struct_System_Decimal *, int32, Struct_System_Decimal *);
    static int32 g_DecimalSubtract(Struct_System_Decimal *, Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DecimalTruncate(Struct_System_Decimal *, Struct_System_Decimal *);
    static int32 g_DoubleFromDecimal(Struct_System_Decimal *, float64 *);
    static int32 g_FloatFromDecimal(Struct_System_Decimal *, float32 *);
};

STATIC_ASSERT(sizeof(Struct_System_Decimal) == 16);

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

    int8                        __padding000[4];                         //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    Class_System_String *       _message;                                //    8
    bool                        _notifiedDebugger;                       //   12
    int8                        __padding001[3];                         //   13
    uintptr                     _throwAddress;                           //   16
    // bartok layout dataSize = 20
    static bool g_IsUnlinkStack(UIntPtr);
};

STATIC_ASSERT(OFFSETOF(Class_System_Exception, _message) == 8);
STATIC_ASSERT(OFFSETOF(Class_System_Exception, _notifiedDebugger) == 12);
STATIC_ASSERT(OFFSETOF(Class_System_Exception, _throwAddress) == 16);
STATIC_ASSERT(sizeof(Class_System_Exception) == 20);

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
    static void m__ctor(Class_System_DivideByZeroException *);
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

    static int32 c_allocationGCInhibitCount;
    // bartok layout dataSize = 4
    static Class_System_Object * g_AllocateObject(Class_System_VTable *);
    static Class_System_Threading_Thread * g_CollectBody(Class_System_Threading_Thread *, int32);
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
    uintptr                     EBX;                                     //    0
    uintptr                     EDI;                                     //    4
    uintptr                     ESI;                                     //    8
    uintptr                     EBP;                                     //   12
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

    static uintptr * c_codeBaseStartTable;
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
    Struct_System_GCs_CallStack_TransitionRecord * oldTransitionRecord;  //    0
    uintptr                     callAddr;                                //    4
    uintptr                     stackBottom;                             //    8
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

    static uint32 * c_halPageDescriptor;
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
    static void g_LeaveManagedSpace(Struct_Microsoft_Singularity_ThreadContext *);
    static void g_RestoreMutatorControlIfNeeded();
    static void g_ReturnToManagedSpace(Struct_Microsoft_Singularity_ThreadContext *);
};

STATIC_ASSERT(sizeof(Class_System_GCs_Transitions) == 4);

#define Class_System_GCs_Transitions_DormantState 0x10    // 16
#define Class_System_GCs_Transitions_MutatorState 0x20    // 32
#define Class_System_GCs_Transitions_OtherDormantState 0x1    // 1
#define Class_System_GCs_Transitions_OtherMutatorState 0x2    // 2

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
    static float64 g_Abs(float64);
    static float64 g_Acos(float64);
    static float64 g_Asin(float64);
    static float64 g_Atan(float64);
    static float64 g_Atan2(float64, float64);
    static float64 g_Ceiling(float64);
    static float64 g_Cos(float64);
    static float64 g_Cosh(float64);
    static float64 g_Exp(float64);
    static float64 g_Floor(float64);
    static float64 g_Log(float64);
    static float64 g_Log10(float64);
    static float64 g_Mod(float64, float64);
    static float64 g_Pow(float64, float64);
    static float64 g_Round(float64);
    static float64 g_Sin(float64);
    static float64 g_Sinh(float64);
    static float64 g_Sqrt(float64);
    static float64 g_Tan(float64);
    static float64 g_Tanh(float64);
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
    static void m__ctor(Class_System_NullReferenceException *);
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

    int8                        __padding000[16];                        //    4
    // bartok layout dataSize = 20
    static float64 g_atof(ClassVector_uint8 *);
    static bool g_ecvt(float64, int32, ClassVector_bartok_char *, int32 *, bool *);
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
    static void m__ctor(Class_System_OverflowException *);
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

    int8                        __padding000[12];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    Class_System_String *       name;                                    //   16
    int8                        __padding001[24];                        //   20
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    Class_System_VTable *       classVtable;                             //   44
    int8                        __padding002[24];                        //   48
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
    int8                        __padding000[8];                         //    0
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
    static void m__ctor(Class_System_StackOverflowException *);
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

    int8                        __padding000[4];                         //    4
    int32                       m_stringLength;                          //    8
    bartok_char                 m_firstChar;                             //   12
    // bartok layout dataSize = 14
};

STATIC_ASSERT(OFFSETOF(Class_System_String, m_stringLength) == 8);
STATIC_ASSERT(OFFSETOF(Class_System_String, m_firstChar) == 12);
STATIC_ASSERT(sizeof(Class_System_String) == 14);

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
    int8                        __padding000[8];                         //    0
    // bartok layout dataSize = 8
};

STATIC_ASSERT(sizeof(Struct_System_Threading_SpinLock) == 8);

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

    int8                        __padding000[16];                        //    4
    uintptr                     asmStackBase;                            //   20
    uintptr                     asmStackLimit;                           //   24
    Struct_System_GCs_CallStack_TransitionRecord * asmStackMarker;       //   28
    Struct_Microsoft_Singularity_ThreadContext * context;                //   32
    int8                        __padding001[108];                       //   36
    // bartok layout dataSize = 144
    static UIntPtr g_CheckKernelProcessBoundary(UIntPtr, UIntPtr, Class_System_Exception *);
    static void g_ThreadStub(int32);
};

STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackBase) == 20);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackLimit) == 24);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, asmStackMarker) == 28);
STATIC_ASSERT(OFFSETOF(Class_System_Threading_Thread, context) == 32);
STATIC_ASSERT(sizeof(Class_System_Threading_Thread) == 144);

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

    static ClassVector_int64 * c_dynamicCountProfileFunction;
    int8                        __padding000[64];                        //    4
    // This alignment specification is true but can cause the C++ compiler to
    // misinterpret Bartok layouts:
    // __declspec(align(4))
    Class_System_RuntimeType *  vtableType;                              //   68
    int8                        __padding001[8];                         //   72
    bool                        isAcyclicRefType;                        //   80
    // bartok layout dataSize = 81
    static void g_Initialize(Class_System_RuntimeType *);
    static bool g_IsExceptionHandler(Class_System_Type *, Class_System_Exception *);
    static void g_TerminateByException(Class_System_Exception *);
    static void g_throwNewOverflowException();
};

STATIC_ASSERT(OFFSETOF(Class_System_VTable, vtableType) == 68);
STATIC_ASSERT(OFFSETOF(Class_System_VTable, isAcyclicRefType) == 80);
STATIC_ASSERT(sizeof(Class_System_VTable) == 81);

#ifndef SINGULARITY_LOADER
#pragma pack(pop) // 1
#endif
