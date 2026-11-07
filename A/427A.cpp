#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int crime = 0, staf = 0;
    for(int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if(temp == -1)
        {
            if(staf > 0)
            {
                --staf;
            }
            else
            {
                ++crime;
            }
        }
        else
        {
            staf+=temp;
        }
    }
    cout << crime << "\n";
    return 0;
}