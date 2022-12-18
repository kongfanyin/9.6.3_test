#define _CRT_SECURE_NO_WARNINGS 1
#include"chaff.h"
#include<iostream>
void Setchaff(chaff* pc)
{
	using std::cout;
	using std::cin;
	cout << "Enter the draoss: \n";
	int i = 2;
	while (i--)
		{
			cin.getline(pc->draoss,Arsize);
			cout << "Enter the slag num: \n";
			cout << "Enter q to quite:\n";
			cin >> pc->slag;
			pc++;
		}
}
