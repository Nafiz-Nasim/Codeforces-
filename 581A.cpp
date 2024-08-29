
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 int a,b,different_socks,same_socks;
 cin>>a>>b;
 if(a>b)
 {
 different_socks=b;
 int ds=a-b;
 same_socks=ds/2;
 }
 else 
 {
 different_socks=a;
 int ss=b-a;
 same_socks=ss/2;
 }

 cout<< different_socks<<" "<<same_socks;
 return 0;
}
 
 
 
 
