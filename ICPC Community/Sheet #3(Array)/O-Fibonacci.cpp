#include <iostream>
using namespace std;
 
int main()
{
 
    long long int num, next = 0;
    cin >> num;
     long long int feb1 = 0, feb2 = 1;
    if (num == 1)
        cout << feb1;
    else if (num == 2)
        cout << feb2;
    else
    {
        for (int i = 3; i <= num; i++)
        {
            next = feb1 + feb2;
            feb1 = feb2;
            feb2 = next;
            if (i == num)
            {
                cout << next;
            }
        }
    }
} 