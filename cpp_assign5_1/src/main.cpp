/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#include<iostream>
#include "employee.h"
#include "date.h"
#include "person.h"

int main(void)
{
	date d1;
	date d2(15,8,2020);
	employee e1;
	employee e2(10,5000,"Developer",d2);
	person p1;
	person p2("Dhirendra","Nook Society",d1);
	p2.accept();
	e2.accept();
	//e2.accept();
	//e2.display();
	p2.display();
	e2.display();
	//d2.is_leap_year();
	//p2.accept();
	//p2.display();
	return 0;
}


