#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, lowest = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        lowest = min(lowest, abs(temp));
    }
    cout << lowest << "\n";
    return 0;
}