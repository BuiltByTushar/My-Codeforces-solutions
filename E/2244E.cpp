#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        string s;
        cin >> s;
        int l, r, k;
        vector<int> arr(n, 0);

        for (int i = 1; i < n ; i++)
        {
            arr[i] = arr[i-1];
            if(s[i] == s[i - 1])
            {
                ++arr[i];
            }
        }
        while (q--)
        {
            cin >> l >> r >> k;
            int diff = arr[r-1] - arr[l-1];

            cout << (((diff + 1) / 2 <= k) ? "YES\n" : "NO\n");
        } 
    }
    return 0;
}