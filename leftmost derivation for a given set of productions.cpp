#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;
int how_many;
char ch, inputSymbol;
string str, inputString, currentString;
std::tr1::unordered_map<char, bool> nonTerminal, Terminal;
vector<string> output;
std::tr1::unordered_map<char, string> production;
void grammarInput()
{
    cout << "How many non-Terminal\t\t\t: ";
    cin >> how_many;
    cout << "Insert " << how_many << " Single Char as non-Terminal\t: ";
    for (int i = 0; i < how_many; i++)
    {
        cin >> ch;
        nonTerminal[ch] = true;
    }
    cout << "\n\nHow many Terminal\t\t\t: ";
    cin >> how_many;
    cout << "Insert " << how_many << " Single Char as Terminal\t: ";
    for (int i = 0; i < how_many; i++)
    {
        cin >> ch;
        Terminal[ch] = true;
    }
    cout << "\n\nWhat is your input Symbol\t\t: ";
    cin >> inputSymbol;
    cout << "\n\nHow many production you want to insert\t: ";
    cin >> how_many;
    cout << "\nInsert " << how_many << " Production:\n(left_production << space >> right_production << Enter >>)\n ";
        for (int i = 0; i < how_many; i++)
    {
        cout << "Production " << i + 1 << "\t\t\t\t: ";
        cin >> ch >> str;
        production[ch] = str;
    }
}
void solve()
{ /// leftmost derivation
    currentString = production[inputSymbol];
    output.push_back(currentString);
    for (int i = 0; i < currentString.size(); i++)
    { /// No need backtracking for single right production
        if(Terminal.find(currentString[i]) != Terminal.end())
            continue;
        else if (nonTerminal.find(currentString[i]) !=nonTerminal.end())
        {
                string firstString, midString, lastString;
                if (production.find(currentString[i]) == production.end())
                {
                    cout<<"\n\nNot parsable.\n No production exist for \""<<currentString[i]<<"\"";
                    return;
                }
                else
                    midString = production[currentString[i]];
                    firstString = currentString.substr(0, i);
                    lastString = currentString.substr(i + 1,currentString.size() - i - 1);
    /// cout<<"The strings are: "<<firstString<<""<<midString<<""<<lastString<<endl;
                    currentString = firstString + midString + lastString;
                    output.push_back(currentString);
                    i--;
        }
    else
    {
        cout << "\n\nNot parsable.\n The("<<currentString[i]<<")character doesn't exist in Terminal or Non-Terminal"<<endl;
        return;
    }
    }
    cout << "\n\nThe converts are\t\t\t: " << inputSymbol;
    for (int i = 0; i < output.size(); i++)
        cout << " => " << output[i];
    if (inputString == currentString)
        cout << "\n\n Successful parsing.The string is matched "<<endl;
            else cout<< "\n\n Not parsable. The String is not matched and there haven't any another way"<<endl;
}
int main()
{
    grammarInput();
    cout << "\n\n What is your input String \t\t: ";
    cin >> inputString;
    solve();
    return 0;
}
