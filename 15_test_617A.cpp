#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x%5 != 0)
    {
        x = x/5 + 1;
    }
    else
    {
        x = x/5;
    }
    cout << x << endl;
    return 0;
}