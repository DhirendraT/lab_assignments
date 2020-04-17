/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <iostream>
#include <cstring>
using namespace std;

class employee
{
	int id;
	float sal;
public:
	employee();
	employee(int, float);
	~employee();
	int getId()const;
	void setId(int);
	float getSal()const;
	void setSal(float);
	virtual void accept();
	virtual void display();
};

#endif /* EMPLOYEE_H_ */
