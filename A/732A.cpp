#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, r;
    cin >> k >> r;
    int result = 1;
    while(true)
    {
        if((k*result)%10 == 0 || (k*result)%10 == r)
        {
            break;
        }
        ++result;
    }
    cout << result << "\n";
    return 0;
}