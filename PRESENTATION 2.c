#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
	int len = strlen(str),i	;
	for (i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

char* concatenateReverse(char str1[], char str2[]) {
	reverseString(str1);
	reverseString(str2);
	strcat(str1,str2);
	return str1;
}

int main() {
	char str1[100], str2[100];

	printf("Enter the first string: ");
	gets(str1);

	printf("Enter the second string: ");
	gets(str2);

	char* result = concatenateReverse(str1, str2);

	printf("Concatenated string after reversing individual strings: %s\n", result);

	return 0;
}
