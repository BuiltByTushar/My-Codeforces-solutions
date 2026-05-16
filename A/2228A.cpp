#include <iostream>
using namespace std;

int main()
{
    int t, n, count_0, count_1, count_2, temp, result;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count_0 = 0;
        count_1 = 0;
        count_2 = 0;
        result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            switch (temp)
            {
            case 0:
                count_0++;
                break;
            case 1:
                count_1++;
                break;
            case 2:
                count_2++;
                break;
            default:
                break;
            }
        }
        if(count_1 == count_2)
        {
            result+=count_1;
        }
        else
        {
            temp = min(count_1, count_2);
            result += temp;
            count_1 = count_1 - temp;
            count_2 = count_2 - temp;
            result+=count_1/3;
            result+=count_2/3;
        }
        result += count_0;
        cout << result << "\n";
    }

    return 0;
}