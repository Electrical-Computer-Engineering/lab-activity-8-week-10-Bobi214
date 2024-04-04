#include <stdio.h>
#include <stdlib.h>

int my_isalpha(char c) {
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
		return 1;
	}
	else {
		return 0;
	}
}
int my_isdigit(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	}
	else {
		return 0;
	}
}
int my_isupper(char c){
	if (c >= 'A' && c <= 'Z') {
		return 1;
	}
	else {
		return 0;
	}
}
char my_toupper(char c){
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}
char my_tolower(char c){
	if (c >= 'A' && c <= 'A') {
		return c - 'A' + 'a';
	}
	else {
	return c;
}
}
int main (){
	char c;
	scanf("%c", &c);
	printf("%d\n",my_isalpha(c));
	printf("%d\n", my_isdigit(c));	
	printf("%d\n", my_isupper(c));	
	printf("%c\n", 	my_toupper(c));	
	printf("%c\n\n", my_tolower(c));
	
	scanf("\n%c", &c);
	printf("%d\n",my_isalpha(c));
	printf("%d\n", my_isdigit(c));	
	printf("%d\n", my_isupper(c));	
	printf("%c\n", 	my_toupper(c));	
	printf("%c\n", my_tolower(c));
	
	return 0;
