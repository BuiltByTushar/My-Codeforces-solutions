#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, result = INT_MAX;
        cin >> n;
        int prev, cur;
        cin >> prev;
        for (int i = 1; i < n; i++)
        {
            cin >> cur;
            result = min(cur-prev,result);
            prev = cur;
        }
        cout << (result >= 0 ? result/2+1:0) << "\n";
    }
    return 0;
}