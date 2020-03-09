//============================================================================
// Name        : CPP_Assign_1_5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class toolbooth
{
private:
	unsigned pay_cars = 0,nonpay_cars = 0,total;
	double amount = 0 ;
public:
	void payCar();
	void nopayCar();
	void PrintOnConsole();
};

void toolbooth::payCar()
{
	pay_cars++;
	amount = amount + 50;
	cout<<"*Record Added*"<<endl;

}

void toolbooth::nopayCar()
{
	nonpay_cars++;
	cout<<"*Record Added*"<<endl;
}

void toolbooth::PrintOnConsole()
{
	cout<<"Cars Passes by Paying toll : "<<pay_cars<<endl;
	cout<<"Cars Passes by without paying toll  :  "<<nonpay_cars<<endl;
	total = pay_cars+nonpay_cars;
	cout<<"Total Cars Passes by  :  "<<total<<endl;
	cout<<"Total Amount collected  :  "<<amount<<" cents"<<endl;

}

int menuList()
{
	cout<<"Menu List ------>"<<endl;
	cout<<"1. Add Record To Pay Cars"<<endl;
	cout<<"2. Add Record To NonPay Cars"<<endl;
	cout<<"3. Print Total Record"<<endl;
	cout<<"0. Exit."<<endl;
	cout<<"Enter Choice : ";
	int choice;
	cin>>choice;
	return choice;
}


int main()
{
	toolbooth tb;
	int choice;
	while((choice = menuList()) != 0)
	{
		switch(choice)
		{
		case 1:
			tb.payCar();
			break;
		case 2:
			tb.nopayCar();
			break;
		case 3:
			tb.PrintOnConsole();
			break;
		}
	}
	return 0;
}
