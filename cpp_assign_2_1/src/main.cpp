/*
 * main.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */


#include<iostream>
using namespace std;
#include"class.h"

int main()
{
	cylinder c1;
	c1.getVolume();
	c1.printVolume();
	cylinder c2(4,10);
	c2.getVolume();
	c2.printVolume();
	return 0;
}
