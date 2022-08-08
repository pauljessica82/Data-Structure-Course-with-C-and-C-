#include<stdio.h>
#include <string.h>

void isPalindrome(const char str[])
{
	// leftmost and rightmost corners of string
	int l = 0;
	int h = strlen(str) - 1;

	while (h > 1)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is NOT  a palindrome\n", str);
			return;
		}

	}

	printf("%s IS a palindrome!\n", str);

}

int main()
{
	isPalindrome("abba");
	isPalindrome("abbccbba");
	isPalindrome("geeks");
	isPalindrome("rotor");
	isPalindrome("cat");
	return 0;

}
