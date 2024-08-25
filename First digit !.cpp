#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 int number,digit,final_digit;
 cin>>number;
 while(number!=0)
 {

    digit=number%10;
    number=number/10;
  final_digit=digit;
 }
  if(final_digit%2==0)
{
    cout<<"EVEN";
}
else cout<<"ODD";

 







}
