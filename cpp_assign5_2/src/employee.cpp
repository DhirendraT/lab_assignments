/*
 * employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */
#include <iostream>
#include <cstring>
using namespace std;
#include "employee.h"
#include "date.h"
#include "person.h"

employee::employee()
{
	this->id = 00;
	this->sal = 0;
	strcpy(this->dept,"Developer");
}
employee::employee(int id, float sal,const char* dept, date &join_date)
{
	this->id = id;
	this->sal = sal;
	strcpy(this->dept,dept);
	this->join_date = join_date;
}

employee::employee(char* name,char* address,date &bd):person(name,address,bd){}

employee::~employee(){}

const char* employee::getDept() const
{
	return this->dept;
}

int employee::getId() const
{
	return id;
}

void employee::setId(int id)
{
	this->id = id;
}

date employee::getJoinDate() const
{
	return join_date;
}

void employee::setJoinDate(date joinDate)
{
	join_date = joinDate;
}

float employee::getSal() const
{
	return sal;
}

void employee::setSal(float sal)
{
	this->sal = sal;
}


void employee::accept()
{
	person::accept();
	cout<<"Enter ID  :  ";
	cin>>this->id;
	cout<<"Enter Salary  :  ";
	cin>>this->sal;
	cout<<"Enter Department  :  ";
	cin>>this->dept;
	cout<<"Enter Joining ";
	this->join_date.accept();
}

void employee::display()
{
	person::display();
	cout<<"ID  :  "<<this->id<<endl;
	cout<<"Salary  :  "<<this->sal<<endl;
	cout<<"Department  :  "<<this->dept<<endl;
	cout<<"Joining "<<endl;
	this->join_date.display();
}
