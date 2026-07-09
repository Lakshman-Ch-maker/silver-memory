// matrix multiplication integer only

#include<stdio.h>

int main(){
	
	int i,j,k, res = 0;
	
	int a[4][5] = {
	
	{ 1, 2, 4, 5, 6},
	{ 2, 3, 4, 6, 7},
	{2, 4, 5, 6, 7},
	{5, 4, 3, 5, 2}
	};
	
	printf("\n The matrix a is: \n\n");
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("\t %d", a[i][j]);
		}
		printf("\n\n");
	}

int b[5][3] = {
	
	{ 1, 2, 4},
	{ 2, 3, 4},
	{2, 4, 5},
	{5, 4, 3},
	{2, 3, 5}
	};	
	
		printf("\n The matrix b is: \n\n");
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("\t %d", b[i][j]);
		}
		printf("\n\n");
	}
	int c[4][3]={};
	
	

	
	for(i=0; i<4; i++){
		for(k=0; k<3; k++){
			res = 0;
			for(j=0; j<5; j++){
			
				res = res + a[i][j]*b[j][k];
			}
			c[i][k] = res;
		}
	}
	
	printf("\n The resultant matrix after multiplication: \n\n");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%d \t", c[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
