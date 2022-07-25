#include<iostream>
#include<string>
using namespace std;
struct Person{
	string name;
	int age;
	double salary;
};
int main()
{
	Person p[2];
	cout<<"Enter person's name,age and salary"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"ENTER DETAILS OF PERSON :"<<(i+1)<<endl;
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
cout<<"details of users"<<endl;
for(int i=0;i<2;i++)
{
	cout<<"Details of person"<<(i+1)<<endl;
	cout<<"Name:"<<p[i].name<<endl;
	cout<<"Age:"<<p[i].age<<endl;
	cout<<"Salary:"<<p[i].salary<<endl;
		}		
	return 0;	
}
