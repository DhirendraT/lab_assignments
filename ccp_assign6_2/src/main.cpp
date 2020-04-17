/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */
#include "shape.h"
#include "square.h"
#include "circle.h"
#include "rectangle.h"

int main()
{
	int choice = 1,i;
	shape* s[5];
	for(i=0 ; i<5 ; i++)
	{
		cout<<"1.Circle.\n2.Square.\n3.Rectangle"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			s[i] = new circle;
			break;
		case 2:
			s[i] = new square;
			break;
		case 3:
			s[i] = new rectangle;
			break;
		}
		s[i]->accept();
	}
	for(i=0 ; i<5 ; i++)
		s[i]->display();

	float area = 0, peri = 0;
	area += s[i]->cal_area();
	peri += s[i]->cal_peri();
	cout << "Total Area: " << area << endl;
	cout << "Total Peri: " << peri << endl;
	for(i=0 ; i<5 ; i++)
		delete s[i];
	return 0;
}




