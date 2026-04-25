#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long n, m, x, n_odd, n_even;
    int even, odd;
    signed long long sum;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        sum = 0;
        even = 0;
        odd = 0;
        n_even = n / 2;
        n_odd = n - n / 2;
        vector<signed long long> a_even(n_even);
        vector<signed long long> a_odd(n_odd);
        int even_idx = 0, odd_idx = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cin >> a_odd[odd_idx++];
            }
            else
            {
                cin >> a_even[even_idx++];
            }
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        sort(a_odd.rbegin(), a_odd.rend());
        sort(a_even.rbegin(), a_even.rend());
        for (int i = 0; i < n_even; i++)
        {
            if (a_even[i] >= 0 && even != 0)
            {
                even--;
            }
            else if (a_even[0] < 0 && even != 0)
            {
                even = 0;
            }
            else
            {
                sum += a_even[i];
            }
        }
        for (int i = 0; i < n_odd; i++)
        {
            if (a_odd[i] >= 0 && odd != 0)
            {
                odd--;
            }
            else if (a_odd[0] < 0 && odd != 0)
            {
                odd = 0;
            }
            else
            {
                sum += a_odd[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}