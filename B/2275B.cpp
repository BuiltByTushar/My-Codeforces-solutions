#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
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
        string s;
        cin >> s;
        stack<int> sk;
        vector<int> arr;
        
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '1')
            {
                sk.push(i+1);
            }
            else if(s[i] == '2')
            {
                if(sk.size() != 0)
                {
                    sk.pop();
                    arr.push_back(i+1);
                }
            }
        }
        while (!sk.empty())
        {
            arr.push_back(sk.top());
            sk.pop();
        }
        cout << arr.size() << "\n";
        sort(arr.begin(),arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}