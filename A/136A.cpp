#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        arr[p - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr.at(i) << " ";
    }
    return 0;
}