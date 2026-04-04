#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, result;
    vector<signed int> arr(7);
    cin >> t;
    while (t --)
    {
        result = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        for (int i = 0; i < 6; i++)
        {
            result = result - arr.at(i);
        }
        
        result = result + arr.at(6);
        cout << result << endl;
    }
    
    return 0;
}