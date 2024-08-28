#include<bits/stdc++.h> 
using namespace std;
int main()
{
int a,b,c,sum,d,mul;
char s1,s2;
cin>>a>>s1>>b>>s2>>c;
switch (s1)
{
case '+' :
 sum=a+b;
if(sum==c) cout<<"Yes";
else cout<<sum;
    break;
case '-' :
 d=a-b;
if(d==c) cout<<"Yes";
else cout<<d;
    break;
case '*' :
  mul=a*b;
if(mul==c) cout<<"Yes";
else cout<<mul;
    break;

default:
    break;
}

    return 0;
}
 
