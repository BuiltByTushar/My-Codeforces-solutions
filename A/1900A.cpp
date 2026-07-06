#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        int count_gap = 0, max_gap = 0, total_gap = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] != '#')
            {
                count_gap++;
                total_gap++;
            }
            else
            {
                max_gap = max(count_gap,max_gap);
                count_gap = 0;
            }
        }
        max_gap = max(count_gap,max_gap);
        if(max_gap >= 3)    cout << 2 << "\n";
        else    cout << total_gap << "\n";
    }
    
    return 0;
}