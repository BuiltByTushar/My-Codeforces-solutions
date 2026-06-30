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
        long long n;
        cin >> n;
        long long result = 0;
        for (long long i = 0; i < n; ++i)
        {
            long long k = n / (i + 1);
            result += k * k;
        }
        cout << result << '\n';
    }

    return 0;
}