#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
string name;
int time,i,length,new_length;
cin>>time;
getchar();
for(i=1;i<=time;i++)
 {
getline(cin,name);
length= name.size();
if(length>10)
 {
new_length=length-2;
cout<<name[0]<<new_length<<name[length-1]<<endl;
 }
 else
 {

  cout<<name<<endl;
 }
 }














  getchar();

}

