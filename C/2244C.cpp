#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        int g = gcd(x, y), temp = 0, flag = 1;

        for(int i = 0; i < n; ++i)
        {
            cin >> temp;
            if (i % g != (temp - 1) % g)    flag = 0;
        }
        cout << (flag ? "YES\n":"NO\n");
    }
    
    return 0;
}