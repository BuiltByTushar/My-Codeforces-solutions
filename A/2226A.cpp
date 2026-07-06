#include <iostream>
#include <vector>
using namespace std;

int give_accending(vector<int> &s, int n)
{
    int result = 1;
    int prev = 1;
    bool flag = true;
    vector<int> new_s;
    for (int i = 0; i < n; i++)
    {
        if (prev <= s[i] && s[i] == 1 && result == 1 && flag)
        {
            result *= s[i];
            prev = s[i];
            flag = true;
        }
        else if (prev <= s[i] && s[i] != 1 && flag)
        {
            result *= s[i];
            prev = s[i];
            flag = false;
        }
        else
        {
            new_s.push_back(s[i]);
        }
    }
    s = new_s;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, temp, add;
    long long result, mod = 676767677;
    bool flag;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        while (!arr.empty())
        {
            result += give_accending(arr, arr.size()) % mod;
        }
        cout << result << "\n";
    }
    return 0;
}