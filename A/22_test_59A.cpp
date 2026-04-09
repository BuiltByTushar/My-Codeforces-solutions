#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int count = 0, temp;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        temp = s.at(i);
        if (temp < 97)
        {
            count++;
        }
    }
    if (count > s.size() - count)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}