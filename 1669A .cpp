
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 int test_case;
 cin>>test_case;
 for(int i=1;i<=test_case;i++)
 {
  int input;
  cin>>input;
  if(input<=1399)
  {
    cout<<"Division 4"<<endl;
  }
  else if (input>=1400&&input<=1599)
  {
    cout<<"Division 3"<<endl;
  }
  else if(input>=1600&&input<=1899)
  {
    cout<<"Division 2"<<endl;
  }
  else if(input>=1900)
  {
    cout<<"Division 1"<<endl;
  }
 
 } 
 return 0;
}
 
 
 
 
