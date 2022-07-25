#include<iostream>
using namespace std;

int sum(int a,int b,int c=0,int d=7)
{
	return a+b+c+d;
}
int main()
{
	cout<<"the sum of numbers is"<<sum(1,2,3,4)<<endl;
	cout<<"the sum of the number is "<<sum(1,3);
	return 0;
}
