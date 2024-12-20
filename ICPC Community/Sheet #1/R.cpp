#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int b = a / 365;
    a = a % 365;
    int c = a / 30;
    int d = a % 30;

    cout << b << " years" << endl;
    cout << c << " months" << endl;
    cout << d << " days" << endl;


    return 0;
}
