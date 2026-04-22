#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    unordered_set<char> unique;
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == '{' || s.at(i) == '}' || s.at(i) == ' ' || s.at(i) == ',')
        {
            continue;
        }
        else
        {
            unique.insert(s.at(i));
        }
    }
    cout << unique.size() << endl;
    return 0;
}