/*
 * salesman.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_
#include "employee.h"

class salesman:public virtual employee
{
	float comm;
public:
	salesman();
	salesman(int,float,float);
	~salesman();
	float getComm() const{return comm;}
	void setComm(float comm){this->comm = comm;}
	void accept();
	void display();
protected:
	void accept_salesman();
	void dispaly_salesman();


};

#endif /* SALESMAN_H_ */
