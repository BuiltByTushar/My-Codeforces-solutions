#include <iostream>
#include <vector>
using namespace std;

// int diff(vector<int> arr, int i, int &a)
// {
//     int d;
//     d = (arr[i + 1] - arr[i]) / (i + 1);
//     a = arr[i] - i * d;
//     return d;
// }

// int main()
// {
//     int n, d, new_d, a, k = 0, count = 0, index;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// again:
//     d = diff(arr, k, a);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != a + i * d)
//         {
//             count++;
//             index = i + 1;
//         }
//         if (count > 1)
//         {
//             k++;
//             count = 0;
//             goto again;
//         }
//     }
//     cout << index << "\n";
//     return 0;
// }

// int finder(vector<int> arr, int n)
// {
//     int count_odd = 0, count_even = 0, odd, even;
//     for (int i = n; i < n + 3; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             count_even++;
//             even = i + 1;
//         }
//         else
//         {
//             count_odd++;
//             odd = i + 1;
//         }
//     }
//     if (count_odd > count_even)
//     {
//         return even;
//     }
//     else if (count_even > count_odd)
//     {
//         return odd;
//     }
//     else
//     {
//         return 99999;
//     }
// }

// int main()
// {

//     int n, index;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 3; i++)
//     {
//         index = finder(arr, i);
//         if (index == 99999)
//         {
//             continue;
//         }
//         cout << index << "\n";
//         break;
//     }
//     return 0;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n-1; i++)
    {
        if(2 * arr[i] != arr[i-1] + arr[i+1])
        {
            cout << i+2 << "\n";
            break;
        }
    }
    
    return 0;
}