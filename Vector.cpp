#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> num = {1, 2, 3, 4, 5};

    for(int i : num){
        cout << i << "\n";
    }

    return 0;
}