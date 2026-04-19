#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n, count;
    string s;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> s;
        n = s.size() - 1;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == s.at(i+1) && s.at(i) == 'Y')
            {
                cout << "NO\n";
                goto end;
            }
            else if (s.at(i) == s.at(i+1) && s.at(i) == 'N')
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
        
end:
    }
    
    return 0;
}