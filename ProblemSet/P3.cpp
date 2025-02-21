#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, ProbSol = 0;

    cin >> n;
    int **arr = new int *[n];

    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[3];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        ProbSol = 0;
        
        for (int j = 0; j < 3; j++)
        {

            if (arr[i][j] == 1)
            {
                ProbSol++;
            }
        }

        if (ProbSol >= 2)
        {
            count++;
        }
    }


    cout << count << "\n";

    delete[] arr;

    return 0;
}