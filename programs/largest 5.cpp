#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the 3 numbers";
	cin>>a>>b>>c;
	if(a==b && b==c && c==a)
	{
		cout<<"all are equal"<<endl;
	}
	else if(a>=b && a>=c)
	{
		if(a==b)
		{
			cout<<"a and b are equal"<<endl;
			cout<<"a and b are largest"<<endl;
		}else if(a==c)
		{
			cout<<"a and c are equal"<<endl;
			cout<<"a and c are largest"<<endl;
		}else
		{
			cout<<"a is  largest"<<endl;
		}
		
	}else if(b>=a && b>=c)
	{
		if(b==a)
		{
			cout<<"a and b are equal"<<endl;
			cout<<"a and b are largest"<<endl;
		}else if(b==c)
		{
			cout<<"b and c are equal"<<endl;
			cout<<"b and c are largest"<<endl;
		}else
		{
			cout<<"b is largest"<<endl;
		}
	}else
	{
		cout<<"c is largest"<<endl;
	}
	return 0;
}
