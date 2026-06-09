#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        if (3 * a > b)
        {
            if (n % 3 == 0)
            {
                cout << n / 3 * b << "\n";
            }
            else if (n % 3 == 1 && a >= b)
            {
                cout << (n / 3 + 1) * b << "\n";
            }
            else if (n % 3 == 1)
            {
                cout << (n / 3) * b + a << "\n";
            }
            else if (n % 3 == 2 && 2 * a >= b)
            {
                cout << (n / 3 + 1) * b << "\n";
            }
            else
            {
                cout << (n / 3) * b + 2 * a << "\n";
            }
        }
        else
        {
            cout << n * a << "\n";
        }
    }

    return 0;
}