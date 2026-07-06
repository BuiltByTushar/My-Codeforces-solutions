#include <iostream>
#include <vector>
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
        for(int &x: arr)    cin >> x;
        cout << (arr[0] == 1 ? "YES\n":"NO\n");
    }
    
    return 0;
}