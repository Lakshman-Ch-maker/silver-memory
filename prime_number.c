// C program to find Prime Numbers

#include<stdio.h>
#include<math.h>

int main(){
	int n, i, h, c=0;
	printf("\n Enter a number to find whether it is a prime number or not: ");
	scanf("%d", &n);
	if(n == 1)
	printf("\n %d is neither prime nor composite", n);
	else if(n < 1){
		printf("\n n must be greater than 1 ");
		return 1;
	}
	
	h = n/2;
	
	for(i=2; i<=h; i++){// O((n/2) - 1) = O(n)
		if(n % i == 0) 
			c++;
	}
	
	if(c == 0)
	printf("\n %d is a prime number.", n);
	else
	printf("\n %d is not a prime number.", n);
	
	return 0;
}
