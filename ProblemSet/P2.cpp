#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> w(n);

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (w[i].length() > 10)
        {
            cout << w[i][0] << w[i].length() - 2 << w[i][w[i].length() - 1] << "\n";
        }
        else
        {
            cout << w[i] << "\n";
        }
    }

    return 0;
}