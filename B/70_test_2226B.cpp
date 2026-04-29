#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

// Logic here: max - min = gcd(min,max) => diff = gcd(min,max) => diff = gcd(min,max - min) => diff = gcd(min,diff) therefore min % diff = 0

    int t, n, count, mn, mx, diff;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            mn = min(arr[i], arr[i + 1]);
            mx = max(arr[i], arr[i + 1]);

            diff = mx - mn;
            if (mn%diff == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}