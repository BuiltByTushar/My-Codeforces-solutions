#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x % 2 == 0 && y % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (x % 2 == 0 || y % 2 == 0)
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