#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string c;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        if (c.at(i) == 'A')
        {
            count++;
        }
    }
    if (count > n - count)
    {
        cout << "Anton\n";
    }
    else if (count < n - count)
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
    return 0;
}