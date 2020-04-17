/*
 * square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "square.h"

square::square()
{
	this->side = 0;
}

square::square(float side)
{
	this->side = side;
}

square::~square(){}


void square::accept()
{
	int side;
	cout<<"Enter side  :  ";
	cin>>side;
	this->setside(side);

}

void square::display()
{
	cout<<"Area  :  "<<cal_area()<<endl;
	cout<<"Peri  :  "<<cal_peri()<<endl;
}

float square::cal_area()
{
	float area = this->side * this->side;
	return area;
}

float square:: cal_peri()
{
	float peri = 4 * this->side;
	return peri;
}


