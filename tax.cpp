#include<iostream>
using namespace std;
int tax(string,int);

main()
{
    string name;
    int price;
cout<<"enter vehicle code:";
cin>>name;
cout<<"enter item prce:";
cin>>price;
tax(name,price);

}
int tax(string name,int price)
{
    int tax;
    int fi;
if(name=="m")
{
    
tax=price*(6/100);

}

if(name=="e")
{
   
tax=price*(8/100);

}

if(name=="s")
{
    
tax=price*(10/100);

}

if(name=="v")
{
    
tax=price*(12/100);

}

if(name=="t")
{
    
tax=price*(15/100);

}
fi=price+tax;
cout<<"price after tax="<<fi;

}