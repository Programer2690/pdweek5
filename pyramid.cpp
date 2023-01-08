#include<iostream>
using namespace std;
int formula(int,int,int,string);


main()
{
    int width,height,length;
    
    string name;
cout<<"enter length in metres:";
cin>>length;
cout<<"enter width in meters:";
cin>>width;
cout<<"enter height in meters:";
cin>>height;
cout<<"enter desire unit:";
cin>>name;
formula(length,height,width,name);
}

int formula(int length,int height,int width,string name)
{
float calcu;
int result;
calcu=(length*width*height)/3;
if(name=="cm")
{
   result=calcu*1000000;
   cout<<"volume in centimetres:"<<result;
}
if(name=="mm")
{
   result=calcu*1000000000;
   cout<<"volume in millimeters:"<<result;
}
if(name=="km")
{
   result=calcu/1000000000;
   cout<<"volume in kilometers:"<<result;
}
  return result;


}
