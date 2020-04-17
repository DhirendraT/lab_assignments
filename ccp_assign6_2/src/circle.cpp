/*
 * circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "circle.h"

circle::circle()
{
	this->radius = 0;
}

circle::circle(float radius)
{
	this->radius = radius;
}

circle::~circle(){}

void circle::accept()
{
	int radius;
	cout<<"Enter radius  :  ";
	cin>>radius;
	this->setRadius(radius);

}

void circle::display()
{
	cout<<"Area  :  "<<cal_area()<<endl;
	cout<<"Peri  :  "<<cal_peri()<<endl;
}

float circle::cal_area()
{
	float area = pie * this->radius * this->radius;
	return area;
}

float circle:: cal_peri()
{
	float peri = 2 * pie * this->radius;
	return peri;
}
