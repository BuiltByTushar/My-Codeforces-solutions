#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        unordered_map<char,int> mp;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            mp[tolower(temp[0])]++;
        }
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            string temp;
            cin >> temp;
            if(flag == 1)
                continue;
            for (int j = 0; j < temp.size(); j++)
            {
                if(mp[tolower(temp[j])] == 0)
                {
                    flag = 1;
                }
            }
        }
        cout << (flag == 1 ? "NO\n":"YES\n");
    }
    
    return 0;
}