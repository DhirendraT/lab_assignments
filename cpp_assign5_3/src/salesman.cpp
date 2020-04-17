/*
 * salesman.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#include "salesman.h"
using namespace std;


salesman::salesman()
{
	this->comm = 0.0;
}

salesman::salesman(int id,float sal,float comm):employee(id,sal)
{
	this->comm = comm;
}
void salesman::accept()
{
	employee::accept();
	this->accept_salesman();
}

void salesman::display()
{
	employee::display();
	this->dispaly_salesman();
}

void salesman::accept_salesman()
{
	float comm;
	cout<<"Enter Commission : ";
	cin>>comm;
	this->setComm(comm);
}

void salesman::dispaly_salesman()
{
	cout<<"Commission  :  "<<this->getComm()<<endl;
}

salesman::~salesman() {}

