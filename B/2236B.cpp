#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> s;

        vector<int> counts(k, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                counts[i % k]++;
            }
        }

        bool possible = true;
        for (int i = 0; i < k; i++) {
            if (counts[i] % 2 != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}