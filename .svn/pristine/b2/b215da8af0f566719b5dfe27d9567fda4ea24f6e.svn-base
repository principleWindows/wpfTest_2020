using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace WPFTest
{
    class DllTest
    {
        [DllImport(@"../../../Release/dll_cpp.dll", EntryPoint ="testAdd", SetLastError = true, CharSet = CharSet.Ansi, ExactSpelling = false, CallingConvention = CallingConvention.StdCall)]
        public static extern int testAdd2(int a, int b);

        [DllImport(@"../../../Release/dll_cpp.dll", EntryPoint = "testMulti", SetLastError = true, CharSet = CharSet.Ansi, ExactSpelling = false, CallingConvention = CallingConvention.StdCall)]
        public static extern int testMulti(int a, int b);

        [DllImport(@"dll_cpp.dll", EntryPoint = "testMinus", SetLastError = true, CharSet = CharSet.Ansi, ExactSpelling = false, CallingConvention = CallingConvention.StdCall)]
        public static extern int testMinus(int a, int b);

        [DllImport(@"dll_cpp.dll", EntryPoint = "testMax", SetLastError = true, CharSet = CharSet.Ansi, ExactSpelling = false, CallingConvention = CallingConvention.StdCall)]
        public static extern int testMax(int a, int b);


    }
}
