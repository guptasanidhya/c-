#include<iostream>
using namespace std;

class base{
	 public:
	 void show()
	 {cout<<"base show called"<<endl;
	 }
	 virtual void print()
	 {
	 	cout<<"base print called"<<endl;
	 }
};

class derived:public base{
	void show()
	 {cout<<"derived show called"<<endl;
	 }
	 void print()
	 {
	 	cout<<"derived print called"<<endl;
	 }
	
};

int main()
{
	base *b;
	derived d;
	b=&d;
	b->print();
	b->show();
	return 0;
}
