#include<iostream>
#include<string>
using namespace std;

int main()
{

int n;
cout<<"enter the value=";
cin>>n;
for(int i=0;i<=n;i++)
{
	cout<<endl;
	for(int j=0;j<i;j++)
	{
		cout<<"*";
	}

}

return 0;
}
