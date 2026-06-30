#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        vector<int> A(n);
        long long sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sumA += A[i];
        }
        vector<int> B(n);
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
            sumB += B[i];
        }
        if (sumA < sumB)
        {
            cout << -1 << "\n";
            continue;
        }
        bool flag = true;
        long long difference = sumA - sumB, result = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (A[i] < B[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            result = difference;
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        flag = true;
        for (int i = 0; i < n; i++)
        {
            if (A[i] < B[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            result = min(result, difference + c);
        }
        if (result == LLONG_MAX)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << result << "\n";
        }
    }

    return 0;
}