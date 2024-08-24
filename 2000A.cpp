#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
  string number;
  int test_case;
  cin>>test_case;
  getchar();
   for(int i=1;i<= test_case;i++)
   {
        cin>>number;
        
          if( number.size()==2)
            {
                cout<<"NO"<<endl;
            }
          else if( number.size()==3)
            {
            if(number[0]=='1' &&number[1]=='0' &&number[2]!='1'&&number[2]!='0')
            {
              cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            }
           else if( number.size()>3)
            {
                if(number[0]=='1' &&number[1]=='0' &&number[2]!='0')
                {
                       cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else cout<<"No"<<endl;
            
 
 
 
     }
   }
