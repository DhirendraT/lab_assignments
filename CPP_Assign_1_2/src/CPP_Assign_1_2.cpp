//============================================================================
// Name        : CPP_Assign_1_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

typedef struct Date
{
		int day,month,year;
		void InitDate();
		void PrintDateOnConsole();
		void AcceptDateFromConsole();
		bool IsLeapYear();

}date_t;

void Date::InitDate()
{

	day = 01;
	month = 01;
	year = 1998;
	cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
}
void Date::PrintDateOnConsole()
{
	cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
}
void Date::AcceptDateFromConsole()
{
	cout<<"Enter Day  :  ";
	cin>>day;
	cout<<"Enter Month  :  ";
	cin>>month;
	cout<<"Enter Year  :  ";
	cin>>year;
}

bool Date::IsLeapYear()
{
	if(year%4 == 0)
	{
		if(year%100 == 0 && year%400 == 0)
			return true;
		else
			return true;
	}
	else
		return false;
}

int menuList()
{
	cout<<"Menu List ------>"<<endl;
	cout<<"1. Initialize Date.\n";
	cout<<"2. Accept Date From Console.\n";
	cout<<"3. Print Date From Console.\n";
	cout<<"4. Leap Year.\n";
	cout<<"0. Exit.\n";
	cout<<"Enter Choice : ";
	int choice;
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	date_t d;
	while((choice = menuList()) != 0)
	{
		switch(choice)
		{
		case 1:
			d.InitDate();
			break;
		case 2:
			d.AcceptDateFromConsole();
			break;
		case 3:
			d.PrintDateOnConsole();
			break;
		case 4:
			d.PrintDateOnConsole();
			if(d.IsLeapYear())
				cout<<d.year<<" is Leap Year"<<endl;
			else
				cout<<d.year<<" is Not Leap Year"<<endl;
			break;
		}
	}
	return 0;
}
