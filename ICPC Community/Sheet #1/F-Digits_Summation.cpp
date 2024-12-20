#include <bits/stdc++.h>
using namespace std;
int main()
{
     long long int n, m;
    long long int digit_of_n, digit_of_m;
    cin >> n >> m;
    digit_of_n = n % 10;
    digit_of_m = m % 10;
    int sum = digit_of_m + digit_of_n;
    cout << sum;
    return 0;
}