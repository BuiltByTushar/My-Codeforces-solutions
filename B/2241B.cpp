#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        int n = x.size();
        long long y = 1;
        for (int i = 0; i < n; i++)
        {
            y *= 10;
        }
        cout << y + 1 << "\n";
    }

    return 0;
}