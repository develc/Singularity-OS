.assembly extern 'kernel' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'Loader' {
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
.namespace Microsoft.Singularity.Loader {
.class public 'Binder'
	extends [kernel]System.Object
{
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoMemory' 'GetSystemManifest'() {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoMemory' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Binder.GetSystemManifest
.method hidebysig public static void 'Initialize'(class [kernel]'Microsoft.Singularity.Xml.XmlNode' 'config') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Loader.Binder.Initialize
.method hidebysig public static void 'RedirectRootRef'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Loader.Binder.RedirectRootRef
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoMemory' 'LoadImage'(class [kernel]'Microsoft.Singularity.Process' 'parent',string 'application',[out] class 'Microsoft.Singularity.Loader.Manifest'& 'man') {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoMemory' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Binder.LoadImage
.method hidebysig public static class [kernel]'Microsoft.Singularity.Io.IoMemory' 'LoadRawImage'(string 'folderName',string 'exeName') {
.locals init ([0]class [kernel]'Microsoft.Singularity.Io.IoMemory' 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Binder.LoadRawImage
.method hidebysig public static bool 'BindToService'(class [kernel]'Microsoft.Singularity.Process' 'process',value class [kernel]'Microsoft.Singularity.V1.Types.SystemType' 'impType',value class [kernel]'Microsoft.Singularity.V1.Types.SystemType' 'expType',string 'contract',int32 'startState',int32 'index') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Binder.BindToService
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Loader.Binder.Binder
} // end of class Microsoft.Singularity.Loader.Binder
} // end of namespace Microsoft.Singularity.Loader
.namespace Microsoft.Singularity.Loader {
.class public 'Manifest'
	extends [kernel]System.Object
{
.method hidebysig specialname rtspecialname public void .ctor(string 'name',string 'path') {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Loader.Manifest.Manifest
.method hidebysig public instance unsigned int8[] 'Serialize'() {
.locals init ([0]unsigned int8[] 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Manifest.Serialize
.method hidebysig public instance int32 'SetEndpoints'(class [kernel]'Microsoft.Singularity.Process' 'process',string 'action') {
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Manifest.SetEndpoints
.property instance string Name() {
.get instance string 'Microsoft.Singularity.Loader.Manifest'::'get_Name'()
} // end of property Microsoft.Singularity.Loader.Manifest.Name
.method hidebysig specialname public instance string 'get_Name'() {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Manifest.get_Name
.property instance string Path() {
.get instance string 'Microsoft.Singularity.Loader.Manifest'::'get_Path'()
} // end of property Microsoft.Singularity.Loader.Manifest.Path
.method hidebysig specialname public instance string 'get_Path'() {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Manifest.get_Path
.method hidebysig public instance bool 'GetParameterCounts'(string 'action',[out] int32& 'boolCount',[out] int32& 'longCount',[out] int32& 'stringCount',[out] int32& 'stringArrayCount') {
.locals init ([0]bool 't0')
ldc.i4.0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Loader.Manifest.GetParameterCounts
} // end of class Microsoft.Singularity.Loader.Manifest
} // end of namespace Microsoft.Singularity.Loader
