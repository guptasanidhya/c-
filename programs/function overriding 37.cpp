#include<iostream>
using namespace std;
class Base
{
 public:
virtual void show() // virtual function
 {
  cout << "Base class";
 }
};
class Derived:public Base
{
 public:
 void show()
 {
  cout << "Derived Class";
 }
};
 
int main()
{
 Base *b;      //Base class pointer
 Derived d;     //Derived class object
 b = &d; // passing derived class address into base class pointer	
 b->show();     //Late Binding Occurs
}
