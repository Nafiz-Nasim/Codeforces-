#include<iostream>
using namespace std;
int main()
{
  int test_case,a,b,c,d;
  cin>>test_case;
  for(int i=1;i<=test_case;i++)
  {
 cin>>a>>b>>c>>d;
int output=0;
        if(b > a) output++;
        if(c > a) output++;
        if(d > a) output++;
        
        
cout<<output<<endl;

}
return 0;
}
