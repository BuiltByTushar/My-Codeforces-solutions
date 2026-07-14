#include <iostream>
#include <vector>
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
        long long store = 0, temp = 0;
        int flag = 1;
        for(int i = 0; i < n; ++i)
        {
            cin >> temp;
            if(!flag)    continue;
            if(i+1 > temp)
            {
                if(store >= i+1-temp)
                {
                    store-=(i+1-temp);
                }
                else
                {
                    flag = 0;
                }
            }
            else
            {
                store+=temp-i-1;
            }
        }
        cout << (flag ? "YES\n":"NO\n");
    }
    
    return 0;
}