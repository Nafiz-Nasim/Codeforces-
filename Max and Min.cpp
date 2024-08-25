#include<bits/stdc++.h>
 
using namespace std;
int main()
{
 
int a,b,c,maximum,minimum;
    cin>>a>>b>>c;
minimum=min(a, min(b,c));
maximum=max(a, max(b,c));

cout<<minimum<<" "<<maximum;
    
    return 0;
}
 
 
 
 
