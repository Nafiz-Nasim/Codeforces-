#include<bits/stdc++.h>
 
using namespace std;
int main()
{
int discount,discount_price;
float real_price;
cin>>discount>>discount_price;
real_price= discount_price / (1-(discount/100.0));
cout<<real_price;
 
 
return 0;
 
 
 
 
 
 
 
}
