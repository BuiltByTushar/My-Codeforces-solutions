#include <iostream>
#include <vector>
using namespace std;

bool prime(int a)
{
    if (a == 0 || a == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int n, m, check;
    cin >> n >> m;
    // 2D matrix with default 0 element
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> check;
            while (prime(check) == false)
            {
                arr[i][j]++;
                check++;
            }
        }
    }
    int least = INT_MAX, i, j, sum;
    for (int i = 0; i < n; i++)
    {
        j = 0;
        sum = 0;
        while (j != m)
        {
            sum += arr[i][j];
            j++;
        }
        if (sum < least)
        {
            least = sum;
        }
    }
    for (int j = 0; j < m; j++)
    {
        i = 0;
        sum = 0;
        while (i != n)
        {
            sum += arr[i][j];
            i++;
        }
        if (sum < least)
        {
            least = sum;
        }
    }
    cout << least << endl;
    return 0;
}