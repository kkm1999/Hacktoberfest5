//C++ program for SALES BAR CHART


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int profit1;
int profit2;
int profit3;
char star;
int store;
cout << "Enter today's sale for store 1: " << endl;
cin >>profit1;
cout << "Enter today's sale for store 2: " << endl;
cin >> profit2;
cout << "Enter today's sale for store 3: " << endl;
cin >> profit3;
if ( profit1< profit2 &&profit3 > profit2||profit3 < profit2 && profit1 > profit2 )
cout<<profit1;
if ( profit1< profit2 &&profit3 > profit2||profit3 < profit2 && profit1 > profit2 )
cout<<profit1;
if (profit2 < profit3 && profit1 > profit3 || profit1 < profit3 && profit2 > profit3) 
cout<<profit2;
if (profit3 < profit1 && profit2 > profit1 ||profit2 < profit1 && profit3 > profit1)
cout<<profit3;
if(profit1<=0){
cout <<"0 profit is not allowed!!";}
star= profit1/100;
cout<<"store 1 is"<<endl;
for (int i = 0; i<=star; i++)
{cout <<"*";}
cout<<"\n";
if(profit2<=0){
cout <<"0 profit is not allowed!!"<<endl;}
star= profit2/100;
cout<<"store 2 is:"<<endl;
for (int i = 0; i<=star; i++)
{cout <<"*";}
cout<<"\n";
if(profit3<=0){
cout <<"0 profit is not allowed!!";}
star= profit3/100;
cout<<"store 3 is:"<<end;
for (int i = 0; i<=star; i++)
{cout <<"*";}
cout<<"\n";
return 0;
}