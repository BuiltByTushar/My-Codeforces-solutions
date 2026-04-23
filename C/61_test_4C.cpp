#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
// I will try this again by map later
/*
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t, size = 0, current, k;
    cin >> t;
    vector<string> st(t);
    vector<int> count(t,0);
    unordered_set<string> str;
    for (int i = 0; i < t; i++)
    {
        cin >> st[i];
    }
    for (int i = 0; i < t; i++)
    {
        str.insert(st.at(i));
        current = str.size();
        if (size == current)
        {
            for (int j = 0; j < i; j++)
            {
                if (st.at(j) == st.at(i))
                {
                    count[j]++;
                    k = j;
                    break;
                }
            }
            cout << st.at(i) << count.at(k) << endl;   
        }
        else
        {
            cout << "OK\n";
        }
        size = current;
    }
    return 0;
}
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    unordered_map<string, int> freq;
    while (t--)
    {
        string s;
        cin >> s;
        if (freq[s] == 0)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << freq[s] << '\n';
        }
        freq[s]++;
    }
    return 0;
}