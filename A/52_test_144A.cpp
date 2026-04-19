#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, temp, min = 101, min_index, max = 0, max_index;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp = arr[i];
        if (temp > max)
        {
            max = temp;
            max_index = i;
        }
        if (temp <= min)
        {
            min = temp;
            min_index = i;
        }
    }
    if (max_index > min_index)
    {
        cout << n + max_index - min_index - 2 << endl;
    }
    else
    {
        cout << n + max_index - min_index - 1 << endl;
    }
    return 0;
}