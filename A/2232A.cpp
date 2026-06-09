#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, middle_term, result;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(n%2 == 0)
        {
            middle_term = (arr[n/2 - 1] + arr[n/2])/2;
        }
        else
        {
            middle_term = arr[n/2];
        }
        for(int i = 0; i < n/2; ++i)
        {
            if(arr[i] != middle_term || arr[n-1-i] != middle_term)
            {
                ++result;
            }
        }
        cout << result << "\n";
    }
    
    return 0;
}