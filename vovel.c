# include<stdio.h>
int main(){
	int ch;
	printf("enter the the char:");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel",ch);
		break;
		default:
			printf("%c is not a vowel",ch);
	}
}
