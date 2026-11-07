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
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp%2 == 0)
            {
                ++even;
            }
            else
            {   
                ++odd;
            }
        }
        cout << (odd%2 == 0 ? "YES\n":"NO\n");
    }
    
    return 0;
}