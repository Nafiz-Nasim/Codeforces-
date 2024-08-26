#include<bits/stdc++.h> 
using namespace std;
int main()
{
 int A,B,C,maximum,minimum,mid;
 cin>>A>>B>>C;
 maximum=(min(A,min(B,C)));
 minimum=(max(A,max(B,C)));
 if(maximum&&minimum!=A) mid=A;
 if(maximum&&minimum!=B) mid=B;
 else mid=C;
 cout<<minimum<<endl<<mid<<endl<<maximum<<endl;
 cout<<" "<<endl;
 cout<<A<<endl<<B<<endl<<C<<endl;
 
    return 0;
}
 
