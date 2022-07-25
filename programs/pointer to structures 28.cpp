#include<iostream>
#include<string>
using namespace std;
struct person{
	string name;
	int age;
	double salary;
};
int main()
{ person p;
person *ptr=&p;
//	cout<<"Enter persons name"<<endl;
//	cin>>p.name;
//	cin>>p.age;
//	cin>>p.salary;
	
	cout<<"Enter persons name"<<endl;
	cin>>ptr->name;
	cin>>ptr->age;
	cin>>ptr->salary;
	
//	cout<<"person details are"<<endl;
//	cout<<p.name;
//	cout<<p.age;
//	cout<<p.salary;
	
		cout<<"person details are"<<endl;
	cout<<ptr->name;
	cout<<ptr->age;
	cout<<ptr->salary;
	return 0;
}
