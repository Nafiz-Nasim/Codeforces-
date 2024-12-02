#include <iostream>
using namespace std;
int main()
{

    int test_case, count = 0, is_input_is_notodd = 0;
    cin >> test_case;
    int array[test_case];
    for (int i = 0; i < test_case; i++)
    {
        cin >> array[i];
        if (array[i] % 2 != 0)
        {
            is_input_is_notodd = 1;
        }
    }
    if (is_input_is_notodd != 0)
    {
        cout << "0";
        return 0;
    }

    while (true)
    {
        bool all_even = true;
        for (int i = 0; i < test_case; i++)
        {
            if (array[i] % 2 == 0)
            {
                array[i] = (array[i] / 2);
            }
            else
            {
                cout<<count;
                return 0;
            }
        }
        count = count + 1;
        
    }
    cout << count;
    return 0;
}

