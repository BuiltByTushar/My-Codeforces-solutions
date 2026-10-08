#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        cout << x <<" " << y+r << "\n";
    }
    
    return 0;
}