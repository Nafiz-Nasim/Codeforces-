//sort er topic ta ase and 


#include<iostream>
#include<string>
#include<algorithm>
#include<conio.h>
using namespace std;
int main ()
{
  
string name;
int count=0;
cin>>name;
sort(name.begin(),name.end());
for(int i=0;i<name.size();i++)
{
    if(name[i]!=name[i+1])
    {
        count=count+1;
    }

}
if(count%2==0)
{
    cout<<"CHAT WITH HER!";
}
else{
    cout<<"IGNORE HIM!";
}







}