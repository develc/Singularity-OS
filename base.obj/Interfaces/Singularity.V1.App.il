.assembly extern 'Corlib' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'Singularity.V1.App' {
.ver 1:0:0:0
//publickey(C:\Users\cc\source\repos\Singularity-OS\base.obj\Interfaces\public.snk)
.publickey = ( 00 24 00 00 04 80 00 00 94 00 00 00 06 02 00 00
               00 24 00 00 52 53 41 31 00 04 00 00 01 00 01 00
               2b 96 12 82 73 b1 f0 b2 89 a1 53 81 a7 a1 1a bf
               07 40 a0 08 21 51 de df 0d 8c 66 0d 61 9a 97 19
               07 08 76 e4 94 44 5a ab 22 bc b3 97 d7 b4 ff 97
               ca 80 ed 49 b3 fc 2b 87 bb 76 7b 60 ca fb f9 49
               aa 43 5f cf 17 de b3 19 01 be 16 49 3c 87 df e6
               1d 71 f5 18 5f 06 97 a7 0a b5 e0 f1 e0 5c 70 46
               db 0d 28 c1 be 6d 83 da 3f ac 58 16 1c 56 3c a5
               9d c2 ef 9c e3 02 30 d9 37 7a a6 3d d2 76 cd bf
               )
.hash algorithm 0x00008004
.custom instance void [Corlib]System.Reflection.AssemblyVersionAttribute::.ctor(string) = ( 01 00
 07 31 2e 30 2e 30 2e 30
 00 00 )
.custom instance void [Corlib]System.Reflection.AssemblyKeyFileAttribute::.ctor(string) = ( 01 00
 0a 70 75 62 6c 69 63 2e 73 6e 6b
 00 00 )
.custom instance void [Corlib]System.Reflection.AssemblyDelaySignAttribute::.ctor(bool) = ( 01 00
 01
 00 00 )
}
.namespace Microsoft.Singularity.V1.Processes {
.class public auto ansi serializable sealed 'ProcessState' extends [Corlib]System.Enum
{
.field public static literal valuetype 'Microsoft.Singularity.V1.Processes.ProcessState' Active = int32(0)
.field public static literal valuetype 'Microsoft.Singularity.V1.Processes.ProcessState' Suspended = int32(1)
.field public static literal valuetype 'Microsoft.Singularity.V1.Processes.ProcessState' Stopped = int32(2)
.field public rtspecialname specialname int32 value__
} // end of enumeration Microsoft.Singularity.V1.Processes.ProcessState
.class public sealed 'ProcessHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(char* 'args',int32* 'argLengths',int32 'argCount',char* 'role',int32 'roleLength',int32 'endpointCount',[out] value class 'Microsoft.Singularity.V1.Processes.ProcessHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Create
.method hidebysig public static bool 'Create'(char* 'processName',int32 'processNameLength',char* 'action',int32 'actionLength',char* 'role',int32 'roleLength',[out] value class 'Microsoft.Singularity.V1.Processes.ProcessHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Create
.method hidebysig public static bool 'SetStartupEndpoint'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'index',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'endpoint') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SetStartupEndpoint
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Dispose
.method hidebysig public static bool 'Start'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Start
.method hidebysig public static void 'Join'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',[out] bool& 'started') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Join
.method hidebysig public static bool 'Join'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',value class [Corlib]System.TimeSpan 'timeout',[out] bool& 'started') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Join
.method hidebysig public static bool 'Join'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',value class [Corlib]System.SchedulerTime 'stop',[out] bool& 'started') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Join
.method hidebysig public static bool 'Suspend'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',bool 'recursive') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Suspend
.method hidebysig public static bool 'Resume'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',bool 'recursive') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Resume
.method hidebysig public static void 'Stop'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'exitcode') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.Stop
.method hidebysig public static void 'SuspendBarrier'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SuspendBarrier
.method hidebysig public static int32 'GetProcessId'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.GetProcessId
.method hidebysig public static int32 'GetExitCode'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.GetExitCode
.method hidebysig public static value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 'GetPrincipalHandle'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Security.PrincipalHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.GetPrincipalHandle
.method hidebysig public static value class 'Microsoft.Singularity.V1.Processes.ProcessState' 'GetState'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Processes.ProcessState' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.GetState
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'SetStartupStringArrayArg'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'index',char* 'args',int32* 'argLengths',int32 'argCount') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SetStartupStringArrayArg
.method hidebysig public static bool 'BindToService'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',value class 'Microsoft.Singularity.V1.Types.SystemType' 'impType',value class 'Microsoft.Singularity.V1.Types.SystemType' 'expType',char* 'contract',int32 'contractLen',int32 'startState',int32 'index') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.BindToService
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'SetStartupStringArg'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'arg',char* 'input',int32 'length') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SetStartupStringArg
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'SetStartupLongArg'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'index',int64 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SetStartupLongArg
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'SetStartupBoolArg'(value class 'Microsoft.Singularity.V1.Processes.ProcessHandle' 'handle',int32 'index',bool 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Processes.ProcessHandle.SetStartupBoolArg
} // end of struct Microsoft.Singularity.V1.Processes.ProcessHandle
} // end of namespace Microsoft.Singularity.V1.Processes
.namespace Microsoft.Singularity.V1.Security {
.class public sealed 'PrincipalHandle'
	extends [Corlib]System.ValueType
{
.field public unsigned int64 'val'
.method hidebysig public static value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 'SelfPrincipalHandle'() {
.locals init ([0]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Security.PrincipalHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Security.PrincipalHandle.SelfPrincipalHandle
.method hidebysig public static string 'GetPrincipalName'(value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 'handle') {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Security.PrincipalHandle.GetPrincipalName
.method hidebysig public static string 'ExpandAclIndirection'(string 'name') {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Security.PrincipalHandle.ExpandAclIndirection
} // end of struct Microsoft.Singularity.V1.Security.PrincipalHandle
} // end of namespace Microsoft.Singularity.V1.Security
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'DeliveryHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Services.DeliveryHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DeliveryHandle.Dispose
} // end of struct Microsoft.Singularity.V1.Services.DeliveryHandle
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'EndpointCore'
	extends [Corlib]System.ValueType
{
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'Allocate'(unsigned int32 'size',value class 'Microsoft.Singularity.V1.Types.SystemType' 'st') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Allocate
.method hidebysig public static bool 'Dispose'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'endpoint') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Dispose
.method hidebysig public static void 'Free'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'endpoint') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Free
.method hidebysig public static void 'Connect'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'imp',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'exp',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Connect
.method hidebysig public static bool 'Closed'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Closed
.method hidebysig public static bool 'PeerClosed'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.PeerClosed
.method hidebysig public static bool 'PeerClosedABI'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.PeerClosedABI
.method hidebysig public static void 'Close'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Close
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'GetPeer'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',[out] bool& 'marshall') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetPeer
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'GetPeerABI'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',[out] bool& 'marshall') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetPeerABI
.method hidebysig public static value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'GetWaitHandle'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Threads.SyncHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetWaitHandle
.method hidebysig public static void 'NotifyPeer'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.NotifyPeer
.method hidebysig public static void 'Wait'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.Wait
.method hidebysig public static void 'TransferBlockOwnership'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'ptr',value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'target') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.TransferBlockOwnership
.method hidebysig public static void 'TransferContentOwnership'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'transferee',value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'target') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.TransferContentOwnership
.method hidebysig public static void 'AcceptDelegation'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'imp',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'exp',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.AcceptDelegation
.method hidebysig public static void 'EnableDelegation'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',bool 'allowMediation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.EnableDelegation
.method hidebysig public static int32 'GetOwnerProcessID'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetOwnerProcessID
.method hidebysig public static value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 'GetOwnerPrincipalHandle'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Security.PrincipalHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetOwnerPrincipalHandle
.method hidebysig public static int32 'GetPeerProcessID'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetPeerProcessID
.method hidebysig public static int32 'GetPeerProcessIDABI'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetPeerProcessIDABI
.method hidebysig public static value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 'GetPeerPrincipalHandle'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Security.PrincipalHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Security.PrincipalHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetPeerPrincipalHandle
.method hidebysig public static int32 'GetChannelID'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.GetChannelID
.method hidebysig public static void 'LinkIntoCollection'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'ev') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.LinkIntoCollection
.method hidebysig public static void 'UnlinkFromCollection'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'ev') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.UnlinkFromCollection
.method hidebysig public static void 'MarshallMessage'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',unsigned int8* 'basep',unsigned int8* 'source',int32* 'tagAddress',int32 'msgSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.MarshallMessage
.method hidebysig public static void 'MarshallPointer'(value class 'Microsoft.Singularity.V1.Services.EndpointCore'& 'ep',unsigned int8* 'basep',unsigned int8** 'target',value class 'Microsoft.Singularity.V1.Types.SystemType' 'type',unsigned int8* 'parent',int32 'offset') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.EndpointCore.MarshallPointer
} // end of struct Microsoft.Singularity.V1.Services.EndpointCore
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'DebugService'
	extends [Corlib]System.ValueType
{
.field public int32 'id'
.method hidebysig public static void 'PrintBegin'([out] char*& 'buffer',[out] int32& 'length') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.PrintBegin
.method hidebysig public static void 'PrintComplete'(char* 'buffer',int32 'used') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.PrintComplete
.method hidebysig public static void 'Print'(char* 'buffer') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(char* 'buffer',int32 'length') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(bool 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(char 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(unsigned int8 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(int32 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(unsigned int32 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(int64 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Print'(unsigned int64 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Print
.method hidebysig public static void 'Break'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.Break
.method hidebysig public static void 'WalkStack'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DebugService.WalkStack
.method hidebysig public static bool 'IsDebuggerPresent'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DebugService.IsDebuggerPresent
.method hidebysig public static unsigned int64 'ReadPerfCounter'(unsigned int32 'which') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int64 't0')
ldc.i4 0
conv.u8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DebugService.ReadPerfCounter
.method hidebysig public static bool 'WritePerfCounter'(unsigned int32 'which',unsigned int64 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DebugService.WritePerfCounter
.method hidebysig public static bool 'AddToPerfCounter'(unsigned int32 'which',unsigned int64 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DebugService.AddToPerfCounter
} // end of struct Microsoft.Singularity.V1.Services.DebugService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'DeviceService'
	extends [Corlib]System.ValueType
{
.method hidebysig public static unsigned int32 'GetPnpSignature'(int32 'index',char* 'output',unsigned int32 'maxout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetPnpSignature
.method hidebysig public static bool 'GetPciPort'([out] value class 'Microsoft.Singularity.V1.Services.PciPortHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetPciPort
.method hidebysig public static int32 'GetIrqCount'(unsigned int8 'line') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetIrqCount
.method hidebysig public static unsigned int32 'GetDynamicIoRangeCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDynamicIoRangeCount
.method hidebysig public static bool 'GetDynamicIoPortRange'(unsigned int32 'range',[out] unsigned int16& 'port',[out] unsigned int16& 'size',[out] bool& 'readable',[out] bool& 'writable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDynamicIoPortRange
.method hidebysig public static bool 'GetDynamicIoMemoryRange'(unsigned int32 'range',[out] unsigned int8*& 'data',[out] unsigned int32& 'size',[out] bool& 'readable',[out] bool& 'writable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDynamicIoMemoryRange
.method hidebysig public static bool 'GetDynamicIoIrqRange'(unsigned int32 'range',[out] unsigned int8& 'line',[out] unsigned int8& 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDynamicIoIrqRange
.method hidebysig public static bool 'GetDynamicIoDmaRange'(unsigned int32 'range',[out] unsigned int8& 'channel',[out] unsigned int8& 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDynamicIoDmaRange
.method hidebysig public static unsigned int32 'GetFixedIoRangeCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetFixedIoRangeCount
.method hidebysig public static bool 'GetFixedIoPortRange'(unsigned int32 'range',[out] unsigned int16& 'port',[out] unsigned int16& 'size',[out] bool& 'readable',[out] bool& 'writable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetFixedIoPortRange
.method hidebysig public static bool 'GetFixedIoMemoryRange'(unsigned int32 'range',[out] unsigned int8*& 'data',[out] unsigned int32& 'size',[out] bool& 'readable',[out] bool& 'writable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetFixedIoMemoryRange
.method hidebysig public static bool 'GetFixedIoIrqRange'(unsigned int32 'range',[out] unsigned int8& 'line',[out] unsigned int8& 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetFixedIoIrqRange
.method hidebysig public static bool 'GetFixedIoDmaRange'(unsigned int32 'range',[out] unsigned int8& 'channel',[out] unsigned int8& 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetFixedIoDmaRange
.method hidebysig public static native unsigned int 'MapPhysicalRange'(native unsigned int 'physStart',native unsigned int 'numBytes',bool 'readable',bool 'writable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.MapPhysicalRange
.method hidebysig public static void 'UnmapPhysicalRange'(native unsigned int 'startAddr',native unsigned int 'limitAddr') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DeviceService.UnmapPhysicalRange
.method hidebysig public static bool 'GetDmaPhysicalAddress'(native unsigned int 'virtualAddr',[out] native unsigned int& 'physicalAddr',[out] native unsigned int& 'physicalRemaining') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DeviceService.GetDmaPhysicalAddress
} // end of struct Microsoft.Singularity.V1.Services.DeviceService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'PciPortHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'CreateImpl'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle'* 'h') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.CreateImpl
.method hidebysig public static bool 'Dispose'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Dispose
.method hidebysig public static bool 'Read8Impl'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int8* 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Read8Impl
.method hidebysig public static bool 'Read16Impl'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int16* 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Read16Impl
.method hidebysig public static bool 'Read32Impl'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int32* 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Read32Impl
.method hidebysig public static bool 'Write8'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int8 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Write8
.method hidebysig public static bool 'Write16'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int16 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Write16
.method hidebysig public static bool 'Write32'(value class 'Microsoft.Singularity.V1.Services.PciPortHandle' 'h',int32 'offset',unsigned int32 'value') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PciPortHandle.Write32
} // end of struct Microsoft.Singularity.V1.Services.PciPortHandle
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'PageTableService'
	extends [Corlib]System.ValueType
{
.field public int32 'id'
.method hidebysig public static unsigned int32* 'GetPageTable'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.GetPageTable
.method hidebysig public static unsigned int32 'GetProcessTag'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.GetProcessTag
.method hidebysig public static native unsigned int 'Allocate'(native unsigned int 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Allocate
.method hidebysig public static native unsigned int 'AllocateExtend'(native unsigned int 'addr',native unsigned int 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.AllocateExtend
.method hidebysig public static void 'Free'(native unsigned int 'addr',native unsigned int 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Free
.method hidebysig public static native unsigned int 'AllocateIOMemory'(native unsigned int 'limit',native unsigned int 'bytes',native unsigned int 'alignment') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.AllocateIOMemory
.method hidebysig public static void 'FreeIOMemory'(native unsigned int 'addr',native unsigned int 'bytes') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PageTableService.FreeIOMemory
.method hidebysig public static bool 'Query'(native unsigned int 'queryAddr',[out] native unsigned int& 'regionAddr',[out] native unsigned int& 'regionSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Query
.method hidebysig public static void 'GetUsageStatistics'([out] unsigned int64& 'allocatedCount',[out] unsigned int64& 'allocatedBytes',[out] unsigned int64& 'freedCount',[out] unsigned int64& 'freedBytes') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PageTableService.GetUsageStatistics
.method hidebysig public static unsigned int32 'GetPageCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.GetPageCount
.method hidebysig public static unsigned int32 'GetBaseAddress'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.GetBaseAddress
.method hidebysig public static unsigned int32 'Allocate'(unsigned int32 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Allocate
.method hidebysig public static unsigned int32 'AllocateExtend'(unsigned int32 'addr',unsigned int32 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.AllocateExtend
.method hidebysig public static void 'Free'(unsigned int32 'addr',unsigned int32 'numPages') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Free
.method hidebysig public static unsigned int32 'AllocateIOMemory'(unsigned int32 'limit',unsigned int32 'bytes',unsigned int32 'alignment') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.AllocateIOMemory
.method hidebysig public static void 'FreeIOMemory'(unsigned int32 'addr',unsigned int32 'bytes') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PageTableService.FreeIOMemory
.method hidebysig public static bool 'Query'(unsigned int32 'queryAddr',[out] unsigned int32& 'regionAddr',[out] unsigned int32& 'regionSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PageTableService.Query
} // end of struct Microsoft.Singularity.V1.Services.PageTableService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'PlatformService'
	extends [Corlib]System.ValueType
{
.method hidebysig public static bool 'DisableInterrupts'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PlatformService.DisableInterrupts
.method hidebysig public static void 'RestoreInterrupts'(bool 'enabled') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PlatformService.RestoreInterrupts
.method hidebysig public static bool 'InterruptsDisabled'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PlatformService.InterruptsDisabled
.method hidebysig public static void 'CleanAndInvalidateDCache'(native unsigned int 'addr',native unsigned int 'length') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PlatformService.CleanAndInvalidateDCache
.method hidebysig public static void 'InvalidateDCache'(native unsigned int 'addr',native unsigned int 'length') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PlatformService.InvalidateDCache
.method hidebysig public static void 'SetCacheAttributes'(native unsigned int 'addr',native unsigned int 'length',bool 'cacheable',bool 'bufferable') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.PlatformService.SetCacheAttributes
.method hidebysig public static int32 'GetProcessorContextOffset'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PlatformService.GetProcessorContextOffset
.method hidebysig public static int32 'GetThreadContextOffset'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.PlatformService.GetThreadContextOffset
} // end of struct Microsoft.Singularity.V1.Services.PlatformService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'LogEntry'
	extends [Corlib]System.ValueType
{
} // end of struct Microsoft.Singularity.V1.Services.LogEntry
.class public auto ansi serializable sealed 'ParameterCode' extends [Corlib]System.Enum
{
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' Success = int32(0)
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' OutOfRange = int32(1)
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' NotSet = int32(2)
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' Retrieved = int32(3)
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' AlreadySet = int32(4)
.field public static literal valuetype 'Microsoft.Singularity.V1.Services.ParameterCode' Undefined = int32(5)
.field public rtspecialname specialname int32 value__
} // end of enumeration Microsoft.Singularity.V1.Services.ParameterCode
.class public sealed 'ProcessService'
	extends [Corlib]System.ValueType
{
.field public int32 'id'
.method hidebysig public static void 'Stop'(int32 'exitCode') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.Stop
.method hidebysig public static value class [Corlib]System.TimeSpan 'GetUpTime'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class [Corlib]System.TimeSpan 't0')
.locals init ([1]value class [Corlib]System.TimeSpan 't1')
ldloca 1 // t1
initobj value class [Corlib]System.TimeSpan
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetUpTime
.method hidebysig public static value class [Corlib]System.DateTime 'GetUtcTime'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class [Corlib]System.DateTime 't0')
.locals init ([1]value class [Corlib]System.DateTime 't1')
ldloca 1 // t1
initobj value class [Corlib]System.DateTime
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetUtcTime
.method hidebysig public static int32 'GetCpuCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetCpuCount
.method hidebysig public static int64 'GetCycleCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetCycleCount
.method hidebysig public static int64 'GetContextSwitchCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetContextSwitchCount
.method hidebysig public static int64 'GetKernelGcCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetKernelGcCount
.method hidebysig public static int64 'GetKernelBootCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetKernelBootCount
.method hidebysig public static int64 'GetKernelInterruptCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetKernelInterruptCount
.method hidebysig public static int64 'GetCyclesPerSecond'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetCyclesPerSecond
.method hidebysig public static unsigned int16 'GetCurrentProcessId'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int16 't0')
ldc.i4 0
conv.u2
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetCurrentProcessId
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'GetNamespaceEndpoint'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetNamespaceEndpoint
.method hidebysig public static value class [Corlib]System.TimeSpan 'GetThreadTime'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class [Corlib]System.TimeSpan 't0')
.locals init ([1]value class [Corlib]System.TimeSpan 't1')
ldloca 1 // t1
initobj value class [Corlib]System.TimeSpan
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetThreadTime
.method hidebysig public static int64 'GetThreadsCreatedCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetThreadsCreatedCount
.method hidebysig public static int32 'GetStartupEndpointCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupEndpointCount
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'GetStartupEndpoint'(int32 'arg') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupEndpoint
.method hidebysig public static void 'SetStartupEndpoint'(int32 'arg',value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'ep') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.SetStartupEndpoint
.method hidebysig public static int32 'GetStartupArgCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupArgCount
.method hidebysig public static int32 'GetStartupArg'(int32 'arg',char* 'output',int32 'maxout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupArg
.method hidebysig public static int64 'GetStorageHandle'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int64 't0')
ldc.i4 0
conv.i8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStorageHandle
.method hidebysig public static bool 'GetSharedSourceHandles'(unsigned int32 'infoId',[out] native unsigned int& 'storageHandle',[out] native unsigned int& 'sourceHandle',[out] native unsigned int& 'eventTypeHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetSharedSourceHandles
.method hidebysig public static void 'SetGcPerformanceCounters'(value class [Corlib]System.TimeSpan 'spent',int64 'bytes') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.SetGcPerformanceCounters
.method hidebysig public static void 'Waypoint0'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.Waypoint0
.method hidebysig public static void 'Waypoint'(int32 'num') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.Waypoint
.method hidebysig public static void 'WaypointDone'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.WaypointDone
.method hidebysig public static void 'WaypointDump'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.ProcessService.WaypointDump
.method hidebysig public static int32 'GetStartupBoolArgCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupBoolArgCount
.method hidebysig public static int32 'GetStartupLongArgCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupLongArgCount
.method hidebysig public static int32 'GetStartupStringArgCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupStringArgCount
.method hidebysig public static int32 'GetStartupStringArrayArgCount'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupStringArrayArgCount
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'GetStartupBoolArg'(int32 'index',[out] bool& 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupBoolArg
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'GetStartupLongArg'(int32 'index',[out] int64& 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupLongArg
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'GetStartupStringArg'(int32 'arg',char* 'output',int32& 'inoutlength') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupStringArg
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.ParameterCode' 'GetStartupStringArrayArg'(int32 'index',char* 'args',int32* 'argLengths',[out] int32& 'arrayLength',[out] int32& 'totalCharCount') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.ParameterCode' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.ProcessService.GetStartupStringArrayArg
} // end of struct Microsoft.Singularity.V1.Services.ProcessService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'SharedHeapService'
	extends [Corlib]System.ValueType
{
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
.class nested public sealed 'Allocation'
	extends [Corlib]System.ValueType
{
} // end of struct Microsoft.Singularity.V1.Services.SharedHeapService.Allocation
.class nested public sealed 'AllocationOwnerId'
	extends [Corlib]System.ValueType
{
} // end of struct Microsoft.Singularity.V1.Services.SharedHeapService.AllocationOwnerId
.method hidebysig public static native unsigned int 'GetData'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.GetData
.method hidebysig public static native unsigned int 'GetSize'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.GetSize
.method hidebysig public static native unsigned int 'GetType'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.GetType
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'Allocate'(native unsigned int 'size',value class 'Microsoft.Singularity.V1.Types.SystemType' 'type',unsigned int32 'alignment') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.Allocate
.method hidebysig public static bool 'Free'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.Free
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'Share'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation',native unsigned int 'startOffset',native unsigned int 'endOffset') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.Share
.method hidebysig public static value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'Split'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation',native unsigned int 'offset') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.Split
.method hidebysig public static void 'Truncate'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'allocation',native unsigned int 'offset') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.SharedHeapService.Truncate
} // end of struct Microsoft.Singularity.V1.Services.SharedHeapService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'StackService'
	extends [Corlib]System.ValueType
{
.field private int32 'id'
.method hidebysig public static void 'GetUnlinkStackRange'([out] unsigned int64& 'unlinkBegin',[out] unsigned int64& 'unlinkLimit') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.StackService.GetUnlinkStackRange
.method hidebysig public static void 'WalkStack'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.StackService.WalkStack
.method hidebysig public static void 'GetUsageStatistics'([out] unsigned int64& 'gets',[out] unsigned int64& 'returns') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.StackService.GetUsageStatistics
.method hidebysig public static void 'StackOverflow'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.StackService.StackOverflow
.method hidebysig public static native unsigned int 'AllocateStackSegment'(native unsigned int 'growSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.StackService.AllocateStackSegment
.method hidebysig public static void 'FreeStackSegment'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.StackService.FreeStackSegment
} // end of struct Microsoft.Singularity.V1.Services.StackService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'MemoryInfoService'
	extends [Corlib]System.ValueType
{
.method hidebysig public static int32 'MemoryUsageInfo'(unsigned int64* 'totalMemoryFree',unsigned int64* 'totalMemoryInUse',unsigned int64* 'kernelHeapInUse',unsigned int64* 'kernelStackInUse',unsigned int64* 'totalSIPHeapInUse',unsigned int64* 'totalSIPStackInUse',unsigned int64* 'kernelStackReservation',unsigned int64* 'kernelHeapReservation') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.MemoryInfoService.MemoryUsageInfo
.method hidebysig public static int32 'MemoryUsageInfo'([out] unsigned int64& 'totalMemoryFree',[out] unsigned int64& 'totalMemoryInUse',[out] unsigned int64& 'kernelHeapInUse',[out] unsigned int64& 'kernelStackInUse',[out] unsigned int64& 'totalSIPHeapInUse',[out] unsigned int64& 'totalSIPStackInUse',[out] unsigned int64& 'kernelStackReservation',[out] unsigned int64& 'kernelHeapReservation') {
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.MemoryInfoService.MemoryUsageInfo
} // end of struct Microsoft.Singularity.V1.Services.MemoryInfoService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Services {
.class public sealed 'DiagnosisService'
	extends [Corlib]System.ValueType
{
.method hidebysig public static int32 'GCProfileSettings'(unsigned int64* 'defaultMemorySize',unsigned int64* 'Options') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.GCProfileSettings
.method hidebysig public static int32 'GCProfileSettingsImpl'([out] unsigned int64& 'defaultMemorySize',[out] unsigned int64& 'Options') {
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.GCProfileSettingsImpl
.method hidebysig public static bool 'RegisterEventingController'(native unsigned int 'controllerHandle',native unsigned int 'executionContextHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEventingController
.method hidebysig public static bool 'DebugPrintLogEntry'(native unsigned int 'controllerHandle',native unsigned int 'entryHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.DebugPrintLogEntry
.method hidebysig public static bool 'TestKernelStorage'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.TestKernelStorage
.method hidebysig public static native unsigned int 'OpenGlobalStorage'(native unsigned int 'storageId') {
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.OpenGlobalStorage
.method hidebysig public static void 'CloseGlobalStorage'(native unsigned int 'storageHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.CloseGlobalStorage
.method hidebysig public static native unsigned int 'LogSourceEntry'(native unsigned int 'sourceHandle',unsigned int32 'flags',native unsigned int 'eventType',unsigned int8* 'buffer',int32 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.LogSourceEntry
.method hidebysig public static native unsigned int 'LogSourceEntry'(native unsigned int 'sourceHandle',unsigned int32 'flags',native unsigned int 'eventType',unsigned int8* 'buffer',int32 'size',int32 'stringsCount',void** 'strings') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.LogSourceEntry
.method hidebysig public static native unsigned int 'CreateQueryView'(native unsigned int 'storageHandle',bool 'forward') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.CreateQueryView
.method hidebysig public static void 'DeleteQueryView'(native unsigned int 'storageHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.DeleteQueryView
.method hidebysig public static native unsigned int 'GetNextEntry'(native unsigned int 'queryHandle',native unsigned int* 'type',unsigned int32* 'userOffset',unsigned int8* 'buffer',unsigned int16 'bufferSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.GetNextEntry
.method hidebysig public static bool 'RegisterEvent'(char* 'eventName',char* 'eventDescription',native unsigned int* 'eventHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEvent
.method hidebysig public static bool 'RegisterEventField'(native unsigned int 'eventHandle',char* 'fieldName',unsigned int16 'offset',unsigned int16 'type') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEventField
.method hidebysig public static bool 'RegisterEventGenericField'(native unsigned int 'eventHandle',char* 'fieldName',unsigned int16 'offset',unsigned int16 'size',native unsigned int 'fieldTypeHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEventGenericField
.method hidebysig public static bool 'RegisterEnum'(char* 'enumName',unsigned int16 'type',native unsigned int* 'eventHandle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEnum
.method hidebysig public static bool 'RegisterEnumValue'(native unsigned int 'eventHandle',char* 'valueName',unsigned int64 'value',unsigned int8 'flagChar') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.RegisterEnumValue
.method hidebysig public static native unsigned int 'WalkEventDescriptor'(native unsigned int 'eventHandle',native unsigned int 'currentField',unsigned int16* 'offset',unsigned int16* 'type',char* 'bufferName',unsigned int16 'bufferSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.WalkEventDescriptor
.method hidebysig public static bool 'GetSourceInformation'(native unsigned int 'sourceHandle',native unsigned int* 'storageHandle',native unsigned int* 'eventType',unsigned int16* 'count',char* 'bufferName',unsigned int16 'bufferSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.GetSourceInformation
.method hidebysig public static int32 'QuerySourcesList'(native unsigned int* 'buffer',int32 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.QuerySourcesList
.method hidebysig public static int32 'QueryEventTypeList'(native unsigned int* 'buffer',int32 'size') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.QueryEventTypeList
.method hidebysig public static bool 'ReadActiveSourceItem'(native unsigned int 'sourceHandle',int32 'item',native unsigned int* 'type',unsigned int8* 'buffer',unsigned int16 'bufferSize') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Services.DiagnosisService.ReadActiveSourceItem
} // end of struct Microsoft.Singularity.V1.Services.DiagnosisService
} // end of namespace Microsoft.Singularity.V1.Services
.namespace Microsoft.Singularity.V1.Stress {
.class public sealed 'StressDirect'
	extends [Corlib]System.ValueType
{
.method hidebysig static public unsigned int32 'KPTest'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'sharedArgs',int32 'i') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int32 't0')
ldc.i4 0
conv.u4
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Stress.StressDirect.KPTest
} // end of struct Microsoft.Singularity.V1.Stress.StressDirect
} // end of namespace Microsoft.Singularity.V1.Stress
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'AutoResetEventHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(bool 'initialState',[out] value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.Create
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.Dispose
.method hidebysig public static bool 'Reset'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.Reset
.method hidebysig public static bool 'Set'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.Set
.method hidebysig public static bool 'SetAll'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.SetAll
.method hidebysig public static bool 'SetNoGC'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.AutoResetEventHandle.SetNoGC
} // end of struct Microsoft.Singularity.V1.Threads.AutoResetEventHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'ContainerHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'([out] value class 'Microsoft.Singularity.V1.Threads.ContainerHandle'& 'container') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ContainerHandle.Create
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.ContainerHandle' 'container') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ContainerHandle.Dispose
} // end of struct Microsoft.Singularity.V1.Threads.ContainerHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'InterruptHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(unsigned int8 'irq',[out] value class 'Microsoft.Singularity.V1.Threads.InterruptHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.Create
.method hidebysig public static bool 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.InterruptHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.Dispose
.method hidebysig public static bool 'Wait'(value class 'Microsoft.Singularity.V1.Threads.InterruptHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.Wait
.method hidebysig public static void 'Pulse'(value class 'Microsoft.Singularity.V1.Threads.InterruptHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.Pulse
.method hidebysig public static bool 'Ack'(value class 'Microsoft.Singularity.V1.Threads.InterruptHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.Ack
.method hidebysig public static bool 'DisableInterrupts'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.DisableInterrupts
.method hidebysig public static void 'RestoreInterrupts'(bool 'enabled') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.RestoreInterrupts
.method hidebysig public static bool 'InterruptsDisabled'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.InterruptHandle.InterruptsDisabled
} // end of struct Microsoft.Singularity.V1.Threads.InterruptHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'ManualResetEventHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(bool 'initialState',[out] value class 'Microsoft.Singularity.V1.Threads.ManualResetEventHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ManualResetEventHandle.Create
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.ManualResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ManualResetEventHandle.Dispose
.method hidebysig public static bool 'Reset'(value class 'Microsoft.Singularity.V1.Threads.ManualResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ManualResetEventHandle.Reset
.method hidebysig public static bool 'Set'(value class 'Microsoft.Singularity.V1.Threads.ManualResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ManualResetEventHandle.Set
} // end of struct Microsoft.Singularity.V1.Threads.ManualResetEventHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'MutexHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(bool 'initiallyOwned',[out] value class 'Microsoft.Singularity.V1.Threads.MutexHandle'& 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.MutexHandle.Create
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.MutexHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.MutexHandle.Dispose
.method hidebysig public static void 'Release'(value class 'Microsoft.Singularity.V1.Threads.MutexHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.MutexHandle.Release
.method hidebysig public static bool 'IsOwnedByCurrentThread'(value class 'Microsoft.Singularity.V1.Threads.MutexHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.MutexHandle.IsOwnedByCurrentThread
} // end of struct Microsoft.Singularity.V1.Threads.MutexHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'SyncHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig specialname public static value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'op_Implicit'(value class 'Microsoft.Singularity.V1.Threads.MutexHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Threads.SyncHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.op_Implicit
.method hidebysig specialname public static value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'op_Implicit'(value class 'Microsoft.Singularity.V1.Threads.AutoResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Threads.SyncHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.op_Implicit
.method hidebysig specialname public static value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'op_Implicit'(value class 'Microsoft.Singularity.V1.Threads.ManualResetEventHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Threads.SyncHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.op_Implicit
.method hidebysig public static bool 'WaitOne'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitOne
.method hidebysig public static bool 'WaitOne'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'handle',value class [Corlib]System.TimeSpan 'timeout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitOne
.method hidebysig public static bool 'WaitOne'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'handle',value class [Corlib]System.SchedulerTime 'stop') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitOne
.method hidebysig public static bool 'WaitOneNoGC'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle' 'handle') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitOneNoGC
.method hidebysig public static int32 'WaitAny'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle'* 'handles',int32 'handleCount') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitAny
.method hidebysig public static int32 'WaitAny'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle'* 'handles',int32 'handleCount',value class [Corlib]System.TimeSpan 'timeout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitAny
.method hidebysig public static int32 'WaitAny'(value class 'Microsoft.Singularity.V1.Threads.SyncHandle'* 'handles',int32 'handleCount',value class [Corlib]System.SchedulerTime 'stop') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.SyncHandle.WaitAny
} // end of struct Microsoft.Singularity.V1.Threads.SyncHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public sealed 'ThreadHandle'
	extends [Corlib]System.ValueType
{
.field public native unsigned int 'id'
.method hidebysig public static bool 'Create'(int32 'threadIndex',value class 'Microsoft.Singularity.V1.Threads.ContainerHandle' 'container',[out] value class 'Microsoft.Singularity.V1.Threads.ThreadHandle'& 'thread',[out] native unsigned int& 'threadContext') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Create
.method hidebysig public static void 'Dispose'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Dispose
.method hidebysig public static void 'Start'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Start
.method hidebysig public static value class 'Microsoft.Singularity.V1.Threads.ThreadState' 'GetThreadState'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.ThreadState' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.GetThreadState
.method hidebysig public static value class [Corlib]System.TimeSpan 'GetExecutionTime'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class [Corlib]System.TimeSpan 't0')
.locals init ([1]value class [Corlib]System.TimeSpan 't1')
ldloca 1 // t1
initobj value class [Corlib]System.TimeSpan
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.GetExecutionTime
.method hidebysig public static int32 'GetAffinity'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.GetAffinity
.method hidebysig public static void 'SetAffinity'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread',int32 'val') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.SetAffinity
.method hidebysig public static bool 'Join'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Join
.method hidebysig public static bool 'Join'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread',value class [Corlib]System.TimeSpan 'timeout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Join
.method hidebysig public static bool 'Join'(value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'thread',value class [Corlib]System.SchedulerTime 'stop') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Join
.method hidebysig public static value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 'CurrentThread'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Threads.ThreadHandle' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Threads.ThreadHandle'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.CurrentThread
.method hidebysig public static native unsigned int 'GetThreadLocalValue'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.GetThreadLocalValue
.method hidebysig public static void 'SetThreadLocalValue'(native unsigned int 'value') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.SetThreadLocalValue
.method hidebysig public static void 'Sleep'(value class [Corlib]System.TimeSpan 'timeout') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Sleep
.method hidebysig public static void 'Sleep'(value class [Corlib]System.SchedulerTime 'stop') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Sleep
.method hidebysig public static void 'Yield'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.Yield
.method hidebysig public static void 'SpinWait'(int32 'iterations') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.V1.Threads.ThreadHandle.SpinWait
} // end of struct Microsoft.Singularity.V1.Threads.ThreadHandle
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Threads {
.class public auto ansi serializable sealed 'ThreadState' extends [Corlib]System.Enum
{
.custom instance void [Corlib]System.FlagsAttribute::.ctor() = ( 01 00 00 00 )
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Undefined = int32(0)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Running = int32(1)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Unstarted = int32(2)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Stopped = int32(4)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Suspended = int32(8)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Blocked = int32(16)
.field public static literal valuetype 'Microsoft.Singularity.V1.Threads.ThreadState' Runnable = int32(32)
.field public rtspecialname specialname int32 value__
} // end of enumeration Microsoft.Singularity.V1.Threads.ThreadState
} // end of namespace Microsoft.Singularity.V1.Threads
.namespace Microsoft.Singularity.V1.Types {
.class public sealed 'SystemType'
	extends [Corlib]System.ValueType
{
.custom instance void [Corlib]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 01
 00 00 )
.field private native unsigned int 'id'
.method hidebysig public static value class 'Microsoft.Singularity.V1.Types.SystemType' 'RootSystemType'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Types.SystemType' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Types.SystemType' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Types.SystemType'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.RootSystemType
.method hidebysig public static value class 'Microsoft.Singularity.V1.Types.SystemType' 'Register'(char* 'name',int32 'nameLength',int64 'lowerHash',int64 'upperHash',value class 'Microsoft.Singularity.V1.Types.SystemType' 'parent') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]value class 'Microsoft.Singularity.V1.Types.SystemType' 't0')
.locals init ([1]value class 'Microsoft.Singularity.V1.Types.SystemType' 't1')
ldloca 1 // t1
initobj value class 'Microsoft.Singularity.V1.Types.SystemType'
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.Register
.method hidebysig public static bool 'IsSubtype'(value class 'Microsoft.Singularity.V1.Types.SystemType' 'child',value class 'Microsoft.Singularity.V1.Types.SystemType' 'parent') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.IsSubtype
.method hidebysig public static bool 'IsSubtype'(value class 'Microsoft.Singularity.V1.Services.SharedHeapService'/'Allocation'* 'childData',value class 'Microsoft.Singularity.V1.Types.SystemType' 'parent') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.IsSubtype
.method hidebysig public static bool 'IsNull'(value class 'Microsoft.Singularity.V1.Types.SystemType' 'st') {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.IsNull
.property instance native unsigned int TypeId() {
.get instance native unsigned int 'Microsoft.Singularity.V1.Types.SystemType'::'get_TypeId'()
} // end of property Microsoft.Singularity.V1.Types.SystemType.TypeId
.method hidebysig specialname public instance native unsigned int 'get_TypeId'() {
.custom instance void [Corlib]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]native unsigned int 't0')
.locals init ([1]native unsigned int 't1')
ldloca 1 // t1
initobj native unsigned int
ldloc 1 // t1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.V1.Types.SystemType.get_TypeId
} // end of struct Microsoft.Singularity.V1.Types.SystemType
} // end of namespace Microsoft.Singularity.V1.Types
