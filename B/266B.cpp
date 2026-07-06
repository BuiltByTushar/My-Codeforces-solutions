#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string arr, new_arr;
    cin >> arr;
    new_arr = arr;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr.at(i) == 'B' && arr.at(i + 1) == 'G')
            {
                new_arr[i] = 'G';
                new_arr[i + 1] = 'B';
            }
        }
        arr = new_arr;
    }
    cout << new_arr << endl;
    return 0;
}