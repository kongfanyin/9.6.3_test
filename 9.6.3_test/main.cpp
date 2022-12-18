#define _CRT_SECURE_NO_WARNINGS 1

#include<new>
#include<iostream>
#include"chaff.h"
char buffer1[50];
char buffer2[100];
int main(char argc, char** argv)
{
	int* pi = new int;
	//int* pi=new(sizeof(int))
	int* pa = new int[40];
	//int*pa=new(40*sizeof(int))


	chaff  *p1,*p2;
	int* p3,*p4;

	 p1 = new (buffer1) chaff[2];//定位new运算符
	 Setchaff(p1);
	 p2 = new chaff;
	 p3 = new(buffer2) int[20];//定位new运算符
	 p4 = new int[20];

	 delete[] p1;

	return 0;
}