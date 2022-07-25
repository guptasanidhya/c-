#include<iostream>
using namespace std;

class complexnumber{
	private:
		int real;
		float imaginary;
		public:
			complexnumber(){
				
			}
			complexnumber(int r,float i){
				real=r;
				imaginary=i;
			}
			void Displaydata()
			{
				cout<<"COmplex no.="<<real<<"+"<<imaginary<<"i"<<endl;
			}
//			int getreal()
//			{
//				return real;
//			}
//			float getimaginary()
//			{
//				return imaginary;
//			}
			void add(complexnumber n1,complexnumber n2)
{
	real=n1.real+n2.real;
	imaginary=n1.imaginary+n2.imaginary;
}

};

//complexnumber add(complexnumber n1,complexnumber n2)
//{
//	int r=n1.getreal()+n2.getreal();
//	float i=n1.getimaginary()+n2.getimaginary();
//	 complexnumber temp( r, i);
//	 return temp;
//}
int main()
{
	complexnumber comp1(3,4),comp2(5,4),comp3;
	comp1.Displaydata();
	comp2.Displaydata();
	comp3.add(comp1,comp2);
	comp3.Displaydata();
	complexnumber *ptr;
	cout<<"Via Pointer"<<endl;
	ptr=&comp3;
	ptr->Displaydata();
	return 0;
}
