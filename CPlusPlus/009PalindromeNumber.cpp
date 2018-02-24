#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		double res = 0;
		string str;
		str = to_string(x);
		int size = str.size();
		for (int i = 0; i < size / 2; i++)
		{
			if (str.at(i) != str.at(size - 1 - i))
				return false;
		}
		return true;
	}
};

void main() {
	int input = 123;

	Solution so;

	cout << so.isPalindrome(input) << endl;

	getchar();
}