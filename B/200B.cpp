#include <iostream>
using namespace std;

int main()
{
    int n, t, p;
    float result = 0;
    cin >> n;
    t = n;
    while (t--)
    {
        cin >> p;
        result += p;
    }
    result = result / n;
    cout << result << endl;
    return 0;
}