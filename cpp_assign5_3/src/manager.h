/*
 * manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "employee.h"

class manager:public virtual employee
{
	float bonus;
public:
	manager();
	manager(int,float,float);
	~manager();
	void accept();
	void display();
protected:
	void accept_manager();
	void display_manager();


	float getBonus() const {
		return bonus;
	}

	void setBonus(float bonus) {
		this->bonus = bonus;
	}
};

#endif /* MANAGER_H_ */
