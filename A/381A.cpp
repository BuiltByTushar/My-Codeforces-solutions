#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int l = 0, r = n-1, flag = 0, sm1 = 0, sm2 = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while(l<=r)
    {
        if(!flag)
        {
            flag = 1;
            if(arr[l] > arr[r])
            {
                sm1+=arr[l];
                ++l;
            }
            else
            {
                sm1+=arr[r];
                --r;
            }
        }
        else
        {
            flag = 0;
            if(arr[l] > arr[r])
            {
                sm2+=arr[l];
                ++l;
            }
            else
            {
                sm2+=arr[r];
                --r;
            }
        }
    }
    cout << sm1 << " " << sm2 << "\n";    
    return 0;
}