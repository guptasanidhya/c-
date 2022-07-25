#include<iostream>
using namespace std;
class base{
	public:
		int x;
		base()
		{
			 x=5;
			 y=5;
			 z=5;
		}
		protected:
			int y;
			public:
				int z;
			
};

class derived:protected base
{
//public x;	
	public:
		void outside()
{
	cout<<"X:"<<x<<endl;
	cout<<"y:"<<y<<endl;
}
};


int main()
{
	base obj1;
	derived obj2;
	obj2.outside();
	cout<<"Z:"<<obj1.z<<endl;
	return 0;
}
