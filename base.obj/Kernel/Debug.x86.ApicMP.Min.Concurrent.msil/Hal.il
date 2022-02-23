.assembly extern 'kernel' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'Hal' {
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
.namespace Microsoft.Singularity.Hal {
.class public 'HalDevicesFactory'
	extends [kernel]System.Object
{
.custom instance void [kernel]System.CLSCompliantAttribute::.ctor(bool) = ( 01 00
 00
 00 00 )
.method hidebysig public static object 'Initialize'(class [kernel]'Microsoft.Singularity.Processor' 'rootProcessor') {
.locals init ([0]object 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.HalDevicesFactory.Initialize
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.HalDevicesFactory.HalDevicesFactory
} // end of class Microsoft.Singularity.Hal.HalDevicesFactory
} // end of namespace Microsoft.Singularity.Hal
.namespace Microsoft.Singularity.Hal.Acpi {
.class public 'AcpiTables'
	extends [kernel]System.Object
{
.method hidebysig public static void 'Parse'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Hal.Acpi.AcpiTables.Parse
.method hidebysig public static class 'Microsoft.Singularity.Hal.Acpi.AcpiDevice'[] 'LoadDevices'() {
.locals init ([0]class 'Microsoft.Singularity.Hal.Acpi.AcpiDevice'[] 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AcpiTables.LoadDevices
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.AcpiTables.AcpiTables
} // end of class Microsoft.Singularity.Hal.Acpi.AcpiTables
.class public 'AcpiDevice'
	extends [kernel]System.Object
{
.property instance string DeviceId() {
.get instance string 'Microsoft.Singularity.Hal.Acpi.AcpiDevice'::'get_DeviceId'()
} // end of property Microsoft.Singularity.Hal.Acpi.AcpiDevice.DeviceId
.method hidebysig specialname public instance string 'get_DeviceId'() {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AcpiDevice.get_DeviceId
.property instance class 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'[] ResourceDescriptors() {
.get instance class 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'[] 'Microsoft.Singularity.Hal.Acpi.AcpiDevice'::'get_ResourceDescriptors'()
} // end of property Microsoft.Singularity.Hal.Acpi.AcpiDevice.ResourceDescriptors
.method hidebysig specialname public instance class 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'[] 'get_ResourceDescriptors'() {
.locals init ([0]class 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'[] 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AcpiDevice.get_ResourceDescriptors
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.AcpiDevice.AcpiDevice
} // end of class Microsoft.Singularity.Hal.Acpi.AcpiDevice
.class public auto ansi serializable sealed 'ConsumerProducer' extends [kernel]System.Enum
{
.field public static literal valuetype 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' ProducesAndConsumes = int32(0)
.field public static literal valuetype 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' Consumes = int32(1)
.field public rtspecialname specialname int32 value__
} // end of enumeration Microsoft.Singularity.Hal.Acpi.ConsumerProducer
.class public abstract 'ResourceDescriptor'
	extends [kernel]System.Object
{
.method hidebysig specialname rtspecialname void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.ResourceDescriptor.ResourceDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.ResourceDescriptor
.class public 'AddressSpaceDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'
{
.property instance unsigned int64 Minimum() {
.get instance unsigned int64 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'::'get_Minimum'()
} // end of property Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.Minimum
.method hidebysig specialname public instance unsigned int64 'get_Minimum'() {
.locals init ([0]unsigned int64 't0')
ldc.i4 0
conv.u8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.get_Minimum
.property instance unsigned int64 Maximum() {
.get instance unsigned int64 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'::'get_Maximum'()
} // end of property Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.Maximum
.method hidebysig specialname public instance unsigned int64 'get_Maximum'() {
.locals init ([0]unsigned int64 't0')
ldc.i4 0
conv.u8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.get_Maximum
.property instance unsigned int64 Length() {
.get instance unsigned int64 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'::'get_Length'()
} // end of property Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.Length
.method hidebysig specialname public instance unsigned int64 'get_Length'() {
.locals init ([0]unsigned int64 't0')
ldc.i4 0
conv.u8
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.get_Length
.property instance value class 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' ConsumerProducer() {
.get instance value class 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'::'get_ConsumerProducer'()
} // end of property Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.ConsumerProducer
.method hidebysig specialname public instance value class 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' 'get_ConsumerProducer'() {
.locals init ([0]value class 'Microsoft.Singularity.Hal.Acpi.ConsumerProducer' 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.get_ConsumerProducer
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor.AddressSpaceDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor
.class public 'MemoryRangeDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'
{
.property instance bool Writable() {
.get instance bool 'Microsoft.Singularity.Hal.Acpi.MemoryRangeDescriptor'::'get_Writable'()
} // end of property Microsoft.Singularity.Hal.Acpi.MemoryRangeDescriptor.Writable
.method hidebysig specialname public instance bool 'get_Writable'() {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.MemoryRangeDescriptor.get_Writable
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.MemoryRangeDescriptor.MemoryRangeDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.MemoryRangeDescriptor
.class public 'IoRangeDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.AddressSpaceDescriptor'
{
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.IoRangeDescriptor.IoRangeDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.IoRangeDescriptor
.class public 'IrqDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'
{
.property instance int32[] InterruptNumbers() {
.get instance int32[] 'Microsoft.Singularity.Hal.Acpi.IrqDescriptor'::'get_InterruptNumbers'()
} // end of property Microsoft.Singularity.Hal.Acpi.IrqDescriptor.InterruptNumbers
.method hidebysig specialname public instance int32[] 'get_InterruptNumbers'() {
.locals init ([0]int32[] 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.IrqDescriptor.get_InterruptNumbers
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.IrqDescriptor.IrqDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.IrqDescriptor
.class public 'DmaDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'
{
.property instance int32[] DmaChannelNumbers() {
.get instance int32[] 'Microsoft.Singularity.Hal.Acpi.DmaDescriptor'::'get_DmaChannelNumbers'()
} // end of property Microsoft.Singularity.Hal.Acpi.DmaDescriptor.DmaChannelNumbers
.method hidebysig specialname public instance int32[] 'get_DmaChannelNumbers'() {
.locals init ([0]int32[] 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Hal.Acpi.DmaDescriptor.get_DmaChannelNumbers
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.DmaDescriptor.DmaDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.DmaDescriptor
.class public 'GenericRegisterDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'
{
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.GenericRegisterDescriptor.GenericRegisterDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.GenericRegisterDescriptor
.class public 'VendorDefinedDescriptor'
	extends 'Microsoft.Singularity.Hal.Acpi.ResourceDescriptor'
{
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Hal.Acpi.VendorDefinedDescriptor.VendorDefinedDescriptor
} // end of class Microsoft.Singularity.Hal.Acpi.VendorDefinedDescriptor
} // end of namespace Microsoft.Singularity.Hal.Acpi
