#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t, n, index, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > 0)
            {
                index = i;
                count = 1;
                break;
            }
            else
            {
                index = 0;
                count = 0;
            }
        }
        for (int i = index; i > 0; i--)
        {
            if (arr[i] > 0)
            {
                arr[i - 1] += arr[i];
            }
            if (arr[i - 1] > 0)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}