#include<iostream>
#include<stack>
#include<string>

using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> ss;
		for (int i = 0; i < s.size(); i++) { 
			if (s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{')
			{
				ss.push(s.at(i));
			}
			else if (s.at(i) == ')')
			{
				if (ss.empty())
					return false;
				else if( ss.top() == '(')
					ss.pop();
				else 
					ss.push(s.at(i));
			}
			else if (s.at(i) == ']' )
			{
				if (ss.empty())
					return false;
				else if (ss.top() == '[' )
					ss.pop();
				else
					ss.push(s.at(i));
			}
			else if (s.at(i) == '}' )
			{
				if (ss.empty())
					return false;
				if (ss.top() == '{' )
					ss.pop();
				else
					ss.push(s.at(i));
			}
		}
		if (ss.size())
			return false;
		return true;
	}
};

void main() {
	string str = "]";

	Solution so;

	cout << so.isValid(str) << endl;

	getchar();
}