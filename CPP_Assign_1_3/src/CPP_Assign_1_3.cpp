//============================================================================
// Name        : CPP_Assign_1_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class Date
{
	private:
		int day,month,year;

	public:
		Date();
		Date(int day, int month, int year);
		void InitDate();
		void PrintDateOnConsole();
		void AcceptDateFromConsole();
		bool IsLeapYear();

};

Date::Date()
{
	day=0;
	month=0;
	year=0;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::InitDate()
{

	this->day = 01;
	this->month = 01;
	this->year = 1998;
	cout<<"Date : "<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}
void Date::PrintDateOnConsole()
{
	cout<<"Date : "<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}
void Date::AcceptDateFromConsole()
{
	cout<<"Enter Day  :  ";
	cin>>this->day;
	cout<<"Enter Month  :  ";
	cin>>this->month;
	cout<<"Enter Year  :  ";
	cin>>this->year;
}

bool Date::IsLeapYear()
{
	if(this->year%4 == 0)
	{
		if(this->year/100 == 0 && this->year/400 == 0)
			return true;
		else
			return true;
	}
	else
		return false;
}

int menuList()
{
	cout<<"Menu List ------>";
	cout<<"1. Accept Date From Console.\n";
	cout<<"2. Print Date From Console.\n";
	cout<<"3. Check Leap Year.\n";
	cout<<"0. Exit.\n";
	cout<<"Enter Choice : ";
	int choice;
	cin>>choice;
	return choice;
}

int main()
{
	int choice;
	Date d1;
	Date d2(01,01,1998);
	while((choice = menuList()) != 0)
	{
		switch(choice)
		{
		case 1:
			d1.AcceptDateFromConsole();
			break;
		case 2:
			d1.PrintDateOnConsole();
			break;
		case 3:
			d1.PrintDateOnConsole();
			if(d1.IsLeapYear())
				cout<<"Year is Leap Year"<<endl;
			else
				cout<<"Year is Not Leap Year"<<endl;
			break;
		}
	}
	return 0;
}
