#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, result = "";
    bool flag = false;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (i <= n - 3)
        {
            if (s.at(i) == 'W' && s.at(i + 1) == 'U' && s.at(i + 2) == 'B')
            {
                i += 2;
                flag = true;
            }
            else
            {
                if (flag && result != "")
                {
                    result.push_back(' ');
                }
                result.push_back(s.at(i));
                flag = false;
            }
        }
        else
        {
            if (flag && result != "")
            {
                result.push_back(' ');
            }
            result.push_back(s.at(i));
            flag = false;
        }
    }
    cout << result << endl;
    return 0;
}