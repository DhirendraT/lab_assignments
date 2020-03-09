//============================================================================
// Name        : CPP_Assign_1_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
using namespace std;

class volume
{
	private:
		int l,b,h,res;
	public:
		volume();
};

volume::volume()
{
	cout<<"Enter data"<<endl;
	cout<<"Length : ";
	cin>>l;
	cout<<"Breadth : ";
	cin>>b;
	cout<<"Height : ";
	cin>>h;
	res = l*b*h;
	cout<<"Volume = "<<res;
}

int main()
{
	volume v;
	return 0;
}
