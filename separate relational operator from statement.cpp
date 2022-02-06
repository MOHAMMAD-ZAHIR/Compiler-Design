#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp, token;
    token = "";
    printf("give input statement:");
    getline(cin, inp);
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i] == '>')
        {
            if (inp[i + 1] == '=')
            {
                cout << ">= is a relational operator\n";
            }
            else
            {
                cout << "> is a relational operator\n";
            }
        }
        else if (inp[i] == '<')
        {
            if (inp[i + 1] == '=')
            {
                cout << "<= is a relational operator\n";
            }
            else
            {
                cout << "< is a relational operator\n";
            }
        }
        else if (inp[i] == '!' && inp[i + 1] == '=')
        {
            cout << "!= is a relational operator\n";
        }
        else if (inp[i] == '=' && inp[i + 1] == '=')
        {
            cout << "== is a relational operator\n";
        }
    }
}
