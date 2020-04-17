/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "rectangle.h"

rectangle::rectangle()
{
	this->length = 0;
	this->breadth = 0;
}

rectangle::rectangle(float length,float breadth)
{
	this->length = length;
	this->breadth = breadth;
}

rectangle::~rectangle(){}

void rectangle::accept()
{
	int length,breadth;
	cout<<"Enter length  :  ";
	cin>>length;
	this->setLength(length);
	cout<<"Enter breadth  :  ";
	cin>>breadth;
	this->setBreadth(breadth);
}

void rectangle::display()
{
	cout<<"Area  :  "<<cal_area()<<endl;
	cout<<"Peri  :  "<<cal_peri()<<endl;
}

float rectangle::cal_area()
{
	float area = this->length * this->breadth;
	return area;
}

float rectangle:: cal_peri()
{
	float peri = 2 * (this->length * this->breadth);
	return peri;
}

