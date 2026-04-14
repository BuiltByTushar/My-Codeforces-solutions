#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    vector<int> count(t , 0);
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a < b)
        {
            count[i] = b-a;
        }
        else if (a%b != 0)
        {
            count[i] = b - (a%b);
        }        
    }
    for (int i = 0; i < t; i++)
    {
        cout << count.at(i) << endl;
    }
    return 0;
}