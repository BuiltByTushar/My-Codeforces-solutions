#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string result = "";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            result.append("I hate ");
        }
        else
        {
            result.append("I love ");
        }
        if (i != n - 1)
        {
            result.append("that ");
        }
        else
        {
            result.append("it");
        }
    }
    cout << result << endl;
    return 0;
}