#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int result = 0;
        while (x.size() < s.size()) 
        {
            x += x;
            result++;
        }
        if (x.find(s) != string::npos) 
        {
            cout << result << '\n';
            continue;
        }
        x += x;
        result++;
        if (x.find(s) != string::npos)
        {
            cout << result << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}