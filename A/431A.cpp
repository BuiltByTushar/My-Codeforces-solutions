#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr(4);
    for(int i = 0; i < 4; ++i)
    {
        cin >> arr[i];
    }
    string s;
    int result = 0;
    cin >> s;
    for(int i = 0; i < s.size(); ++i)
    {
        result += arr[s[i]-'0'-1];
    }
    cout << result << "\n";
    return 0;
}