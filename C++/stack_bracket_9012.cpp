#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
	int numOp;
	cin >> numOp;

	for (int i = 0; i < numOp; i++)
	{	
		stack<int> s;

		string in;
		cin >> in;

		int j;
		for (j = 0; j < in.length(); j++)
		{
			if (in[j] == '(')
			{
				s.push(1);
			}
			else
			{
				if (s.empty())
				{
					break;
				}
				s.pop();
			}
		}
		if (j == in.length() && s.empty())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}