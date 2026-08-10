#include <iostream>
#include <string>
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
        string s, s_new = "";
        cin >> s;
        int n = s.size(), flag1 = 0, flag2 = 0;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0' && !flag1)
            {
                flag1 = 1;
                continue;
            }
            if(s[i] == '1' && !flag2)
            {
                flag2 = 1;
                continue;
            }
            s_new+=s[i];
        }
        cout << s_new << "\n";
    }
    
    return 0;
}