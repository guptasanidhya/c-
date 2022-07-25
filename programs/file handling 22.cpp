#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter your name and age"<<endl;
	cin.getline(arr,100);
	//cin>>arr;
	//ofstream myfile("name_age.txt", ios::app);
	fstream myfile("name_age.txt",ios::out|ios::app);
	myfile<<arr;
	myfile.close();
	cout<<"file write operation done succesfully"<<endl;
	
	cout<<"READING FROM FILE OPERATION"<<endl;
	char arr1[100];
	ifstream obj("name_age.txt");
	obj.getline(arr1,100);
	cout<<"array content "<<arr1<<endl;
	cout<<"file read operation done succesfully"<<endl;
	obj.close();
	return 0;
}
