// dll_cpp.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "dll_cpp.h"
#include "dll20180918.h"
#include "dll20190904.h"

int __stdcall testAdd(int a, int b) {
	return a + b;
}

int __stdcall testMulti(int a, int b) {
	return a * b;
}

int __stdcall testMinus(int a, int b) {
	return a - b;
}

int __stdcall testDiv(int a, int b) {
	return a / b;
}

int __stdcall testMax(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}





