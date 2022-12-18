#define _CRT_SECURE_NO_WARNINGS 1

#include<new>
#include<iostream>
#include"chaff.h"
char buffer1;
char buffer2;
int main(char argc, char** argv)
{
	int* pi = new int[];
	//int* pi=new(sizeof(int))
	int* pa = new int[40];
	//int*pa=new(40*sizeof(int))

	chaff* psc = new (buffer1)[20 * chaff];



	return 0;
}