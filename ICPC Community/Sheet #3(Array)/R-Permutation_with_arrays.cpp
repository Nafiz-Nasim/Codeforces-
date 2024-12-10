#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int>input1(n);
 for(int i=0;i<n;i++){
    cin>>input1[i];
 }
 vector<int>input2(n);
 for(int i=0;i<n;i++){
    cin>>input2[i];
 }
 sort(input1.begin(),input1.end());
 sort(input2.begin(),input2.end());
if(input1==input2) cout<<"yes";
else cout<<"no";
}