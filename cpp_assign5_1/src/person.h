/*
 * person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "date.h"

class person
{
	char name[40];
	char address[500];
	date birth_date;
public:
	person();
	person(char*,char*,date&);
	void accept();
	void display();
	~person();

	const char* getAddress() const {
		return address;
	}

	date getBirthDate() const {
		return birth_date;
	}

	void setBirthDate(date birthDate) {
		birth_date = birthDate;
	}

	const char* getName() const {
		return name;
	}
};

#endif /* PERSON_H_ */
