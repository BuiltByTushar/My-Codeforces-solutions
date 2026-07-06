#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n), left_arr;
        int count_1 = 0, count_2 = 0, count_3 = 0;
        for (int &x : arr)
        {
            cin >> x;
        }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == 1)
                count_1++;
            else if (arr[i] == 2)
                count_2++;
            else
                count_3++;
            if (count_1 >= (count_2 + count_3))
            {
                left_arr.push_back(i);
            }
        }
        if (left_arr.size() == 0)
        {
            cout << "NO\n";
            continue;
        }
        bool flag = false;
        for (int i = 0; i < left_arr.size(); ++i)
        {
            count_1 = 0, count_2 = 0, count_3 = 0;
            for (int j = left_arr[i] + 1; j < n-1; ++j)
            {
                if (arr[j] == 1)
                    count_1++;
                else if (arr[j] == 2)
                    count_2++;
                else
                    count_3++;
                if (count_3 <= (count_1 + count_2))
                {
                    flag = true;
                    break;
                }
            }
            if(flag)    break;
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}