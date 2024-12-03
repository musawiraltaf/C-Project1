//Musawir Altaf Khan 24i-2134 Cy-A assignment 2
#include<iostream>
using namespace std;
int main()
        {
         float palletw,widgetw=9.20,ttlw;
          cout<<"Enter the weight of Pallet in pounds: ";
         cin>>palletw;
          cout<<"Enter the Total weight in Pounds: ";
         cin>>ttlw;
          cout<<"The number of widgets are: "<<(ttlw-palletw)/widgetw;
return 0;
        }