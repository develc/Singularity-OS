.assembly extern 'kernel' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'Directory' {
.ver 1:0:0:0
//publickey(C:\Users\cc\source\repos\Singularity-OS\base.obj\Kernel\Debug.x86.ApicMP.Min.Concurrent.msil\public.snk)
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
.custom instance void [kernel]System.Reflection.AssemblyVersionAttribute::.ctor(string) = ( 01 00
 07 31 2e 30 2e 30 2e 30
 00 00 )
.custom instance void [kernel]System.Reflection.AssemblyKeyFileAttribute::.ctor(string) = ( 01 00
 0a 70 75 62 6c 69 63 2e 73 6e 6b
 00 00 )
.custom instance void [kernel]System.Reflection.AssemblyDelaySignAttribute::.ctor(bool) = ( 01 00
 01
 00 00 )
}
.namespace Microsoft.Singularity.Directory {
.class public 'DirNode'
	extends [kernel]System.Object
{
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Directory.DirNode.DirNode
} // end of class Microsoft.Singularity.Directory.DirNode
.class public 'DirectoryService'
	extends [kernel]System.Object
{
.method hidebysig public static value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'* 'NewClientEndpointEx'() {
.locals init ([0]value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'* 't0')
ret
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.NewClientEndpointEx
.method hidebysig public static void 'StartUserSpaceDirectoryService'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.StartUserSpaceDirectoryService
.method hidebysig public static bool 'UserSpaceDirectoryServiceStarted'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.UserSpaceDirectoryServiceStarted
.method hidebysig public static void 'InitializeRemoteDirectoryService'(unsigned int32 'type') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.InitializeRemoteDirectoryService
.method hidebysig public static void 'NewRemoteDirectoryEndpoint'([out] value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'*& 'imp',[out] value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'*& 'exp') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.NewRemoteDirectoryEndpoint
.method hidebysig public static void 'ExportArmNamespace'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.ExportArmNamespace
.method hidebysig public static void 'StartRemoteDirectoryEndpoint'(value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'* 'exp') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.StartRemoteDirectoryEndpoint
.method hidebysig public static bool 'CreateDirectory'(class 'Microsoft.Singularity.Directory.DirNode' 'dirNode',string 'path') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.CreateDirectory
.method hidebysig public static bool 'CreateSymbolicLink'(class 'Microsoft.Singularity.Directory.DirNode' 'dirNode',string 'path',string 'link') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.CreateSymbolicLink
.method hidebysig public static class 'Microsoft.Singularity.Directory.DirNode' 'FindDirectory'(string 'dirName',bool 'createIfNull') {
.locals init ([0]class 'Microsoft.Singularity.Directory.DirNode' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.FindDirectory
.method hidebysig public static void 'Initialize'(class [kernel]'Microsoft.Singularity.Xml.XmlNode' 'config') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.Initialize
.method hidebysig public static void 'StartNotificationThread'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Directory.DirectoryService.StartNotificationThread
.method hidebysig public static bool 'RegisterIoMemory'(class 'Microsoft.Singularity.Directory.DirNode' 'node',string 'name',class [kernel]'Microsoft.Singularity.Io.IoMemory' 'ioMem') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Directory.DirectoryService.RegisterIoMemory
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Directory.DirectoryService.DirectoryService
} // end of class Microsoft.Singularity.Directory.DirectoryService
} // end of namespace Microsoft.Singularity.Directory
