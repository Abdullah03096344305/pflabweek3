#include<iostream>
using namespace std;
main(){
string name;
int sub1,sub2,sub3,sub4,sub5,sum,percentage;
int total=500;
cout<<" Enter Your Name"<<endl;
cin>>name;
cout<<"Enter Subject 1 Marks:   "<<endl;
cin>>sub1;
cout<<"Enter Subject 2 Marks:   "<<endl;
cin>>sub2;

cout<<"Enter Subject 3 Marks:   "<<endl;
cin>>sub3;

cout<<"Enter Subject 4 Marks:   "<<endl;
cin>>sub4;

cout<<"Enter Subject 5 Marks:   "<<endl;
cin>>sub5;

sum=sub1+sub2+sub3+sub4+sub5;
percentage=(sum*100)/total;
cout<<"Your Name Is:  "<<name<<endl;
cout<<"Your percentage Is:  "<<percentage<<"%"<<endl;
}