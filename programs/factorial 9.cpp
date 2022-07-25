//factorial
#include<iostream>
using namespace std;
int main()
{
	int x,fact;
	cout<<"enter the number"<<endl;
	cin>>x;
	fact=x;
	
	for(int i=1;i<x;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
	


}
