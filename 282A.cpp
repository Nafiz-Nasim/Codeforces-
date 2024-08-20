//string controling
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
string name;
int i, number,value_for_X=0;
 cin>>number;
 for (i=1;i<=number;i++)
 {
   cin>>name;
   if(name=="X++" || name=="++X")
   {
    value_for_X++;
   }
   else{
    value_for_X--;
   }
     
 }
 
    cout<<value_for_X<<endl;







    getchar();

}
