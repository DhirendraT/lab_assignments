/*
 ============================================================================
 Name        : CPP_Assign_1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int day,month,year;
};

void InitDate(struct Date* ptDate)
{
	ptDate->day = 01;
	ptDate->month = 01;
	ptDate->year = 1998;
	printf("Date : %d-%d-%d\n",ptDate->day,ptDate->month,ptDate->year);
}
void PrintDateOnConsole(struct Date* ptDate)
{
	printf("Date : %d-%d-%d\n",ptDate->day,ptDate->month,ptDate->year);
}
void AcceptDateFromConsole(struct Date* ptDate)
{
	printf("Enter Day  :  ");
	scanf("%d",&ptDate->day);
	printf("Enter Month  :  ");
	scanf("%d",&ptDate->month);
	printf("Enter Year  :  ");
	scanf("%d",&ptDate->year);
}

int menuList()
{
	printf("Menu List ------>\n");
	printf("1. Initialize Date.\n");
	printf("2. Accept Date From Console.\n");
	printf("3. Print Date From Console.\n");
	printf("0. Exit.\n");
	printf("Enter Choice : ");
	int choice;
	scanf("%d",&choice);
	return choice;
}

int main()
{
	int choice;
	struct Date ptDate;
	while((choice = menuList()) != 0)
	{
		switch(choice)
		{
		case 1:
			InitDate(&ptDate);
			break;
		case 2:
			AcceptDateFromConsole(&ptDate);
			break;
		case 3:
			PrintDateOnConsole(&ptDate);
			break;
		}
	}
	return 0;
}
