#include<iostream>
using namespace std;
int main()
{
	int var= 5;
	
	
	int *ip;
	double *dp;
	float *fp;
	char *ch;
	
	ip =&var;
	cout<<"variable value"<<var<<endl;
	cout<<"variable address"<<&var<<endl;
	cout<<"variable address via ip"<<ip<<endl;
	cout<<"variable value via ip"<<*ip<<endl;
	
	*ip = 6;
		cout<<"variable value"<<var<<endl;
	cout<<"variable address"<<&var<<endl;
	cout<<"variable address via ip"<<ip<<endl;
	cout<<"variable value via ip"<<*ip<<endl;
	
	return 0;
}
