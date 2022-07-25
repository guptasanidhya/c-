//program 1 
//#include<iostream>
//using namespace std;
//class rectangle{
//	private:
//	int length ,breadth;
//	public:
//		rectangle(int l,int b)
//		{
//			length=l;
//			breadth=b;
//		}
//		int area()
//		{
//			return 2*length*breadth;
//		}
//	void display(int area)
//	{
//		cout<<"the area of rectangle is"<<area<<endl;
//		
//	}
//};
//
//int main()
//{
//	rectangle r1(2,5);
//	rectangle *ptr;
//	ptr=&r1;
//	int area=ptr->area();
//	cout<<"the area of rectangle is "<<area<<endl;
//	ptr->display(area);
//	return 0;
//}

//program 2
#include<iostream>
using namespace std;

class rectangle{
	private:
		int length;
		int breadth;
		public:
			void setdata(int l,int b)
			{
				length=l;
				breadth=b;
			}
		int area()
		{
			return 2*length*breadth;
		}
			
};

int main()
{
	rectangle var[2];
	
	var[0].setdata(4,5);
	var[1].setdata(5,6);
	
	rectangle *ptr;
	ptr=var;
	for(int i=0;i<2;i++)
	{
	
	cout<<"the area of  rectangle"<<(i+1)<<":"<<(ptr+i)->area()<<endl;
}
return 0;
}
