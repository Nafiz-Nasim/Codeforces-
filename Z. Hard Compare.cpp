//Z
#include<bits/stdc++.h> 
using namespace std;
int main()
{
  long long int a,b,c,d,pow1,pow2;
 cin>>a>>b>>c>>d;
 pow1=pow(a,b);
 pow2=pow(c,d);
 if(b*log(a)>d*log(c)) cout<<"YES";
 else cout<<"NO";
    return 0;
}
 
