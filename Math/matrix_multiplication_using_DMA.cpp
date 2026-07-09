// matrix multiplication (integer only) using dynamic memory allocation (DMA) Technique

//for using Dynamic memory allocation we should include stdlib.h


#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,k,m,n,p, o, res = 0;
	printf("\n Enter Matrices for multiplication.\n");
	
	printf("\n Enter the first matrix order (m X n): \n");
	printf("\n Enter m: ");
	scanf("%d", &m);
	printf("\n Enter n: ");
	scanf("%d", &n);
	
	printf("\n Now, Enter the second matrix order (o X p): \n");
	printf("\n Enter o: ");
	scanf("%d", &o);
	printf("\n Enter p: ");
	scanf("%d", &p);
	if(n != o){
		printf("\n Invalid order given, cannot multiply the two matrices !!!");
		return -1;
	}
	
	int *a = (int* )calloc(m*n, sizeof(int));
	int *b = (int *)calloc(o*p, sizeof(int));
	int *c = (int *)calloc(m*p, sizeof(int));
	
	printf("\n Enter the elements of a matrix in row major order: ");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("\t a[%d][%d] = ",i+1, j+1);
			scanf("%d", (a + (i*n+j)));
		}
	}
	
	
	
	printf("\n The matrix a is: \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("\t %d", *(a+(i*n+j)));
		}
		printf("\n");
	}
	
	printf("\n Enter the elements of b matrix in row major order: ");
	
	for(i=0; i<o; i++){
		for(j=0; j<p; j++){
			printf("\t b[%d][%d] = ",i+1, j+1);
			scanf("%d", (b + (i*p+j)));
		}
	}

		printf("\n The matrix b is: \n");
	for(i=0; i<o; i++){
		for(j=0; j<p; j++){
			printf("\t %d", *(b+(i*p+j)));
		}
		printf("\n");
	}
	
	

	
	for(i=0; i<m; i++){
		for(k=0; k<p; k++){
			res = 0;
			for(j=0; j<n; j++){
			
				res = res + *(a+(i*n+j)) * *(b+(j*p+k));
			}
			*(c+(i*p+k)) = res;
		}
	}
	
	printf("\n The resultant matrix after multiplication: \n");
	for(i=0; i<m; i++){
		for(j=0; j<p; j++){
			printf("%d \t", *(c+(i*p+j)));
		}
		printf("\n");
	}
	
	//freeing of Allocated memory
	free(a);
	free(b);
	free(c);
	
	return 0;
}
