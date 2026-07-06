#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long d, answer;
    bool flag = true;
    vector<long> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            flag = false;
        }
        
    }
    cin >> d;
    answer = d;
    if(!flag) 
    {
        cout << d << endl;
        return 0;
    }   
    vector<int> result(d,0);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= d/arr.at(i); j++)
        {
            result[j*arr.at(i) - 1]++;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (result.at(i) == 0)
        {
            answer--;
        }
    }
    cout << answer << endl;   
    return 0;
}