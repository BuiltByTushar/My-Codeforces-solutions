#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size(), count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'H' || s.at(i) == '9' || s.at(i) == 'Q') 
        {
            count++;
        }
        
    }
    if (count > 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}