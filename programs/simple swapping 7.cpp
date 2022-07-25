#include<iostream>
using namespace std;
int main()
{
	cout<<"swapping program"<<endl;
	int x,y,temp;
	x=5;
	y=6;
	cout<<"before swapping"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	temp=x;
	x=y;
	y=temp;
	cout<<"after swapping"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;
}
