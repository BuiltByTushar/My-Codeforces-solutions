#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n1, n2, n3 = "";
    cin >> n1 >> n2;
    int s = n1.size();
    for (int i = 0; i < s; i++)
    {
        if (n1.at(i) == n2.at(i))
        {
            n3.push_back('0');
        }
        else
        {
            n3.push_back('1');
        }
    }
    cout << n3 << endl;
    return 0;
}