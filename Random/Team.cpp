#include <iostream>
using namespace std;

int main()
{
    int test, count = 0;
    cin>>test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 & b == 1) || (b == 1 & c == 1)||(c == 1 & a == 1)) count++;
    }
    cout << count;
  
    return 0;
}
