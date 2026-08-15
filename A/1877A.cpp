#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            int temp;
            cin >> temp;
            sum+=temp;
        }
        sum*=-1;
        cout << sum << "\n";
    }
    
    return 0;
}