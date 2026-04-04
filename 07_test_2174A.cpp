#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// !! WARNING !! THIS CODE LOGIC DOES NOT MATCH WITH SOLUTON YET
// IT IS INCOMPLETE !
int main()
{
    int T, i, j;
    string s, s1, t, result;
    cin >> T;
    while (T--)
    {
        result = "";
        bool valid = true;
        cin >> s1 >> t;
        s = s1;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s.size() > t.size())
        {
            cout << "Imposible1" << "\n";
            goto end;
        }
        else
        {
            i = 0;
            j = 0;
            while (s.size() > i && t.size() > j)
            {
                if (s.at(i) != t.at(j))
                {
                    result.push_back(t.at(j));
                    j++;
                }
                else
                {
                    i++;
                    j++;
                }
            }
            if (i != s.size())
            {
                cout << "Imposible\n";
                goto end;
            }
            else if (j != t.size())
            {
                result.append(t, j, t.size() - j);
            }
            result.append(s1);
        }
        cout << result << endl;
    end:
        continue;
    }

    return 0;
}