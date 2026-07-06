#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, result = 0;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            result+=4;
        }
        else if (s == "Cube")
        {
            result+=6;
        }
        else if (s == "Octahedron")
        {
            result+=8;
        }
        else if (s == "Dodecahedron")
        {
            result+=12;
        }
        else if (s == "Icosahedron")
        {
            result+=20;
        }
    }
    cout << result << endl;
    return 0;
}