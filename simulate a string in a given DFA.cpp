/* The DFA is:
{W|W is a string of a and b ending withe the substring "bb".}
states,Q= {1,2,3}
start State,S=1;
Final state,F=3;
Input Symbols={a,b};
Transitions Are:
T( 1,a)=1; T(1,b)=2; T(2,a)=1; T(2,b)=3; T(3,a)=1; T(3,b)=3;
 */
#include <bits/stdc++.h>
using namespace std;
int states(int s, char c)
{
    if (s == 1)
    {
        if (c == 'a')
            return 1;
        else
            return 2;
    }
    else if (s == 2)
    {
        if (c == 'a')
            return 1;
        else
            return 3;
    }
    else if (s == 3)
    {
        if (c == 'a')
            return 1;
        else return 3;
    }
}
int main()
{
    int state, i, j, k, next;
    char inp[100];
    gets(inp);
    i = 0;
    state = 1;
    while (inp[i] != '\0')
    {
        next = inp[i];
        state = states(state, next);
        i++;
    }
    if (state == 3)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
