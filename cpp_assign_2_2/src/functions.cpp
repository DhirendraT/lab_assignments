/*
 * functions.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */

#include<iostream>
#include<cstring>
using namespace std;
#include"class.h"

void student::accept()
{
	cout<<"Enter Name  :  ";
	cin>>name;
	cout<<"Enter Gender  :  ";
	cin>>gender;
	cout<<"Enter RollNumber  :  ";
	cin>>rollnumber;
	cout<<"Enter Marks  :  ";
	for(int i = 0; i < 3 ; i++)
		cin>>marks[i];
}
void student::print()
{
	cout<<"Name  :  "<<name<<endl;
	cout<<"Gender  :  "<<gender<<endl;
	cout<<"Roll Number  :  "<<rollnumber<<endl;
	cout<<"percentage  :  "<<(((marks[0]+marks[1]+marks[2])*100)/300)<<endl;
}

int compare(const void* p1,const void* p2)
{
	const int* n1 = (const int*)p1;
	const int* n2 = (const int*)p2;
	return (*n1-*n2);
}

void sort()
{
	int arr[3];
	qsort(arr,3,sizeof(student),compare);
}

int search(student* s)
{
	char str[20];
	int result;
	int i;
	cout<<"Enter Name to search  :  ";
	cin>>str;
	for(i = 0;i<3;i++)
	{
		result = strcmp(str,s[i].getName());
		if(result == 0)
			return i;
	}
	if(i == 2)
		return -1;
}
