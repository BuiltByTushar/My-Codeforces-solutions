#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        unordered_set<int> arr_set;
        for(int &x: arr)
        {
            cin >> x;
            arr_set.insert(x);
        }   
        if(n == 2)  cout << "YES\n";
        else if(arr_set.size() > 2) cout << "NO\n";
        else if(arr_set.size() == 1)    cout << "YES\n";
        else
        {
            sort(arr.begin(),arr.end());
            int index_change = 0;
            for(int i = 0; i < n-1; ++i)
            {
                if(arr[i] != arr[i+1])
                {
                    index_change = i+1;
                    break;
                }
            }
            if(n%2 == 0 && index_change%(n/2) == 0) cout << "YES\n";
            else if(n%2 != 0 && max(index_change,n-index_change)%((n+1)/2) == 0) cout << "YES\n";
            else    cout << "NO\n";
        }
    }
    
    return 0;
}