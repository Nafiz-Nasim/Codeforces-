#include <bits/stdc++.h>
using namespace std;
int main()
{
 string input1,input2;
 getline(cin,input1);
 getline(cin,input2);
int len_0fInput1=input1.size();
int len_of_input2=input2.size();
cout<<len_0fInput1<<" "<<len_of_input2<<endl;
cout<<input1<<input2<<endl;;
string newstring=input1+input2;
swap(newstring[0],newstring[len_0fInput1]);
cout<<newstring.substr(0,len_0fInput1)<<" "<<newstring.substr(len_0fInput1,newstring.size());
return 0;
}