#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<long long> arr(n);
        long long prev = 0;
        bool flag = true;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(prev > arr[i])
            {
                flag = false;
            }
            prev = arr[i];
        }
        if(flag || k >= n)
        {
            cout << "YES\n";
        }
        else if(k == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    
    return 0;
}