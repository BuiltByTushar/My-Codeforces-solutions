#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, home, count = 0;
    cin >> n;
    vector<int> h(n);
    vector<int> g(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        cin >> g[i];
    }
    for (int i = 0; i < n; i++)
    {
        home = h[i];
        for (int j = 0; j < n; j++)
        {
            if (j != i && home == g[j])
            {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}