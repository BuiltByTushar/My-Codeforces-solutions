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
        int n, doup = 0, cnt = 1;
        string s, new_s = "";
        vector<int> freq;
        cin >> n >> s;
        new_s+=s[0];
        for (int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1])
            {
                ++cnt;
                continue;
            }
            freq.push_back(cnt);
            cnt = 1;
            new_s+=s[i];
        }
        freq.push_back(cnt);
        n = new_s.size();
        int flag = 0;
        for(int i = 2; i < n; ++i)
        {
            if(new_s[i] == new_s[i-2] && new_s[i-1] != new_s[i] && freq[i-1] == 1)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout << n-2 << "\n";
            continue;
        }
        for (int i = 1; i < n-1; i++)
        {
            if(freq[i] == 1)
            {
                doup = 1;
                break;
            }
        }
        
        cout << (doup ? n-1 : n) << "\n";
    }   
    return 0;
}