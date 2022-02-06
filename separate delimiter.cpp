#include <bits/stdc++.h>
using namespace std;
int main()
{
    char delimeter[5] = {' ', ',', ';', '(', ')'};
    char save_de[200];
    string str;
    int k = 0;
    printf("give input statement:");
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (str[i] == delimeter[j])
            {
                save_de[k] = delimeter[j];
                k++;
            }
        }
    }
    printf("the delimiters are:\n");
    for (int i = 0; i < k; i++)
    {
        cout << save_de[i] << "is a delimiter\n";
    }
}
