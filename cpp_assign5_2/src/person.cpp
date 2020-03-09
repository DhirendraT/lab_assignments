/*
 * person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */
#include <iostream>
#include <cstring>
using namespace std;
#include "person.h"
#include "date.h"

person::person()
{
	strcpy(this->name,"Dhiru");
	strcpy(this->address,"Nook");

}

person::person(char* name, char* address,date &birth_date)
{
	strcpy(this->name,name);
	strcpy(this->address,address);
	this->birth_date = birth_date;
}

void person::accept()
{
	cout<<"Enter Name  :  ";
	cin>>this->name;
	cout<<"Enter Address  :  ";
	cin>>this->address;
	cout<<"Enter Birth ";
	this->birth_date.accept();
}

void person::display()
{
	cout<<"Name  :  "<<this->name<<endl;
	cout<<"Address  :  "<<this->address<<endl;
	cout<<"Birth "    ;
	this->birth_date.display();
}

person::~person() {}

