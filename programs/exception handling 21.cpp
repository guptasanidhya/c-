#include<iostream>
using namespace std;

int main()
{
	int numerator, denominator;
	float result;
	cout<<"Enter num and deno"<<endl;
	cin>>numerator>>denominator;
	try{
		if(denominator==0)
		{
			throw denominator;
		}
	
	 result= numerator/denominator;
	 cout<<"division is "<<result<<endl;
}

catch(int){
	cout<<"divide by zero is an exception";
}
	
	return 0;
}
