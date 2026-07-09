#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

int main(){
	
	char a = "1";
	bool b = (isdigit(a))? true : false;
	printf(" is space (\" _ \")a digit: %d ", b);
	return 0;
	
}
