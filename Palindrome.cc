#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

bool IsPalindrome(string str) {
	int len = str.length();
	cout << len << endl;
	int left = 0;
	int right = len -1;
	cout << str << endl;
	// Condition if it's reached the end.
	while(left < right) {
		if (isalpha(str[left]) && isalpha(str[right])) {
			if (tolower(str[left]) == tolower(str[right])) {
				right--;
				left++;	
			} else {
				return false;
			}
		}
		else if (!isalpha(str[left])) {
			left++;
		} else {
			right--;
		}
	}

	return true;
}

int main() {	
	string input = "Madam, I'm Adam";
	if (IsPalindrome(input)) {
		cout << "This is a palindrome" << endl;
	} else {
		cout << "This isn't a palindrome" << endl;
	}
	return 0;	
}