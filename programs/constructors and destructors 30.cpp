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
		
		Cars()
		{
			company_name="toyota";
			
		}
		
		Cars(string cname,string mname,string ftype,float m ,double p)
		{
			company_name=cname;
			model_name=mname;
			fuel_type=ftype;
			mileage=m;
			price=p;
		}
		
		Cars(Cars &obj)
		{
			company_name=obj.company_name;
			model_name=obj.model_name;
			fuel_type=obj.fuel_type;
			mileage=obj.mileage;
			price=obj.price;
			
		}
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
		
		~Cars()
		{
			cout<<"destructor Called"<<endl;
		}
};
int main()
{
	Cars c1,c2("Vondarer","vesta","diesel",10,15000000);
	
	c1.setData("Lamborghini","venovo","diesal",20,110000000);
	c1.displayData();
	c2.displayData();
	Cars c3=c1;
	c3.displayData();
	return 0;
}
