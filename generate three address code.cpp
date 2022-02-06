/// a = b+c*d/e
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    printf("enter the statement:");
    cin >> str;
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '*' || str[i] == '/')
        {
            if (count == 1)
            {
                cout << "t" << count << "=" << str[i - 1] << str[i] << str[i + 1] << "\n";
            }
            else
            {
                if (str[i + 1] == '0' && str[i - 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << "t" << count - 2 << "\n";
                }
                else if (str[i - 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << str[i + 1] << "\n";
                }
                else if (str[i + 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << str[i - 1] << "\n";
                }
                else
                {
                    cout << "t" << count << "=" << str[i - 1] << str[i] << str[i + 1] << "\n";
                }
            }
            count++;
            for (int j = i - 1; j <= i + 1; j++)
            {
                str[j] = '0';
            }
            i = 0;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '-')
        {
            if (count == 1)
            {
                cout << "t" << count << "=" << str[i - 1] << str[i] << str[i + 1] << "\n";
            }
            else
            {
                if (str[i + 1] == '0' && str[i - 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << "t" << count - 2 << "\n";
                }
                else if (str[i - 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << str[i + 1] << "\n";
                }
                else if (str[i + 1] == '0')
                {
                    cout << "t" << count << "=" << "t" << count - 1 << str[i] << str[i - 1] << "\n";
                }
                else
                {
                    cout << "t" << count << "=" << str[i - 1] << str[i] << str[i + 1] << "\n";
                }
            }
            count++;
            for (int j = i - 1; j <= i + 1; j++)
            {
                str[j] = '0';
            }
            i = 0;
        }
    }
    cout << str[0] << "=" << "t" << count - 1;
}
