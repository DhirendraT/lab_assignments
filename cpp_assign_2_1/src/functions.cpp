/*
 * functions.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: dhirendra
 */

#include<iostream>
using namespace std;
#include"class.h"
#define pie 3.14

void cylinder::getVolume()
{
	volume = pie*radius*radius*height;
}

void cylinder::printVolume()
{
	cout<<"Volume of cylinder = "<<volume<<endl;
}


