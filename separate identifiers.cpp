#include <bits/stdc++.h>
using namespace std;
string keywords[] =
    {"auto", "break", "case", "char", "const", "continue", "default", "do", "double "," else ","enum",
    "extern", "float", "for", "goto", "if", "int", "long", "register", "return "," short ",
    "signed","sizeof", "static", "struct", "switch", "typedef", "union", "unsigned "," void ",
    "volatile","while"};
bool iskeyword(string str)
{
    for (int i = 0; i < 32; ++i)
        if (str == keywords[i])
            return true;
    return false;
}
bool isvalididentifier(string str)
{
    bool res = false;
    if (isalpha(str[0]) || (str[0] == '_'))
    {
        res = true;
        for (int i = 1; i < str.length(); i++)
        {
            if (isalpha(str[i]) || isdigit(str[i]) || str[i] == '_')
                {
                    res = true;
                }
            else
            {
                res = false;
                return res;
            }
        }
    }
    return res;
}
int main()
{
    string inp, token;
    token = "";
    printf("give input statement:");
    getline(cin, inp);
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i] == ' ' || inp[i] == ',' || inp[i] == ';')
        {
            if (iskeyword(token) == false)
            {
                if (isvalididentifier(token) == true)
                {
                    cout << token << " is a valid identifier\n";
                }
            }
            token = "";
        }
        else
        {
            token = token + inp[i];
        }
    }
}
