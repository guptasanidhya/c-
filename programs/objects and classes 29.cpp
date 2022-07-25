#include<iostream>
#include<string>
using namespace std;
class Cars{
	private:
	string company_name;
	string model_name;
	string fuel_type;
	float mileage;
	double price;
	
	public:
		void setData(string cname,string mname,string ftype,float m ,double p)
		{
			company_name=cname;
			model_name=mname;
			fuel_type=ftype;
			mileage=m;
			price=p;
		}
		
		void displayData()
		{
			cout<<"car properties"<<endl<<endl;
			cout<<"Car Comapany name"<<company_name<<endl;
			cout<<"Car COmpany model "<<model_name<<endl;
			cout<<"Car fuel type "<<fuel_type<<endl;
			cout<<"Car Mileage"<<mileage<<endl;
			cout<<"Car Price"<<price<<endl;
		}
};
int main()
{
	Cars c1;
	c1.setData("Lamborghini","venovo","diesal",20,110000000);
	c1.displayData();
	return 0;
}
