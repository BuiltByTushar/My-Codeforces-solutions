#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    arr[j] = arr[i];
                }
            }
            result += arr[i];
        }
        result += arr[n - 1];
        cout << result << "\n";
    }

    return 0;
}