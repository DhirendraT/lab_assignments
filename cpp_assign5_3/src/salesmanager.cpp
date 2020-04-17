/*
 * salesmanager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#include "salesmanager.h"

sales_manager::sales_manager(){}

sales_manager::sales_manager(int id, float sal, float bonus,
		float comm):manager(id,sal,bonus),salesman(id,sal,comm){}

void sales_manager::accept()
{
	employee::accept();
	this->accept_manager();
	this->accept_salesman();
}

void sales_manager::display()
{
	employee::display();
	this->display_manager();
	this->dispaly_salesman();
}

sales_manager::~sales_manager(){}

