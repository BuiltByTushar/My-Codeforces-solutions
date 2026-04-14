#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, unique = 1;
    string s;
    cin >> n >> s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    sort(s.begin(),s.end());
    for (int i = 0; i < n-1; i++)
    {
        if (s.at(i) != s.at(i+1))
        {
            unique++;
        }
        
    }
    if (unique == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    } 
    return 0;
}