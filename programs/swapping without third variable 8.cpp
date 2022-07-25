//swapping without third variable;
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	x=5;
	y=7;
	cout<<"value before swapping"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"value after swapping"<<endl<<"x="<<x<<endl<<"y="<<y<<endl;
	return 0;
}
