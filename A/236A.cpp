#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int count = 1;
    cin >> s;
    sort(s.begin(),s.end());
    for (int i = 1; i < s.size(); i++)
    {
        if (s.at(i) == s.at(i-1))
        {
            continue;
        }
        count++;
    }
    if (count%2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}