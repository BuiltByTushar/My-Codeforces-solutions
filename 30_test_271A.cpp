#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n++;
    string s;
    s = to_string(n);
    int i = 0;
    while (i < 1)
    {
        if (s.at(0) != s.at(1) && s.at(1) != s.at(2) && s.at(2) != s.at(3) && s.at(0) != s.at(3) && s.at(0) != s.at(2) && s.at(1) != s.at(3))
        {
            cout << n;
            i++;
        }
        else
        {
            n++;
            s = to_string(n);
        }
    }
    return 0;
}