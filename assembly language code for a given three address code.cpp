#include <bits/stdc++.h>
using namespace std;
int i = 0, j = 1;
void solve(string l, string r)
{
    char op = r[1];
    char x = r[0], y = r[2];
    string ins;
    if (op == '+')
    {
        ins = "ADD";
    }
    else
    {
        ins = "SUB";
    }
    string mov = "MOV";
    cout << mov << " " << x << ","<< "R" << i << "\n";
    cout << mov << " " << y << ","<< "R" << j << "\n";
    cout << ins << " "<< "R" << j << ","<< "R" << i << "\n";
    cout << mov << " "<< "R" << i << "," << l << "\n";
    i++, j++;
    putchar('\n');
}
int main()
{
    int no = 2;
    string stmt[3];
    stmt[0] = "a=b+c";
    stmt[1] = "z=x-y";
    for (int i = 0; i < no; i++)
    {
        string left, right;
        left = stmt[i].substr(0, stmt[i].find("="));
        right = stmt[i].substr(stmt[i].find("=") + 1);
        solve(left, right);
    }
}
