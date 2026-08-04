#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t ;
    while (t--)
    {
        int a,b,c,result = 0;
        cin >> a >> b >> c;
        while(true)
        {
            if(a==b || b==c|| a==c)
            {
                cout << result << "\n";
                break;
            }
            if(a>b && a>c)
            {
                a--;
            }
            else if(b>a && b>c)
            {
                b--;
            }
            else
            {
                c--;
            }
            if(a<b && a<c)
            {
                a++;
            }
            else if(b<a && b<c)
            {
                b++;
            }
            else
            {
                c++;
            }
            ++result;
        }
    }
    
    return 0;
}