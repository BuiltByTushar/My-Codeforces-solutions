#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, s_rev;
    cin >> s >> s_rev;
    if (s.size() == s_rev.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s_rev.at(i) != s.at(s.size() - i - 1))
            {
                cout << "NO\n";
                goto end;
            }
        }
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
end:
    return 0;
}