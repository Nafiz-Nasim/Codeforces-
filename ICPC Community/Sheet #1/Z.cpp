#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double log_a_b = b * log(a);
    double log_c_d = d * log(c);
    
    if (log_a_b > log_c_d) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    
    
    return 0;
}
