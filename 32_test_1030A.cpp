#include <iostream>
using namespace std;

int main()
{
    int n, res;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> res;
        if (res == 1)
        {
            cout << "HARD";
            goto end;
        }     
    }
    cout << "EASY";
end:
    return 0;
}