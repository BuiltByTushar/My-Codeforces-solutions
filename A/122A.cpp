#include <iostream>
using namespace std;

int main()
{
    int n, check, org_n;
    cin >> n;
    org_n = n;
    while (n != 0)
    {
        check = n % 10;
        n = n / 10;
        if (check != 7 && check != 4)
        {
            if (org_n % 4 == 0 || org_n % 7 == 0 || org_n % 47 == 0 || org_n % 74 == 0 || org_n % 447 == 0 || org_n % 774 == 0)
            {
                cout << "YES\n";
                goto end;
            }
            else
            {
                cout << "NO\n";
                goto end;
            }
        }
    }
    cout << "YES\n";
end:
    return 0;
}