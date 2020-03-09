/*
 * class.h
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */

#ifndef CLASS_H_
#define CLASS_H_

class cylinder
{
private:
	double radius,height,volume;
public:
	cylinder():radius(1),height(2){}
	cylinder(double r, double h):radius(r),height(h){}
	void getVolume();
	void printVolume();
};



#endif /* CLASS_H_ */
