#include <bits/stdc++.h>
using namespace std;
bool isdelimeter(char a)
{
    char delimeter[5] = {' ', ',', ';', '(', ')'};
    for (int i = 0; i < 5; i++)
    {
        if (a == delimeter[i])
            return true;
    }
}
int main()
{
    string inp, token;
    token = "";
    printf("give input statement:");
    getline(cin, inp);
    for (int i = 0; i < inp.length(); i++)
    {
        if (isdigit(inp[i]))
        {
            token = token + inp[i];
        }
        else if (isdelimeter(inp[i]))
        {
            if (token != "")
            {
                cout << token << " is a number \n";
            }
            token = "";
        }
    }
}
