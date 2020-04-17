/*
 * salesmanager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_
#include "salesman.h"
#include "manager.h"
#include "employee.h"

class sales_manager : public salesman,public manager
{
public:
	sales_manager();
	sales_manager(int,float,float,float);
	void accept();
	void display();
	~sales_manager();
};

#endif /* SALESMANAGER_H_ */
