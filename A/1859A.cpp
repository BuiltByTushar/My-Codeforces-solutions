#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        if(arr[0] == arr[n-1])
        {
            cout << -1 << "\n";
            continue;
        }
        int l = 1;
        for(int i = 1; i < n; ++i)
        {
            if(arr[i-1] == arr[i])
                ++l;
            else
                break;
        }
        cout << l << " " << n-l << "\n";
        for(int i = 0; i < l; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        for (int i = l; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}