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
        vector<int> arr(n), rev_check;
        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if(arr[i] != i + 1)
            {
                rev_check.push_back(arr[i]);
            }
        }
        if(rev_check.empty() == 1)
        {
            cout << "YES\n";
            continue;
        }
        reverse(rev_check.begin(),rev_check.end());
        int l = 0, flag = 1;
        for (int i = 0; i < n; ++i)
        {
            if(arr[i] != i+1)
            {
                if(rev_check[l] != i+1)
                {
                    cout << "NO\n";
                    flag = 0;
                    break;
                }
                ++l;
            }
        }
        if(flag)
        {
            cout << "YES\n";
        }
    }
    
    return 0;
}