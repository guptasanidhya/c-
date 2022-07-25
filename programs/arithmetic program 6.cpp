//wap to perform arithmetic operation on 2 number by creating a menu driven program
//addition subtraction multiply division modulo operation
#include<iostream>
using namespace std;
int main()
{
	cout<<"***Aritmetic Operations Program***"<<endl;
	int n;
	int option_no;
	int x,y;
do{
			
	cout<<"\nwhat operation do you want to perform ? select option no . Enter 0 to exit"<<endl;
	cout<<"1.additon"<<endl<<"2.subtraction"<<endl<<"3.multiply"<<endl<<"4.division"<<endl<<"5.modulo"<<endl<<"6.Clear screen";
	cin>>option_no;		
	switch(option_no)
	{
 		case 0:
		 break;	
		case 1: 
		cout<<"enter the two numbers for addition"<<endl;
		cin>>x>>y;
		cout<<"the result of addition is "<<(x+y)<<endl;
		break;
		
		case 2: 
		cout<<"enter the two numbers for subtraction"<<endl;
		cin>>x>>y;
		cout<<"the result of subtraction is "<<(x-y)<<endl;
		break;
		
			case 3: 
		cout<<"enter the two numbers for multiplication"<<endl;
		cin>>x>>y;
		cout<<"the result of multiplication is "<<(x*y)<<endl;
		break;
		
			case 4: 
		cout<<"enter the two numbers for division"<<endl;
		cin>>x>>y;
		cout<<"the result of division is "<<(x/y)<<endl;
		break;
		
			case 5: 
		cout<<"enter the two numbers for modulo operation"<<endl;
		cin>>x>>y;
		cout<<"the result of modulo operation is "<<(x%y)<<endl; 
			case 6:
				system("cls");
				break;
		
		default:
			cout<<"enter the appropiate option no."<<endl;
			
}
}while(option_no!=0);
	return 0;
}
