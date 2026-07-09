//  C program for fibonacci numbers using recursion

#include<stdio.h>
void fibonacci(m, p, n)
{
	if(m <= 0)
	return;
	
	int pr = p, ne = n, curr = 0;
	curr = pr + ne;
	pr = ne;
	ne = curr;
	printf("%d ", curr);
	m--;
	fibonacci(m, pr, ne);
		
	
}


int main(){
	int c;
	printf("\n Enter how many Fibonacci numbers you wanted? : ");
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
	printf("\n 0 1 ");
	
	else
	{
		printf("\n 0 1 ");
		fibonacci(c-2, 0, 1);
	}
	
	return 0;
}
