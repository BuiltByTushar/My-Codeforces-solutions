#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned int t, n;
    unsigned long temp;

    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<unsigned long> mult_2;
        vector<unsigned long> mult_3;
        vector<unsigned long> left;
        vector<unsigned long> result;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            bool div2 = (temp % 2 == 0);
            bool div3 = (temp % 3 == 0);

            if (div2 && div3)
                result.push_back(temp);
            else if (div2)
                mult_2.push_back(temp);
            else if (div3)
                mult_3.push_back(temp);
            else
                left.push_back(temp);
        }
        result.insert(result.end(), mult_2.begin(), mult_2.end());
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), mult_3.begin(), mult_3.end());
        for (int x : result)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}