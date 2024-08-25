#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 char S;
 int a,b;
 int output;
 cin>>a>>S>>b;

 switch (S)
 {
 case '+':
 output=a+b;
 cout<<output;
 break;
  case '-':
 output=a-b;
 cout<<output;
 break;
  case '*':
 output=a*b;
 cout<<output;
 break;
  case '/':
 output=a/b;
 cout<<output;
 break;

 default:
    break;
 }









}
