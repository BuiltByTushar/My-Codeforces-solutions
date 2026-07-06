#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t, n, i, result, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = 0;
        num = 0;
        vector<int> arr;
        while (n != 0)
        {
            result = (n % 10) * pow(10, i);
            if (result != 0)
            {
                arr.push_back(result);
                num++;
            }
            n /= 10;
            i++;
        }
        cout << num << "\n";
        for (int x : arr)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}