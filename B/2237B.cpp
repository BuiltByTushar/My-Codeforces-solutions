#include <iostream>
#include <vector>
#include <algorithm>
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
        vector<pair<long long, int>> A(n);
        vector<long long> B(n);
        vector<int> index(n);
        bool possible = true;
        long long swaps = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i].first;
            A[i].second = i;
        }
        stable_sort(A.begin(), A.end());

        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            if (A[i].first > B[i])
            {
                possible = false;
            }
        }
        if (!possible)
        {
            cout << -1 << "\n";
            continue;
        }
        int min_diff = INT_MAX;
        int index_temp = 0;
        for (int i = 0; i < n; i++)
        {
            min_diff = INT_MAX;
            index_temp = -1;
            for (size_t j = 0; j < A.size(); j++)
            {
                if (A[j].first > B[i])
                {
                    break;
                }
                if (min_diff > (A[j].second - i))
                {
                    min_diff = (A[j].second - i);
                    index_temp = j;
                }
            }
            index[i] = A[index_temp].second;
            A.erase(A.begin() + index_temp);
        }
        index[n - 1] = A[0].second;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (index[i] > index[j])
                {
                    swaps++;
                }
            }
        }
        cout << swaps << "\n";
    }

    return 0;
}