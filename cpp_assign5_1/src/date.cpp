/*
 * date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#include <iostream>
using namespace std;
#include "date.h"


date::date()
{
	this->day = 1;
	this->month = 1;
	this->year = 1998;
}

date::date(int day, int month , int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}



date::~date() {}

void date::accept()
{
	cin>>this->day;
	cin>>this->month;
	cin>>this->year;
}

void date::display()
{
	cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}

bool date::is_leap_year()
{
	bool Res;
	Res = (this->year % 4 == 0) ? ((this->year % 100 == 0 && this->year % 400 == 0) ? true : true) : false;
	cout<<Res;
	return Res;
}
