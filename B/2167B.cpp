#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr1[256] = {0}, arr2[256] = {0}, flag = 1;
        string s1, s2;
        cin >> s1 >> s2;
        for(int i = 0; i < n; ++i)
        {
            arr1[s1[i]]++;
        }
        for(int i = 0; i < n; ++i)
        {
            arr2[s2[i]]++;
        }
        for(int i = 0; i < n; ++i)
        {
            if(arr1[s2[i]] != arr2[s2[i]])
            {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES\n":"NO\n");
    }
    
    return 0;
}