#include <iostream>
using namespace std;

int main()
{
    int n;
    int p, v, t;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        result = result + (p+v+t)/2;
    }
    cout << result;
    return 0;
}