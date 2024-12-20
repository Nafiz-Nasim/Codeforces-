#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int firstDigit = a / 1000;
    

    
    if (firstDigit % 2 == 0) {
        cout << "EVEN";
    } else {
        cout << "ODD";
    }

    return 0;
}
