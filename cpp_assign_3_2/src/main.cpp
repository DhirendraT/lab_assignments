/*
 * main.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: dhirendra
 */

#include<iostream>
using namespace std;

class matrix
{
private:
	int row,col,i=0,j=0;
	int **ptr;
public:
	matrix():row(2),col(2)
	{
		ptr = new int*[row];
		for(i = 0; i < col ; i++)
			ptr[i]  = new int[col];
	}
	matrix(int r,int c)
	{
		row = r;
		col = c;
		ptr = new int*[row];
		for(i = 0; i < col ; i++)
			ptr[i]  = new int[col];
	}
	void accept();
	void print();
	void add(matrix&);
	void sub(matrix&);
	void mul(matrix&);
	void transpose();
	~matrix()
	{
		for(i = 0;i < row; i++)
			delete []ptr[i];
		delete []ptr;
	}
};

void matrix::accept()
{
	cout<<"Enter Elements of matrix";
	for(i = 0;i < row;i++)
	{
		for(j = 0; j < col; j++)
		{
			cin>>ptr[i][j];
		}
	}
}
void matrix::print()
{
	cout<<"Matrix : ";
	for(i = 0;i < row;i++)
	{
		for(j = 0; j < col; j++)
		{
			cout<<ptr[i][j]<<endl;
		}
	}
}
void matrix::add(matrix &m)
{
	matrix t;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j<col;j++)
		{
			t.ptr[i][j] = ptr[i][j] + m.ptr[i][j];
		}
	}
	t.print();
}

void matrix::sub(matrix &m)
{
	matrix t;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j<col;j++)
		{
			t.ptr[i][j] = ptr[i][j] - m.ptr[i][j];
		}
	}
	t.print();
}
void matrix::mul(matrix &m)
{
	matrix t;
	int k = 0;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j<col;j++)
		{
			for(k = 0; k < col ;k++)
				t.ptr[i][j] = ptr[i][j] * m.ptr[i][j];
		}
	}
		t.print();
}
void matrix::transpose()
{
//	matrix t;
//	for(i = 0; i < row; i++)
//	{
//		for(j = 0; j<col;j++)
//		{
//			t.ptr[i][j] = ptr[i][j] = ptr[j][i];
//		}
//	}
//	t.print();
}

int menuList()
{
	cout<<"Menu List---->"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"1. Accept Matrix"<<endl;
	cout<<"2. Print Matrix"<<endl;
	cout<<"3. Add Matrix"<<endl;
	cout<<"4. sub Matrix"<<endl;
	cout<<"5. mul Matrix"<<endl;
	cout<<"6. transpose Matrix"<<endl;
	int choice;
	cin>>choice;
	return choice;
}


int main()
{

	int r,c;
	cout<<"Enter Number of Rows and columns";
	cin>>r>>c;
	matrix m1;
	matrix m2(r,c);
	int choice;
		while((choice = menuList())!=0)
		{
			switch(choice)
			{
			case 1:
				m1.accept();
				break;
			case 2:
				m1.print();
				break;
			case 3:
				m1.accept();
				m2.accept();
				m1.add(m2);
				break;
			case 4:
				m1.accept();
				m2.accept();
				m1.sub(m2);
				break;
			case 5:
				m1.accept();
				m2.accept();
				m1.mul(m2);
				break;
			case 6:
//				m1.accept();
//				m1.transpose();
				break;
			}
		}
	return 0;
}
