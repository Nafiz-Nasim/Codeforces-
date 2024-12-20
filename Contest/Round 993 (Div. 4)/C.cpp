#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int c1 = min(a, b);
        int c2 = min(a, c);

        int rc1 = a - c1;
        int rc2 = a - c2;
        int total_r = rc1 + rc2;
        int c3 = min(d, total_r);
        int total_seat = c1 + c2 + c3;
        cout << total_seat << endl;
    }

    return 0;
}