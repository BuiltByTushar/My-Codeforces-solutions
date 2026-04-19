#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    long long money;
    cin >> money;
    count += money / 100;
    money %= 100;
    count += money / 20;
    money %= 20;
    count += money / 10;
    money %= 10;
    count += money / 5;
    money %= 5;
    count += money;
    cout << count << endl;
    return 0;
}