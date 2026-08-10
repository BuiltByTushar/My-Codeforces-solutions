#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// runtime error on test case 6

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) 
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool possible = (n >= 2 * m);
        for (int i = 0; i < m; ++i) 
        {
            if (a[i] >= b[i]) possible = false;
            if (a[n - m + i] <= b[i]) possible = false;
        }
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}