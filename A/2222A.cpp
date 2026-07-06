#include <iostream> 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, temp;
    bool flag;
    cin >> t;
    while (t--)
    {
        flag = true;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == 100)
            {
                flag = false;
            }
        }
        if(!flag) 
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}