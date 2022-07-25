#include<iostream>
using namespace std;
void passbyvalue(int x,int y)
{
	int z=x;
	x=y;
	y=z;
	
}

void passbyreference(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
}

void passbyaddress(int *x,int *y)
{
	int z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int a=5,b=6;
	cout<<"values before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	//passbyvalue(a,b);
	//passbyreference(a,b);
	passbyaddress(&a,&b);
cout<<"values after swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
	return 0;
}
