#include<bits/stdc++.h> 
using namespace std;
int main()
{
 int A,B,C,maximum,minimum,mid;
 cin>>A>>B>>C;
  minimum=(min(A,min(B,C)));
 maximum=(max(A,max(B,C)));
  mid=A+B+C-maximum-minimum;
 cout<<minimum<<endl<<mid<<endl<<maximum<<endl;
 cout<<endl;
 cout<<A<<endl<<B<<endl<<C<<endl;
 
    return 0;
}
 
