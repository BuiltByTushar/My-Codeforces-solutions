#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES\n";
            continue;
        }
        if (n < 3)
        {
            cout << "NO\n";
            continue;
        }
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << (a == b ? "YES\n" : "NO\n");
            continue;
        }

        int a1 = 0, a0 = 0, b1 = 0, b0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (i & 1)
                    a0++;
                else
                    a1++;
            }
            if (b[i] == '1')
            {
                if (i & 1)
                    b0++;
                else
                    b1++;
            }
        }
        cout << ((a1 == b1 && a0 == b0) ? "YES\n" : "NO\n");
    }

    return 0;
}