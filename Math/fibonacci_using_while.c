//C program for Fibonacci sequence

#include<stdio.h>
#include<conio.h>

int main(){
	
	int c;
	printf("\n Enter upto how many fibonacci numbers do you want: ");
	scanf("%d", &c);
	if(c < 0){
		printf("\n Invalid input !!!");
		return -1;
	}
	else if(c == 0)
	printf("\n :) ");
	
	else if(c == 1)
	printf("\n 0");
	
	else if(c == 2)
	printf("\n 0 1");
	
	else
	{
		int pr = 0, ne = 1, curr = 0;
		c = c - 2;
		printf("\n 0 1 ");
		while (c >= 0){
			curr = pr + ne;
			pr = ne; 
			ne = curr;
			c--;
			printf("%d ", curr);
		}
	}
	
	return 0;
}
