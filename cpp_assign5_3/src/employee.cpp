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

employee::employee()
{
	this->id = 0;
	this->sal = 0;
}
employee::employee(int id, float sal)
{
	this->id = id;
	this->sal = sal;
}

employee::~employee(){}

int employee::getId() const
{
	return id;
}

void employee::setId(int id)
{
	this->id = id;
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
	cout<<"Enter ID  :  ";
	cin>>this->id;
	cout<<"Enter Salary  :  ";
	cin>>this->sal;
}

void employee::display()
{
	cout<<"ID  :  "<<this->id<<endl;
	cout<<"Salary  :  "<<this->sal<<endl;
}
