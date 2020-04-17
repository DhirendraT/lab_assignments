/*
 * tapes.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "tapes.h"

tapes::tapes()
{
	this->duration = 0.0;
}

tapes::tapes(int duration)
{
	this->duration=duration;
}

void tapes::accept()
{
	product::accept();
	cout<<"Enter Duration  :  ";
	cin>>this->duration;
}

void tapes::display()
{
	product::display();
	cout<<"Duration  :  "<<this->duration<<endl;
}

float tapes::calc_discount()
{
	return this->getPrice() * 0.05;
}

tapes::~tapes(){}
