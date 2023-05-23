#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{ 
	int max;
	cin >> max;

	int seq = 1;
    bool isImpossible = false;
	stack<int> s;
	string output = "";

	for (int i = 0; i < max; i++)
	{
		int num;
		cin >> num;

        if (isImpossible)
            continue;

        while (seq <= num)
        {
            s.push(seq);
            seq++;
            output += "+\n";
        }

        if (!s.empty() && num == s.top())
        {
            s.pop();
            output += "-\n";
        }
        else
        {
            output = "NO\n";
            isImpossible = true;
        }
	}

	cout << output;
}
