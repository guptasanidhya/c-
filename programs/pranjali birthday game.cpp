#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
//**PRANJALI_MISHRA*//
using namespace std;
void display();
main( )
{
system("color 3f");
display();
int month,date;
int colour;
cout<<"_Birthday Game_\n\n\n";
do
{
cout<<"Enter your birth month in number : ";
cin>>month;
if((month>=1)&&(month<=12))
break;
else
cout<<"Invalid Input..."<<endl;
}
 while(1);
do
{
cout<<"Enter your birth date : ";
cin>>date;
if(month==2) //used to tackle february month problem
{
if((date>=1)&&(date<=29))
break;
else
cout<<"Invalid Input..."<<endl;
}
else if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
{
if((date>=1)&&(date<=31))
break;
else
cout<<"Invalid Input..."<<endl;
}
else
{
if((date>=1)&&(date<=30))
break;
else
cout<<"Invalid Input..."<<endl;
}

} 
while(1);
cout<<"\n\nColour"<<"===="<<"Code"<<endl
<<"\nWhite\t=0"<<endl
<<"Black\t=1"<<endl
<<"Brown\t=2"<<endl
<<"Pink\t=3"<<endl
<<"Red\t=4"<<endl
<<"Blue\t=5"<<endl
<<"Green\t=6"<<endl
<<"Purple\t=7"<<endl
<<"Grey\t=8"<<endl
<<"Yellow\t=9"<<endl
<<"Orange\t=10"<<endl
<<"Other\t=11"<<endl;
do
{
cout<<"\n\nEnter the code of your shirt's colour that you are wearing now = ";
cin>>colour;
if((colour>=0)&&(colour<=11))
break;
else
cout<<"Invalid Input";
} 
while(1);
cout<<"\n\n\nYour statement according to your info is:\n\n";
cout<<endl;

if(month==1)
cout<<"I like";
else 
if(month==2)
cout<<"I love";
else
 if(month==3)
cout<<"I should do ";
else 
if(month==4)
cout<<"I want to";
else if(month==5)
cout<<"I'm intrested in";
else
 if(month==6)
cout<<"I feel good after";
else if(month==7)
cout<<"I love to";
else
 if(month==8)
cout<<"I want an";
else
 if(month==9)
cout<<"I should do";
else 
if(month==10)
cout<<"I don't like'";
else if(month==11)
cout<<"I have to";
else
cout<<"I feel";
if(date==1)
cout<<" a fuits";
else
if(date==2)
cout<<" a milk";
if(date==3)
cout<<" a banana";
if(date==4)
cout<<" a apple";
else
 if(date==5)
cout<<" a guava";
else 
if(date==6)
cout<<" a bird";
else 
if(date==7)
cout<<" a piano";
else 
if(date==8)
cout<<" an ipod";
else
 if(date==9)
cout<<" take an dog";
else
 if(date==10)
cout<<" a goat";
else
 if(date==11)
cout<<" my dog";
else
 if(date==12)
cout<<" my dad";
else 
if(date==13)
cout<<" the computer";
else 
if(date==14)
cout<<" a football game";
else
 if(date==15)
cout<<" bts";
else 
if(date==16)
cout<<" myself";
else 
if(date==17)
cout<<" that songs";
else if(date==18)
cout<<" that bird ";
else 
if(date==19)
cout<<" animal";
else
if(date==20)
cout<<" guitar";
else
 if(date==21)
cout<<"  photography";
else
 if(date==22)
cout<<" watching movie ";
else
 if(date==23)
cout<<" to  dance";
else
 if(date==24)
cout<<" reading books";
else
 if(date==25)
cout<<" honest people";
else
 if(date==26)
cout<<" my brother";
else
 if(date==27)
cout<<" my sister";
else
 if(date==28)
cout<<" bts new album";
else
 if(date==29)
cout<<" my white rat";
else
 if(date==30)
cout<<" my phone";
else
cout<<" my hair";
if(colour==0)
cout<<" because it is wonderful."<<endl;
else 
if(colour==1)
cout<<" because it is nice."<<endl;
else 
if(colour==2)
cout<<" because they are perfect."<<endl;
else
 if(colour==3)
cout<<" because it feels me good."<<endl;
else 
if(colour==4)
cout<<" because it make me happy."<<endl;
else
 if(colour==5)
cout<<" because it feel nice to do."<<endl;
else
 if(colour==6)
cout<<" because I love it."<<endl;
else
 if(colour==7)
cout<<" because I feel good."<<endl;
else
 if(colour==8)
cout<<" because it makes me happy."<<endl;
else
 if(colour==9)
cout<<" because it is nice."<<endl;
else
 if(colour==10)cout<<" because I love my family."<<endl;
else
cout<<" because it is nice."<<endl;
cout<<endl<<endl;
system("pause");
return 0;
}   
void display()
{		
		
string var="            \n=========================================================================================="
                        "\n  GGGGG           A           M      M      EEEEEE     "
                       " \n GG             A   A         M   M  M      E           "
                       " \nGG      GGG    A      A       M   M  M      EEEEEE        "
                        "\n GG    G    G  AAAAAAAA       M      M      E            "
                       " \n   GGGG    G  A        A      M      M      EEEEEE        "
                        "\n===============================================================================================\n"
                        "\n***submitted to___VASANTI_DUTTA_MAM**\n"
                        "\n=======================Designed by PRANJALI_MISHRA_==========================\n"
                                 "\n***THANK_YOU**\n";
 for(int i=0;i<var.size();i++)
{
 	Sleep(15);
 	cout<<var[i];
 }
}
