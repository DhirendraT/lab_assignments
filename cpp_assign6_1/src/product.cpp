/*
 * product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "product.h"

product::product()
{
	strcpy(this->name,"");
	this->price = 0.0;
}

product::product(char* name, double price)
{
	strcpy(this->name, name);
	this->price = price;
}

void product::accept()
{
	cout<<"Enter Title  :  ";
	cin>>this->name;
	cout<<"Enter Price  :  ";
	cin>>this->price;
}

void product::display()
{
	cout<<"Title  :  "<<this->name<<endl;
	cout<<"Price  :  "<<this->price<<endl;
}

//float product::calc_discount()= 0;

product::~product()
{

}

