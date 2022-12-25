#include<iostream>
using namespace std;
main(){
int size,cost,area,totalcost,squarecost;


cout<<"Enter the Size of Fertilizer Bag in Pounds:  "<<endl;
cin>>size;
cout<<"Write the cost the bag:  "<<endl;
cin>>cost;
cout<<"Write the area in square feet:  "<<endl;
cin>>area;
totalcost=cost/size;
squarecost=area*size;
cout<<"___________________________________________"<<endl;
cout<<"cost of fertilizer per pound:  "<<totalcost<<endl;
cout<<"cost of fertilizing the area per square feet:  "<<squarecost<<endl;
}