#include<iostream>
#include<stdlib.h>
#define clrscr system("clear");
using namespace std;
int main()
{
	int eq[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		cout<<"Enter "<<i+1<<" of simultaneously eq"<<endl;
		cout<<"Coeff of x1 :- ";
		cin>>eq[i][0];
		cout<<"Coeff of x2 :- ";
		cin>>eq[i][1];
			cout<<"Coeff of x3 :- ";
		cin>>eq[i][2];
			cout<<"Coeff of constant :- ";
		cin>>eq[i][3];
	}

		for(j=0;j<4;j++)
		eq[1][j]=eq[1][j]-eq[1][0];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cout<<eq[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
