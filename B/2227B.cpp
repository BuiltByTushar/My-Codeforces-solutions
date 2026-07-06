#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, count;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if (count == 0)
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