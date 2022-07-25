#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fp;
	char buf[100];
	int pos;
	
	//open a file in write with'ate'flag
	fp.open("random.txt",ios::out|ios::ate);
	cout<<"\nWriting to a file ..."<<endl;
	fp<<"This is a line"<<endl;//write a line to a file	
	fp<<"this is another line"<<endl;//write another line to a file
	pos=fp.tellp();
	cout<<"current postion of put pointer:"<<pos<<endl;
//move the pointer 10 bytes backward from current position
fp.seekp(-10,ios::cur);
fp<<endl<<"writing at random location";
//move the pointer 7 bytes forward from beginning position
fp.seekp(7,ios::beg);
fp<<"hello world";
fp.close();
cout<<"writing Complete ..."<<endl;
//open a file in read mode with 'ate' flag
fp.open("random.txt",ios::in|ios::ate);
cout<<"\nReading from the file ..."<<endl;
fp.seekg(0);//MOVE THE GET POINTER TO THE BEGINNING
//READ ALL CONTENTS TILL THE END OF FILE
while(!fp.eof())
{
	fp.getline(buf,100);
	cout<<buf<<endl;
}
pos=fp.tellg();
cout<<"\ncurrent position of get pointer :"<<pos<<endl;
return 0;
}
