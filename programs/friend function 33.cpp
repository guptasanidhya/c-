#include<iostream>
using namespace std;
class Distance
{
	private:
		int meters;
	public:
			Distance()
			{
				meters=0;
			}
			void displaydata()
			{
				cout<<"meters value"<<meters<<endl;
			}
		friend void add(Distance &d);
			
};

void add(Distance &d){
				d.meters=d.meters+5;
		}
			
			int main()
			{
				Distance d;
				d.displaydata();
			add(d);
			d.displaydata();
				return 0;
			}
