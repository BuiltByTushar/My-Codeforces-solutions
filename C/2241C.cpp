#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        int count_trans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                count_trans++;
            }
        }
        if (count_trans == 1)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << 1 << "\n";
        }
    }

    return 0;
}
