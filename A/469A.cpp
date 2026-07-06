#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,temp, sum = 0;
    cin >> n;
    vector<int> arr(n,0);
    int p, q;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> temp;
        if (arr.at(temp-1) == 0)
        {
            arr[temp-1]++;
            sum++;
        }
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        if (arr.at(temp-1) == 0)
        {
            arr[temp-1]++;
            sum++;
        }   
    }
    if (sum == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }   
    return 0;
}