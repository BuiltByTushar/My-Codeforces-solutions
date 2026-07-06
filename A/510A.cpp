#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    string s = "", dot = "";
    cin >> n >> m;
    for (int i = 1; i < m; i++)
    {
        s.push_back('#');
        dot.push_back('.');
    }
    s.push_back('#');
    for (int i = 1; i <= n; i++)
    {
        if (i%2 != 0)
        {
            cout << s << endl;
        }
        else if (i%2 == 0 && i%4 == 0)
        {
            cout << '#' << dot << endl;
        }
        else
        {
            cout << dot << '#' << endl;
        }  
    }
    return 0;
}