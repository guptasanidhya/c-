#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char data[100];


	ofstream tshirt;
	tshirt.open("tshirt.txt",ios::app);
	cout<<"CREATING A FILE"<<endl;
	cout<<"Enter tshirt size and name"<<endl;
	
 cin.getline(data,100);
	tshirt<<data<<endl;
	cout<<"Data Inserted"<<endl;
	tshirt.close();

ifstream tshirts;
//char data1[100];
tshirts.open("tshirt.txt");
	while (!tshirts.eof()) {
      tshirts.getline(data, 100);
      cout << data << endl;
   }
//	cout<<"tshirt no. and name"<<data<<endl;
	cout<<"data Showed on screen"<<endl;
	tshirts.close();
	
	
	
	return 0;
}
