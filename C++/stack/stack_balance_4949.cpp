#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{ 
    while (1)
    {   
        string text_input;
        getline(cin, text_input);

        if (text_input == ".")
        {
            return 0;
        }
        else
        {
            stack<int> s;
            int i;
            for (i = 0; i < text_input.length(); i++)
            {
                if (text_input[i] == '(')
                {
                    s.push(1);
                }
                else if (text_input[i] == '[')
                {
                    s.push(2);
                }
                else if (text_input[i] == ')')
                {
                    if (!s.empty() && s.top() == 1)
                    {
                        s.pop();
                    }
                    else
                    {
                        break;
                    }
                }
                else if (text_input[i] == ']')
                {
                    if (!s.empty() && s.top() == 2)
                    {
                        s.pop();
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if (i == text_input.length() && s.empty())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
}
