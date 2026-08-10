#include <iostream>
#include <vector>
#include <algorithm>
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
        int len = 2 * n;
        vector<int> arr(len + 1);
        vector<int> index(n + 1, 0);
        vector<int> partner(len + 1, 0);

        for (int i = 1; i <= len; ++i) {
            cin >> arr[i];
            if (index[arr[i]] == 0) {
                index[arr[i]] = i;
            } else {
                partner[i] = index[arr[i]];
            }
        }

        vector<long long> dp(len + 1, 0);

        for (int i = 1; i <= len; ++i) 
        {
            dp[i] = max(dp[i], dp[i - 1] + 1);
            if (partner[i] != 0) 
            {
                int j = partner[i];
                long long range_len = i - j + 1;
                dp[i] = max(dp[i], dp[j - 1] + range_len * range_len);
            }
        }
        cout << dp[len] << "\n";
    }
    return 0;
}