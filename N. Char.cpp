#include<bits/stdc++.h> 
using namespace std;
int main()
{ int i;
  char a,output;
   cin>>a;
   if(int(a)>64&&int(a)<91)
      {
        i=int(a)+32;
     cout<< char(i);
      }
   else
     {
         i=int(a)-32;
         cout<< char(i);

     }
   
  
      return 0;
}
 
