#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '4' || s.at(i) == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}