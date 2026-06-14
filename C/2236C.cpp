#include <iostream>
#include <climits>
#include <vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, a, b, x, result;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x;
        vector<pair<long long, long long>> a_arr, b_arr;
        long long temp = a, d = 0;

        while (temp != 0)
        {
            a_arr.push_back({temp, d});
            temp/= x;
            ++d;
        }
        a_arr.push_back({temp, d});

        temp = b, d = 0;

        while (temp != 0)
        {
            b_arr.push_back({temp, d});
            temp/= x;
            ++d;
        }
        b_arr.push_back({temp, d});
        
        result = LLONG_MAX;
        
        for (auto [a1, a2] : a_arr) {
            for (auto [b1, b2] : b_arr) {
                result = min(result,(long long)a2 + b2 + abs(a1 - b1));
            }
        }
        cout << result << "\n";
    }
    
    return 0;
}