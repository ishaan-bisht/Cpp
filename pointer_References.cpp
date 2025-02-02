#include <iostream>
using namespace std;

#define LOG(x) cout << x << "\n";

int main() {
    int a = 5;
    int& ref = a;
    LOG(ref);
    return 0;
}