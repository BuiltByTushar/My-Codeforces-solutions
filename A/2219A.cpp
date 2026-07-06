#include <iostream>
using namespace std;
// MY BRUTE FORCE APPROACH!!
// 04  07  10  13  16
// 07  12  17  22  27
// 10  17  24  31  38
// 13  22  31  40  49
// 16  27  38  49  60
int main()
{
    int t;
    cin >> t;
    long long p, q, r, r_count, n, j, s, u, logic, current, solved, length, breath;
    while (t--)
    {
        cin >> p >> q;
        r = p + 2 * q;
        r_count = r;
        n = 1;
        j = 0;
        while (r_count != 0)
        {
            r_count /= 10;
            j++;
        }
        if (j == 3)
        {
            n = 6;
        }
        else if (j == 4)
        {
            n = 21;
        }
        else if (j == 5)
        {
            n = 70;
        }
        else if (j == 6)
        {
            n = 223;
        }
        else if (j == 7)
        {
            n = 706;
        }
        else if (j == 8)
        {
            n = 2235;
        }
        else if (j == 9)
        {
            n = 7070;
        }
        else if (j == 10)
        {
            n = 22360;
        }
        else if (j == 11)
        {
            n = 70710;
        }
        while (r > 2 * n * (n + 1))
        {
            n++;
        }
        if (r == 2 * n * (n + 1))
        {
            cout << n << " " << n << endl;
            continue;
        }
        else
        {
            solved = false;
            for (long long i = n - 1; i > 0; i--)
            {
                j = 1;
                u = 2 * i * (i + 1);
                s = (2 * i + 1);
                logic = u + s * j;
                if ((r-i) % s != 0)
                {
                    continue;
                }
                else
                {
                    while (logic <= r && j <= p)
                    {
                        logic = u + s * j;
                        if (logic == r)
                        {

                            solved = true;
                            length = i;
                            breath = j + i;
                            break;
                        }
                        j++;
                    }
                }
                if (solved)
                {
                    break;
                }
            }
            if (!solved)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << length << " " << breath << endl;
            }
        }
    }

    return 0;
}