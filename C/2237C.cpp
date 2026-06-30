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
        vector<long long> arr(n);
        cin >> arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i - 1] > arr[i])
            {
                swap(arr[i - 1], arr[i]);
                arr[i] += arr[i - 1];
            }
        }
        cout << arr[n - 1] << "\n";
    }

    return 0;
}