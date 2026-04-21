#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverse(string &s, int a, int b)
{
    while (a < b)
    {
        swap(s[a], s[b]);
        a++;
        b--;
    }
}

void invert(string &s, int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (s[i] == 'a')
        {
            s[i] = 'b';
        }
        else if (s[i] == 'b')
        {
            s[i] = 'a';
        }
    }
}

bool check(string &s, int n)
{
    while (n--)
    {
        if (s[n] == s[n - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, count, n, temp;
    cin >> t;
    string s, s_new;
    bool flag;
    while (t--)
    {
        vector<int> index;
        flag = false;
        cin >> s;
        s_new = s;
        count = 0;
        n = s.size() - 1;
        for (int i = 0; i < n; i++)
        {
            if (s.at(i) == s.at(i + 1))
            {
                count++;
                index.push_back(i);
            }
        }
        if (count == 0)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            temp = 0;
            for (int i = 0; i < count; i++)
            {
                reverse(s_new, temp, index.at(i));
                if (check(s_new, n))
                {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
                else
                {
                    invert(s_new, temp, index.at(i));
                }
                if (check(s_new, n))
                {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
                else
                {
                    temp = index.at(i) + 1;
                    s_new = s;
                }
            }
            if (!flag)
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}