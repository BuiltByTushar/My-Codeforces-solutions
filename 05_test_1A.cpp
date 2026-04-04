#include <iostream>
using namespace std;

int main()
{
    long long n,m,a;
    cin >> n >> m >> a;
    if (a != 1)
    {   
        if (n%a != 0)
        {
            n = n + a - n%a;
        }
        if (m%a != 0)
        {
            m = m + a - m%a;
        }
    }
    cout << (n*m) / (a*a);    
    return 0;
}