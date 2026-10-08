#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, int> mp;
        long long result = 0;
        for (int i = 0; i < n - 4; i++)
        {
            int key = arr[i] + arr[i + 2] - arr[i + 4];
            result += mp[key];
            if (i >= 2)
            {
                int prev = arr[i - 2] + arr[i] - arr[i + 2];
                if (prev == key)
                {
                    result--;
                }
            }
            if (i >= 4)
            {
                int prev = arr[i - 4] + arr[i - 2] - arr[i];
                if (prev == key)
                {
                    result--;
                }
            }
            mp[key]++;
        }
        cout << result << "\n";
    }
    return 0;
}