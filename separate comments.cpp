#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    printf("Give the input statement:\n");
    getline(cin, s);
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '/')
        {
            i++;
            while (i < l)
            {
                if (s[i] == '*' || s[i] == '/')
                {
                    i++;
                    continue;
                }
                cout << s[i++];
            }
        }
    }
    return 0;
}
