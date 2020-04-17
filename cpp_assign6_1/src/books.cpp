/*
 * books.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#include "books.h"

books::books()
{
	this->pages = 0.0;
}

books::books(int pages)
{
	this->pages = pages;
}

void books::accept()
{
	product::accept();
	cout<<"Enter pages : ";
	cin>>this->pages;
}

void books::display()
{
	product::display();
	cout<<"Pages : "<<this->pages<<endl;
}

float books::calc_discount()
{
	return this->getPrice() * 0.10;
}

books::~books() {
	// TODO Auto-generated destructor stub
}

