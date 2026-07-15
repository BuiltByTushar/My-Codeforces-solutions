#include <iostream>
#include <numeric>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        cout << ((a==b && b==c&& c==d) ? "YES\n":"NO\n");
    }
    
    return 0;
}