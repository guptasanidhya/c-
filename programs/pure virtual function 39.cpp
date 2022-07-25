#include<iostream>
using namespace std;
  class shape{
  	public:
  		virtual void getarea()=0;
  };
  
  class circle: public shape
  {
  	public:
  	void getarea()
  	{
  		cout<<"enter circle radius"<<endl;
  		int r;
		  cin>>r;
		  cout<<"area of circle"<<(3.14*r*r)<<endl;
	  }
  };
  class triangle:public shape
  {
  	public:
  		void getarea()
  		{
  			cout<<"Enter base and height of triangle"<<endl;
  			int b,h;
  			cin>>b>>h;
  			cout<<"the area of triangle is "<<((b*h)/2)<<endl;
		  }
  };
  int main()
  {
  	
  	circle c1;
  	c1.getarea();
  	triangle t1;
  	t1.getarea();
  	return 0;
  }
