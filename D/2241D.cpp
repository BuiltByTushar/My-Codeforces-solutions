#include <iostream>
#include <vector>
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
        vector<long long> arr(n);
        vector<long long> diff(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = true;
        for (long long i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            diff[i] = temp - arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (diff[i] < 0)
            {
                flag = false;
                break;
            }
            diff[i + 1] += diff[i];
        }

        if (flag && diff[n - 1] < 0)
            flag = false;

        if (flag)
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