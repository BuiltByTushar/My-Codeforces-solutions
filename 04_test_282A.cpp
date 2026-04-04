#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    int n;
    int result = 0;
    cin >> n;
    vector <string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == "++X" || arr[i] == "X++")
        {
            result = result + 1;
        }
        else
        {
            result = result - 1;
        }
    }
    
    
    cout << result;

    return 0;
}