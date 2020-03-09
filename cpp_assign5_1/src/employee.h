/*
 * employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "date.h"


class employee
{
	int id;
	float sal;
	char dept[40];
	date join_date;
public:
	employee();
	employee(int, float, char*, date&);
	~employee();
	const char* getDept() const;
	int getId()const;
	void setId(int);
	date getJoinDate()const;
	void setJoinDate(date joinDate);
	float getSal()const;
	void setSal(float);
	void accept();
	void display();
};

#endif /* EMPLOYEE_H_ */
