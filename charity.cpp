#include<iostream>
using namespace std;
main(){
string moviename;
int adultprice,childprice,aticketsold,cticketsold,charitypercentage,donation,total;
cout<<"  Enter movie name:  "<<endl;
cin>> moviename;
cout<<"Enter Adult Ticket price" <<endl;
cin>>adultprice;
cout<<"Enter Child Ticket price: " <<endl;
cin>>childprice;
cout<<"Number of Adult Ticket Sold: " <<endl;
cin>>aticketsold;
cout<<"Number of Child Ticket Sold: " <<endl;
cin>>cticketsold;
cout<<"Enter Percentage to Donate: " <<endl;
cin>>charitypercentage;
cout<<"__________________________________________" <<endl;

total=(adultprice*aticketsold)+(childprice*cticketsold);
donation=(total*charitypercentage)-total;
cout<<"TOTAL AMOUNT GENERATED:  " <<total <<endl;
cout<<"AMOUNT AFTER DONATION:  " <<donation <<endl;
}