#include<iostream>
using namespace std;
//int maximum(int a,int b); fprward declaration
int maximum(int x, int y)
{
	if(x>y)
	
		return x;
		 else 
		return y; 
}
void print()
{
	cout<<"hello World"<<endl;
}
int main()
{
	print();
	int a,b;
	cout<<"enter two numbers to find the greatest"<<endl;
	cin>>a>>b;
	int c= maximum(a,b);
	cout<<"the larger value is"<<c<<endl;
	cout<<"the larger value out of 5 and 6 is"<<maximum(5,6)<<endl;
	return 0;
}

