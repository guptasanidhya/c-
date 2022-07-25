#include<iostream>
using namespace std;
class Shape{
	protected:
		int height;
		int width;
		
		public:
			void setwidth(int w)
			{
				width=w;
			}
			void setheight(int h){
				height=h;
			}
};
class Rectangle: public Shape
{
	public:
	int area()
	{
		return (height*width);
	}
};

int main()
{
	Rectangle rect;
	rect.setwidth(10);
	rect.setheight(12);
	rect.area();
	cout<<"the area is"<<rect.area()<<endl;
return 0;
}
