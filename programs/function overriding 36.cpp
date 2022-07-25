#include<iostream>
using namespace std;
class animal
{

	public:
		void makesound()
		{
			cout<<"animal sound"<<endl;
		}
};

class dog:public animal{
	public:
		void makesound()
	{
		animal::makesound();
		cout<<"dog bark"<<endl;
	}
};
class cat:public animal{
	public:
	void makesound()
	{
		animal::makesound();
		cout<<"cat meow"<<endl;
	}
};

int main()
{
	animal a1;
	a1.makesound();
	cout<<endl;
	dog d1;
	d1.makesound();
	cout<<endl;
	cat c1;
	c1.makesound();
	return 0;
}
