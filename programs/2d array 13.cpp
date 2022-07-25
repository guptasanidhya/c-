#include<iostream>
using namespace std;
int main()
{
	int myarray[5][5];
	int myarray1[2][2]={1,2,3,4};
	int myarray2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	cout<<"value for 3x3 matrix is"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<myarray2[i][j]<<"  "; 
		}
		cout<<endl;
	}
	
	cout<<"values of 2x2 matrix"<<endl;
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<myarray1[i][j]<<" "; 
		}
		cout<<endl;
	}
	
		cout<<"enter values for  5x5 matrix"<<endl;
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>myarray[i][j]; 
			
		}
		cout<<endl;
	}
	
		cout<<"values of 5x5 matrix"<<endl;
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<myarray[i][j]<<" "; 
		}
		cout<<endl;
	}
	
	return 0;
}
