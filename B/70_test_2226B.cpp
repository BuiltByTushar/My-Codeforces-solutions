#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, g, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        set<int> s_arr;
        cin >> n;
        if(n = 0)
        {
            cout << count << endl;
            continue;   
        }
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        s_arr.insert(arr[0]);
        s_arr.insert(arr[1]);
        int m = 1;
        int min, max;
        g = gcd(arr[0], arr[1]);

        // first I will select all the pair of element which satisfies either abs(m-n) = 1 or if m = 2n
        // then form all the possible groups which have them as min and max;
        vector<int> sort_arr(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; i < n; i++)
            {
                if (arr[j] - arr[i] == 1 || arr[j] == 2*arr[i])
                {
                    /* code */
                }
                
            }
            
        }
        

        for (int i = 2; i < n; i++)
        {
            min = *s_arr.begin();
            max = *prev(s_arr.end());
            if ((max - min) == g)
            {
                count++;

            }
            else
            {
                g = gcd(arr[i], g);
                s_arr.insert(arr[i]);
            }
        }
    }

    return 0;
}