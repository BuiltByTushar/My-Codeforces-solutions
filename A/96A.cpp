#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s.at(i) == s.at(i - 1))
        {
            count++;
            if (count == 6)
            {
                break;
            }
        }
        else
        {
            count = 0;
        }
    }
    if (count == 6)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}