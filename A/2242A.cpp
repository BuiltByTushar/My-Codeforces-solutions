#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        vector<int> arr(k);
        int max_freq = 0, count_2_greater = 0;
        for (int &x : arr)
        {
            cin >> x;
            max_freq = max(max_freq, x);
            if (x >= 2)
                ++count_2_greater;
        }
        if (max_freq >= 3)
        {
            cout << "YES\n";
            continue;
        }
        if (k == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (count_2_greater >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}