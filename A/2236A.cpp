#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, max_height, min_height, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        max_height = INT_MIN;
        min_height = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            max_height = max(max_height,temp);
            min_height = min(min_height,temp);
        }
        cout << max_height-min_height+1 << "\n";
    }
    
    return 0;
}