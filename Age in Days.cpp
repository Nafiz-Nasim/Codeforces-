#include<bits/stdc++.h> 
using namespace std;
int main()
{
 int input,months,days,years,dm;
 cin>>input;
years=input/365;
cout<<years<<" "<<"years"<<endl;
dm=input%365;
months=dm/30;
cout<<months<<" "<<"months"<<endl;
days=dm%30;
cout<<days<<" "<<"days"<<endl;
    return 0;
}
 
