#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++)
    {
        if (s.at(i) == s.at(i-1))
        {
            count++;
        }
        
    }
    cout << count << endl;
    
    return 0;
}