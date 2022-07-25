#include<iostream>
using namespace std;
class my_class{
	friend class sec_class;

	public:
		my_class()
		{
			secret=0;
		}
		
		void display()
		{
			cout<<"secret value"<<secret<<endl;
		}
		private: int secret;
};

class sec_class
{
public:
void change(my_class &me ,int x)
{
	me.secret=x;
}
};


int main()
{
	my_class me;
	sec_class you;
	me.display();
	you.change(me,5);
	me.display();
	return 0;
}
