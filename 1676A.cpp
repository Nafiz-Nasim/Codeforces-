
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
  int test_case,a,b;
  string number;
  cin>>test_case;
  getchar();
  for(int i=1;i<=test_case;i++)
  { 
    getline(cin,number);
    a=number[0]+number[1]+number[2];
    b=number[3]+number[4]+number[5];
   if (a==b) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;




  }




return 0;
}
