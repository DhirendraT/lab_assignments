/*
 * shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */

#ifndef SHAPE_H_
#define SHAPE_H_

class shape {
public:
	shape(){}
	virtual void accept() = 0;
	virtual void display() = 0;
	virtual float cal_peri() = 0;
	virtual float cal_area() = 0;
	virtual ~shape(){}
};

#endif /* SHAPE_H_ */
