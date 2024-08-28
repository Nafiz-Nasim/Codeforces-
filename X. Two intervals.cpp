#include <iostream>
using namespace std;

int main() {
    // Input the boundaries of the two intervals
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    // Calculate the intersection
    int start = max(l1, l2); // Maximum of the two starting points
    int end = min(r1, r2);   // Minimum of the two ending points
    
    // Check if there is an intersection
    if (start <= end) {
        cout << start << " " << end << endl; // Print the boundaries of the intersection
    } else {
        cout << -1 << endl; // No intersection
    }

    return 0;
}
