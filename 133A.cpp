
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
  int a=0;
  string input; 
  getline(cin,input);
for(int i=0;i<input.size();i++ )
{
   
  if(input[i]=='H'||input[i]=='Q'||input[i]=='9')
  {
   a++;
  }
}
if(a>0) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

return 0;
}
