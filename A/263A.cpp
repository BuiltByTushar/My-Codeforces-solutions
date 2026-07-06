#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    for (int i = 0; i < 25; i++)
    {
        cin >> n;
        if (n == 1)
        {
            n = i;
            break;
        }
    }
    // Coordinates of 1
    int x, y;
    x = n % 5 + 1;
    y = n / 5 + 1;
    // now how far is it from 3,3
    int result;
    result = abs(3 - x) + abs(3 - y);
    cout << result << endl;
    return 0;
}