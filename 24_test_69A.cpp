#include <iostream>
using namespace std;

int main()
{
    int t;
    signed int n1, n2, n3, net1 = 0, net2 = 0, net3 = 0;
    cin >> t;
    while (t--)
    {
        cin >> n1 >> n2 >> n3;
        net1 = net1 + n1;
        net2 = net2 + n2;
        net3 = net3 + n3;
    }
    if (net1 == 0 && net2 == 0 && net3 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}