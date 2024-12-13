#include <bits/stdc++.h>
using namespace std;
int main()
{
string cf="codeforces";
sort(cf.begin(),cf.end());
int test;
cin>>test;
while(test--)
{
 char input;
 cin>>input;
 if(binary_search(cf.begin(),cf.end(),input)) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
  return 0;
}