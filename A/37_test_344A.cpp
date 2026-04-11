#include <iostream>
using namespace std;

int main()
{
    long n;
    int p, c, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> c;
        if (c != p) 
        {
            count++;
        }
        p = c;
    }
    cout << count << endl;
    return 0;
}