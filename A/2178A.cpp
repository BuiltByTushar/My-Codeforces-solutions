#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n;
    char prev;
    bool flag;
    string s;
    cin >> t;
    while (t--)
    {
        flag = true;
        prev = 'N';
        cin >> s;
        n = s.size();
        while (n--)
        {
            if (prev == s.at(0) && s.at(0) == 'Y')
            {
                cout << "NO\n";
                flag = false;
                break;
            }
            else if (prev == 'Y' || s.at(0) == 'Y')
            {
                prev = 'Y';
            }
            else
            {
                prev = 'N';
            }
            s.erase(0,1);
        }
        if(flag) cout << "YES\n";
    }
    return 0;
}