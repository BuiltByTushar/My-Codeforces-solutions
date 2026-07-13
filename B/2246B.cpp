#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1) 
        {
            cout << 1 << '\n';
        }
        else if (n == 2) 
        {
            cout << -1 << '\n';
        }
        else 
        {
            cout << "1 2 3";
            long long x = 6;

            for (int i = 4; i <= n; i++) 
            {
                cout << " " << x;
                x *= 2;
            }       
            cout << '\n';
        }
    }
    return 0;
}