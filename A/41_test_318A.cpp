#include <iostream>
using namespace std;

int main()
{
    long long n, k, result;
    cin >> n >> k;
    if (n % 2 == 0 && n / 2 < k)
    {
        result = 2 * k - n;
    }
    else if (n % 2 == 0)
    {
        result = 2 * k - 1;
    }
    else if ((n + 1) / 2 < k)
    {
        result = 2 * k - n - 1;
    }
    else
    {
        result = 2 * k - 1;
    }

    cout << result << endl;
    return 0;
}