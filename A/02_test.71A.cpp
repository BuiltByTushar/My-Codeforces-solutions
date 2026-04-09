#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {   
        if (arr[i].size() > 10)
        {
            cout << arr[i].at(0) << arr[i].size() - 2  << arr[i].at(arr[i].size() - 1) << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
    
    return 0;
}