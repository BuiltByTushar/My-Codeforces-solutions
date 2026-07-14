#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        long long result = 0;
        int prev = 0;

        for (int i = 0; i < m; i++)
        {
            long long s = 0;

            for (int j = prev; j < b[i]; j++)
                s += a[j];

            result += abs(s);
            prev = b[i];
        }

        long long s = 0;
        for (int i = prev; i < n; i++)
            s += a[i];

        result += s;

        cout << result << '\n';
    }
    
    return 0;
}