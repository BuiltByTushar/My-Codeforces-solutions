#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, count;
    string str1, str2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str1;
        cin >> str2;
        count = 0;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] == str2[i])
            {
            }
            else if (str1[i] == str1[i+1] && str2[i] == str2[i+1] && i < n-1)
            {
                i++;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}