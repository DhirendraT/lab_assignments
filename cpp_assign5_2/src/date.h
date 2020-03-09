/*
 * date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: dhirendra
 */

#ifndef DATE_H_
#define DATE_H_

class date
{
	int day,month,year;
public:
	date();
	date(int,int,int);
	~date();

	void accept();
	void display();
	bool is_leap_year();

	int getDay() const {
		return day;
	}

	void setDay(int day) {
		this->day = day;
	}

	int getMonth() const {
		return month;
	}

	void setMonth(int month) {
		this->month = month;
	}

	int getYear() const {
		return year;
	}

	void setYear(int year) {
		this->year = year;
	}
};

#endif /* DATE_H_ */
