#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long t, a, b = 1, count = 0, max = 0;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a >= b)
        {
            count++;
            b = a;
        }
        else
        {
            count = 1;
            b = a;
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}