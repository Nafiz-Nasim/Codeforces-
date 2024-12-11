#include <bits/stdc++.h>
using namespace std;
int main()
{
string input;
int sum=0;
getline(cin,input);
for(int i=0;i<input.size();i++)
{
sum=sum+(input[i]-'0');
}
cout<<sum;
return 0;
}
