#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, element;
    cin >> size;
    cin >> element;
vector<int>input(size);
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    while (element--)
    {
        int a;
        cin >> a;
        if(binary_search(input.begin(),input.end(),a)) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}