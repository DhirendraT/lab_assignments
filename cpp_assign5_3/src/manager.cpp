/*
 * manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */
#include<iostream>
using namespace std;

#include "manager.h"

manager::manager()
{
	this->bonus = 100;
}

manager::manager(int id, float sal, float bonus):employee(id,sal)
{
	this->bonus = bonus;
}

void manager::accept()
{
	employee::accept();
	this->accept_manager();
}

void manager::display()
{
	employee::display();
	this->display_manager();
}

void manager::accept_manager()
{
	float bonus;
	cout<<"Enter Bonus : ";
	cin>>bonus;
	this->setBonus(bonus);
}

void manager::display_manager()
{
	cout<<"Bonus  :  "<<this->getBonus()<<endl;
}

manager::~manager()
{

}

