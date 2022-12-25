#include<iostream>
using namespace std;
main(){
float veg,fruit,convert,earning,tearning;
int tkgveg,tkgfruit;
float rupees=1.94;
cout<<"vegetable price per kilogram:"<<endl;
cin>>veg;
cout<<"fruits price per kilogram:"<<endl;
cin>>fruit;
cout<<"total kilogram of vegetables:"<<endl;
cin>>tkgveg;
cout<<"total kilogram of Fruits:"<<endl;
cin>>tkgfruit;
convert=earning*rupees;
earning=(veg*tkgveg)+(fruit*tkgfruit);
cout<<"Earning of all fruits and vegetables in rps: "<<earning<<endl;
tearning=earning/1.94;
cout<<tearning;
}