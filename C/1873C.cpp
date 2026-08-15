#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int result = 0;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X')
            {
                result+=1;
            }
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X')
            {
                result+=2;
            }
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X')
            {
                result+=3;
            }
            
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X' && (i == 2 || i == 7))
            {
                result+=3;
            }
            else if (s[i] == 'X')
            {
                result+=4;
            }
            
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X' && (i == 2 || i == 7))
            {
                result+=3;
            }
            else if (s[i] == 'X' && (i == 3 || i == 6))
            {
                result+=4;
            }
            else if (s[i] == 'X')
            {
                result+=5;
            }
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X' && (i == 2 || i == 7))
            {
                result+=3;
            }
            else if (s[i] == 'X' && (i == 3 || i == 6))
            {
                result+=4;
            }
            else if (s[i] == 'X')
            {
                result+=5;
            }
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X' && (i == 2 || i == 7))
            {
                result+=3;
            }
            else if (s[i] == 'X')
            {
                result+=4;
            }
            
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X' && (i == 1 || i == 8))
            {
                result+=2;
            }
            else if (s[i] == 'X')
            {
                result+=3;
            }
            
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X' && (i == 0 || i == 9))
            {
                result+=1;
            }
            else if (s[i] == 'X')
            {
                result+=2;
            }
        }
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if(s[i] == 'X')
            {
                result+=1;
            }
        }
        cout << result << "\n";
    }
    
    return 0;
}