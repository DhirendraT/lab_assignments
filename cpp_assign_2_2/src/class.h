/*
 * class.h
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */

#ifndef CLASS_H_
#define CLASS_H_

class student
{
private:
	char name[50];
	char gender;
	int rollnumber;
	double marks[3];
public:
	void accept();
	void print();
	void menu();
	const char* getName(){return name;}
};


#endif /* CLASS_H_ */
