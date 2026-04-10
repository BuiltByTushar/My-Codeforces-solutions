#include <iostream>
#include <string>
using namespace std;

int main()
{
    string def, s;
    def = "hello";
    cin >> s;
    int count = 0, t = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = t; j < s.size(); j++)
        {
            if (s.at(j) == def.at(i))
            {
                count++;
                t = j + 1;
                break;
            }
        }
    }
    if (count == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}