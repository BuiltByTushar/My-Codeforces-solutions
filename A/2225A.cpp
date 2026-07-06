#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (y / x == 2)
        {
            cout << "NO\n";
            continue;   
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}