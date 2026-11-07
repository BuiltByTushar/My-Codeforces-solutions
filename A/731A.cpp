#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int pnt = 0, result = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int curr = s[i] - 'a';
        int diff = abs(curr - pnt);
        result += min(diff, 26 - diff);
        pnt = curr;
    }
    cout << result << "\n";
    return 0;
}