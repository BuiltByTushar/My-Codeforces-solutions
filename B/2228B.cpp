#include <iostream>
using namespace std;

int main()
{
    int t, n, x1, x2, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> x1 >> x2 >> k;
        if(n == 2 || n == 3)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << min(max(x1,x2)-min(x1,x2), min(x1,x2) + n - max(x1,x2)) + k << "\n";
        }
    }
    
    return 0;
}