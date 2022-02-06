#include <bits/stdc++.h>
using namespace std;
char operators[] = {'+', '-', '*', '/', '^', '%'};
bool isoperator(char c)
{
    for (int i = 0; i < 6; i++)
        if (operators[i] == c)
            return true;
    return false;
}
int main()
{
    string inp;
    printf("give input statement:");
    getline(cin, inp);
    for (int i = 0; i < inp.length(); i++)
    {
        if (isoperator(inp[i]))
        {
            cout << inp[i] << " is an arithmetic operator \n";
        }
    }
}
