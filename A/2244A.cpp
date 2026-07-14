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
        cin >> n;
        string s;
        cin >> s;
        int len = 0, max_len = 0;
        for(int i = 0; i < n; ++i)
        {
            if(i!=0)
            {
                if(s[i] != s[i-1] && s[i] == '#')
                {
                    max_len = max(max_len,len);
                    len = 0;
                }
            }
            if(s[i] == '#')
            {
                ++len;
            }
        }
        if(len)
        {
            max_len = max(max_len,len);
        }
        cout << (max_len+1)/2 << "\n";
    }
    
    return 0;
}