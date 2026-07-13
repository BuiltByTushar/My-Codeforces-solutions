#include <iostream>
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
        while(n--)
        {
            cout << n+1 << " ";
        }
        cout << "\n";
    }
    
    return 0;
}