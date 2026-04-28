#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, total, max = 0, min = 0, diff, range;
    cin >> t >> total;
    vector<int> a(t);
    vector<int> b(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        cin >> b[i];
        max += b[i];
        min += a[i];
    }
    if (max < total || min > total)
    {
        cout << "NO\n";
    }
    else if (max == total)
    {
        cout << "YES\n";
        for (int i = 0; i < t; i++)
        {
            cout << b[i] << " ";
        }
    }
    else
    {
        cout << "YES\n";
        diff = total - min;
        for (int i = 0; i < t; i++)
        {
            range = b[i] - a[i];
            if (range <= diff)
            {
                cout << b[i] << " ";
                diff-=range;
            }
            else
            {
                cout << a[i] + diff<< " ";
                diff = 0;
            }
        }
    }
    return 0;
}