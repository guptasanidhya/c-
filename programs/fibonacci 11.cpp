//fibonacci
#include<iostream>
using namespace std;
int main(){

int x;
cout<<"for how much time you need the series"<<endl;
cin>>x;
int a,b,c;
a=0;
b=1;
cout<<a<<b;

for(int i=0;i<=x;i++)
{

c=a+b;
cout<<c;
a=b;
b=c;


}

return 0;
}
