#include <iostream>
#include<stack>
#include<string>



using namespace std;
void checker(string str);
int main()
{
    string str;
    getline(cin, str);
    checker(str);
}
void checker(string str) {
    stack<char> arc;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] == '[') or (str[i] == '(') or (str[i] == '{'))
        {
            arc.push(str[i]);
        }
        if (str[i] == ']')
        {
            if (arc.top() == '[')
            {
                arc.pop();
            }
            else
            {
                cout << "yesn't" << endl;
                return;
            }
        }
        if (str[i] == ')')
        {
            if (arc.top() == '(')
            {
                arc.pop();
            }
            else
            {
                cout << "yesn't" << endl;
                return;
            }
        }
        if (str[i] == '}')
        {
            if (arc.top() == '{')
            {
                arc.pop();
            }
            else
            {
                cout << "yesn't" << endl;
                return;
            }
        }
    }
    if (arc.empty() == 1)
    {
        cout << "yeeeees" << endl;
        return;
    }
    else
    {
        cout << "yesn't" << endl;
        return;
    }
}
