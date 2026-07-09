#include<stdio.h>
#include<stdlib.h>

int sumOfN(int n){
	int sum = 0;
	while(n>0){
		sum += n;
		n -= 1;
	}
	
	return sum;
}

int main(){
	
	int n, sum;
	printf("\n Enter a positive number: ");
	scanf("%d",&n);
	sum = sumOfN(n);
	printf("\n The sum of %d natural numbers is %d", n, sum);
	return 0;
}
