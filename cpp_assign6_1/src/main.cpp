/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: dhirendra
 */
#include "product.h"
#include "books.h"
#include "tapes.h"

int main()
{
	int choice = 1;
	product *ptr;
	while(choice != 0)
	{
		cout<<"1.Books.\n2.Tapes.\n0.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			ptr = new books;
			break;
		case 2:
			ptr = new tapes;
			break;
		}
		ptr->accept();
		ptr->display();

		float price, discount, bill;
		price = ptr->getPrice();
		discount = ptr->calc_discount();
		bill = price - discount;
		cout << "price: " << price << endl;
		cout << "discount: " << discount << endl;
		cout << "bill: " << bill << endl;
		delete ptr;
	}
	return 0;
}



