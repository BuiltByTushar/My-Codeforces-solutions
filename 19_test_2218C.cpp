#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(3 * n);
        for (int i = 1; i <= 3 * n; i++)
        {
            if (i % 3 == 1)
            {
                arr[i - 1] = i / 3 + 1;
            }
            else if (i % 3 == 2)
            {
                arr[i - 1] = n + 2 * (i + 1) / 3 - 1;
            }
            else
            {
                arr[i - 1] = n + 2 * i / 3;
            }
        }
        for (int i = 0; i < 3 * n; i++)
        {
            cout << arr.at(i) << " \n"[i == 3*n-1];
        }
    }
    return 0;
}