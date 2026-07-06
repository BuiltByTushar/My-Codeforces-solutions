#include <iostream>
using namespace std;

int main()
{
    long long k, n, w, total_money_friend, money;
    cin >> k >> n >> w;
    money = k * (w * (w + 1) / 2);
    if (money <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        total_money_friend = money - n;
        cout << total_money_friend << endl;
    }
    return 0;
}