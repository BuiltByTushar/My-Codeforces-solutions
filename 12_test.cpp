#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int a = 0, b = 0, c = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            switch (s.at(i))
            {
            case '1':
                a++;
                break;
            case '2':
                b++;
                break;
            case '3':
                c++;
                break;
            default:
                break;
            }
        }
    }
    for (int i = 0; i < (2 * a - 1); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = '1';
        }
    }
    for (int i = 2 * a; i < (2 * b + 2 * a - 1); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = '2';
        }
    }
    for (int i = (2 * a + 2 * b); i < (2 * a + 2 * b + 2 * c - 1); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = '3';
        }
    }
    cout << s << endl;

    return 0;
}