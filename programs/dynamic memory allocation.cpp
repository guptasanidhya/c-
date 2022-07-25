#include<iostream>
using namespace std;
int main(){
	int size;
	int *ptr;
	
	cout<<"enter the size of the list"<<endl;
	
	cin>>size;
	
	ptr= new int[size];
	cout<<"enter the elements of the list"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	
	cout<<"The elements in the list are"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i];
	}
	return 0;
}
