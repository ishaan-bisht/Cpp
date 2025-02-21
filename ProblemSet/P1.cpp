#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;  // Read the weight of the watermelon

    // Check if the weight is even and greater than 2
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}