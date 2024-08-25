#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 
char a;
int ascii_value;
cin>>a;
ascii_value=a;
if(ascii_value>=48&& ascii_value<=57) cout<<"IS DIGIT";
else if(ascii_value>=65&&ascii_value<=90) cout<<"ALPHA"<<endl<<"IS CAPITAL";
else if(ascii_value>=97&&ascii_value<=122)cout<<"ALPHA"<<endl<<"IS SMALLL";
    
    return 0;
}
 
 
 
 
