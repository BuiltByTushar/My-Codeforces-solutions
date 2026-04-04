#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 1;
    cin >> a >> b;
    while (3*a <= 2*b)
    {
        a = 3*a;
        b = 2*b;
        count++;
    }
    cout << count << endl;
    return 0;
}