#include<iostream>
using namespace std;
main(){
int a,b,c,d,e,f,g,no;

cout<<"Enter a Number"<<endl;
cin>> a ;
no=a%10;
b=a/10;
c=b%10;
d=b/10;
e=d%10;
f=d/10;
g=no+c+e+f;

cout<<"SUM:   "<<g<<endl;
}