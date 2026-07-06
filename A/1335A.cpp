#include <iostream>
using namespace std;

int main()
{
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n = (n-1)/2;
        cout << n << endl;
    }
    return 0;
}