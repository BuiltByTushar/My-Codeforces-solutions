#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, s_result = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == 'a' || s.at(i) == 'o' || s.at(i) == 'y' || s.at(i) == 'e' || s.at(i) == 'u' || s.at(i) == 'i')
        {
            continue;
        }
        s_result.push_back('.');
        s_result.push_back(s.at(i));
    }
    cout << s_result << endl;
    return 0;
}