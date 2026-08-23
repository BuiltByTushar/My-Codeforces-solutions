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
        int n;
        cin >> n;
        int prev, curr;
        cin >> prev;
        vector<int> arr;
        arr.push_back(prev);
        for (int i = 1; i < n; i++)
        {
            cin >> curr;
            if(curr < prev)
            {
                arr.push_back(curr);
            }
            arr.push_back(curr);
            prev = curr;
        }
        int m = arr.size();
        cout << m << "\n";
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}