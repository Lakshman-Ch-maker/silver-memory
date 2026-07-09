// finding the length of a number

#include<stdio.h>

int main(){
	
	int n = 8899;
	int len = 0;
	while(n > 0){
		n /= 10;
		len++;
	}
	printf("length of number: %d ", len);
}
