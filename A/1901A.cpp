#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int cur = 0, max_gas = 0, prev = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> cur;
            max_gas = max(max_gas,cur-prev);
            prev = cur;
        }
        max_gas = max(max_gas,2*(x-prev));
        cout << max_gas << "\n";
    }
    
    return 0;
}