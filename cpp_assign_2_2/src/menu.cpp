/*
 * menu.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */

#include<iostream>
using namespace std;
#include<cstring>
#include"class.h"
extern int search(student*);
extern void sort();

int menuList()
{
	cout<<"Menu List---->"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"1. Accept Record"<<endl;
	cout<<"2. Print Record"<<endl;
	cout<<"3. Search Record"<<endl;
	int choice;
	cin>>choice;
	return choice;
}

void student::menu()
{
	student s[3];
	int choice;
	while((choice = menuList())!=0)
	{
		int i = 0;
		switch(choice)
		{
		case 1:
			for(i = 0;i<3;i++)
				s[i].accept();
			break;
		case 2:
			for(i = 0;i<3;i++)
				s[i].print();
			break;
		case 3:
			i = search(s);
			if(i < 0)
				cout<<"Record Not Found";
			else
				s[i].print();
			break;

		case 4:
			sort();
			for(i = 0;i<3;i++)
				s[i].print();
			break;
		}
	}
}


