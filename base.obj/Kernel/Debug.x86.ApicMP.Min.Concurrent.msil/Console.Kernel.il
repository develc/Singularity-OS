.assembly extern 'kernel' {
.ver 1:0:0:0
.publickeytoken = ( 73 64 40 c9 b4 14 ea 16 )
}
.assembly 'Console.Kernel' {
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
.namespace Microsoft.Singularity.Io {
.class public 'ConsoleOutput'
	extends [kernel]System.Object
{
.method hidebysig static public void 'Initialize'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleOutput.Initialize
.method hidebysig newslot static public void 'Finalize'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleOutput.Finalize
.method hidebysig public static void 'Write'(string 'value') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleOutput.Write
.method hidebysig public static void 'Write'(char[] 'buffer',int32 'index',int32 'count') {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleOutput.Write
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Io.ConsoleOutput.ConsoleOutput
} // end of class Microsoft.Singularity.Io.ConsoleOutput
} // end of namespace Microsoft.Singularity.Io
.namespace Microsoft.Singularity.Io {
.class public 'ConsoleInput'
	extends [kernel]System.Object
{
.method hidebysig static public void 'Initialize'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleInput.Initialize
.method hidebysig newslot static public void 'Finalize'() {
ret
.maxstack 0
} // end of method Microsoft.Singularity.Io.ConsoleInput.Finalize
.method hidebysig public static string 'ReadLine'() {
.locals init ([0]string 't0')
ldnull
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.ConsoleInput.ReadLine
.method hidebysig public static int32 'ReadChar'() {
.locals init ([0]int32 't0')
ldc.i4 0
stloc 0 // t0
br $1
$1:
ldloc 0 // t0
ret
.maxstack 1
} // end of method Microsoft.Singularity.Io.ConsoleInput.ReadChar
.method hidebysig specialname rtspecialname public void .ctor() {
ret
.maxstack 0
} // end of constructor Microsoft.Singularity.Io.ConsoleInput.ConsoleInput
} // end of class Microsoft.Singularity.Io.ConsoleInput
} // end of namespace Microsoft.Singularity.Io
