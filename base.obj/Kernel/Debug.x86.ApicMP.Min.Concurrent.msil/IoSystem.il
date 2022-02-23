.assembly extern 'kernel' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'IoSystem' {
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
.namespace Microsoft.Singularity.Io {
.class public sealed 'IoIrq'
	extends [kernel]System.Object
{
.method hidebysig public static void 'SignalInterrupt'(unsigned int8 'irq') {
.custom instance void [kernel]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoIrq.SignalInterrupt
.method hidebysig specialname rtspecialname public void .ctor(unsigned int8 'irq') {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Io.IoIrq.IoIrq
.property instance unsigned int8 Irq() {
.get instance unsigned int8 'Microsoft.Singularity.Io.IoIrq'::'get_Irq'()
} // end of property Microsoft.Singularity.Io.IoIrq.Irq
.method hidebysig specialname public instance unsigned int8 'get_Irq'() {
.custom instance void [kernel]System.Runtime.CompilerServices.NoHeapAllocationAttribute::.ctor() = ( 01 00 00 00 )
.locals init ([0]unsigned int8 't0')
ldc.i4 0
conv.u1
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.get_Irq
.method hidebysig public instance bool 'RegisterInterrupt'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.RegisterInterrupt
.method hidebysig public instance bool 'ReleaseInterrupt'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.ReleaseInterrupt
.method hidebysig public instance bool 'WaitForInterrupt'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.WaitForInterrupt
.method hidebysig public instance bool 'WaitForInterrupt'(value class [kernel]System.TimeSpan 'timeout') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.WaitForInterrupt
.method hidebysig public instance void 'Pulse'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoIrq.Pulse
.method hidebysig public instance bool 'AckInterrupt'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.AckInterrupt
.method hidebysig public virtual instance string 'ToString'() {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoIrq.ToString
} // end of class Microsoft.Singularity.Io.IoIrq
} // end of namespace Microsoft.Singularity.Io
.namespace Microsoft.Singularity.Io {
.class public interface abstract 'IDevice'
{
.method hidebysig public abstract virtual instance void 'Initialize'() {
} // end of method Microsoft.Singularity.Io.IDevice.Initialize
.method hidebysig public abstract virtual instance void 'Finalize'() {
} // end of method Microsoft.Singularity.Io.IDevice.Finalize
} // end of interface Microsoft.Singularity.Io.IDevice
.class public sealed 'IoDeviceCreate'
	extends [kernel]System.MulticastDelegate
{
.method hidebysig public virtual instance class 'Microsoft.Singularity.Io.IDevice' 'Invoke'(class [kernel]'Microsoft.Singularity.Io.IoConfig' 'config',string 'instanceName') runtime managed {
} // end of method Microsoft.Singularity.Io.IoDeviceCreate.Invoke
.method hidebysig public instance void .ctor(object 'object',native int 'method') runtime managed {
} // end of method Microsoft.Singularity.Io.IoDeviceCreate.IoDeviceCreate
} // end of delegate Microsoft.Singularity.Io.IoDeviceCreate
.class public 'IoSystem'
	extends [kernel]System.Object
{
.method hidebysig public static void 'Initialize'(class [kernel]'Microsoft.Singularity.Xml.XmlNode' 'config') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.Initialize
.method hidebysig newslot public static void 'Finalize'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.Finalize
.method hidebysig public static bool 'RegisterKernelDriver'(class [kernel]System.Type 'type',class 'Microsoft.Singularity.Io.IoDeviceCreate' 'creator') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoSystem.RegisterKernelDriver
.method hidebysig public static bool 'AddDevicesToTree'(class [kernel]System.Collections.SortedList 'found',string 'busLocation',bool 'associate') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoSystem.AddDevicesToTree
.method hidebysig public static void 'RegisterDrivers'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.RegisterDrivers
.method hidebysig public static void 'ActivateDrivers'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.ActivateDrivers
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoConfig' 'YieldResources'(string 'signature',class [kernel]System.Type 'type') {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoConfig' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoSystem.YieldResources
.method hidebysig public static void 'Dump'(bool 'detailed') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.Dump
.method hidebysig public static void 'InitializeDirectoryService'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.InitializeDirectoryService
.method hidebysig public static void 'InitializeVolumeManager'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.InitializeVolumeManager
.method hidebysig public static void 'InitializeServiceManager'(class [kernel]'Microsoft.Singularity.Xml.XmlNode' 'config') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.IoSystem.InitializeServiceManager
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoMemory' 'FindFileImage'(string 'command') {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoMemory' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoSystem.FindFileImage
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoMemory' 'FindFileImage'(string 'command',value class [kernel]'Microsoft.Singularity.Memory.SharedHeap'/'Allocation'* 'ep') {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoMemory' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.IoSystem.FindFileImage
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Io.IoSystem.IoSystem
} // end of class Microsoft.Singularity.Io.IoSystem
} // end of namespace Microsoft.Singularity.Io
