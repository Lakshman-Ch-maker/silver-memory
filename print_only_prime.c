// C program to print primes upto the given number 

#include<stdio.h>
#include<math.h>


void prime(int n){
	int i, h, c=0;
	
	h = n/2;
	
	for(i=2; i<=h; i++){ // O((n/2) - 1) = O(n)
		if(n % i == 0) 
			c++;
	}
	
	if(c == 0)
	printf("\t %d  ", n);
	
	
}

int main()
{
	int n, i;
	
	printf("\n Enter a number for which prime numbers are printed upto that number: ");
	scanf("%d", &n);
	
	if(n == 1)
	printf("\n upto %d there are no prime numbers and \n %d is neither prime number nor a composite number", n, n);
	else if(n < 1){
		printf("\n n must be greater than 1 ");
		return 1;
	}
	
	printf("\n");
	for(i=2; i<=n; i++){
		prime(i);
	}
	return 0;
}
