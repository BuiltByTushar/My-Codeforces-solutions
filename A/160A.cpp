#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, upper_sum = 0, lower_sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        lower_sum += arr.at(i);
    }
    stable_sort(arr.begin(), arr.end(), greater<>());
    for (int i = 0; i < n; i++)
    {
        upper_sum += arr.at(i);
        lower_sum -= arr.at(i);
        if (upper_sum > lower_sum)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}