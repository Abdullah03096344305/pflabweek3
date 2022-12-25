#include<iostream>
using namespace std;
main(){
int initialvelocity,finalvelocity,time,accelaration;
cout<<"Enter initial velocity"<<endl;
cin>>initialvelocity;
cout<<"Enter Accelaration"<<endl;
cin>>accelaration;
cout<<"Enter Time"<<endl;
cin>>time;
finalvelocity=(accelaration*time)-initialvelocity;
cout<<"Here's Your Final Velocity:   "<<finalvelocity<<endl;
cout<<"Thanks"<<endl;

}