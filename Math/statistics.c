// C program to find mean, median, mode, sd, and variance

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float findMean(int arr[], int n){
	int i;
	float avg = 0;
		for(i=0; i<n; i++){
			avg = avg + arr[i];
			}
	avg = avg / n;
	
	return avg;
}

float findVariance(int arr[], float x, int n){
	int i;
	float sum = 0.0, var, temp;
	for(i=0;i<n;i++){
		temp = arr[i] - x;
		sum = sum + pow(temp, 2);
	}
	var = sum / n;
	return var;
}

void bubbleSort(int arr[], int n){
	int i,j, temp;
	for(i=0; i<n; i++){
		for(j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n The sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d\t\t", arr[i]);
	}
	
	
}

void findMode(int arr[], int n){
	int rep[n], i, j, max = 0, maxEle[n], k = 0, f = 0;
	
	for(i=0; i<n; i++){
		int count = 0;
		for(j=0; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		rep[i] = count;
	}
	
	for(i= 0; i < n; i++){
		if(rep[i] > max){
			max = rep[i];
		}
	}
	for(i= 0; i < n; i++){
		if(rep[i] == max){
			for(j=0; j<k; j++){
				if(maxEle[j] == arr[i])
				f = 1;
				break;
			}
			if(f == 0){
				maxEle[k++] = arr[i];
				f = 0;
			}
		}
	}

if(k > 1)
{
	printf("\n The modes are: ");
	for(i=0;i<k;i++){
		printf(" %d \t",maxEle[i]);
	}
	
}
else
	printf("\n the mode is: %d", maxEle[--k]);
	
}

int main(){
	
		int n, c;
		float av, va, sd, avg = 0.0;
		printf("\n Enter the number of elements in the array: ");
		scanf("%d",&n);
		int i;
		int *a = (int *)malloc(n*sizeof(int));
		printf("\n Enter those numbers: ");
		for(i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		printf("\n The numbers are: ");
		for(i=0; i<n; i++){
			printf("%d\t",a[i]);
		}
		while(1){
		printf("\n Now, enter from the below options: \n 1. Mean \n 2. Median \n 3. Mode \n 4. Standard Deviation \n 5. Variance \n 6. Exit \n Enter your input: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				av = findMean(a, n);
				printf("\n The mean is: %.3f", av);
				break;
				
			case 2:
				bubbleSort(a, n);
				if(n % 2 != 0){
					printf("\n The meadian is: %d", a[(n/2)]);
				}
				else{
					avg = avg + a[n/2] + a[(n/2)-1];
					avg = avg / 2;
					printf("\n The meadian is: %d", avg);
				}
				break;
				
			case 3:
				findMode(a, n);
				break;
				
			case 4: 
				av = findMean(a, n);
				va = findVariance(a, av, n);
				if(va < 0){
					printf("\n Not possible to find standard deviation...");
				}
				else{
					sd = sqrt(va);
					printf("\n The Standard Deviation is: %f", sd);
				}
				break;
				
			case 5:
				av = findMean(a, n);
				va = findVariance(a, av, n);
				printf("\n Variance is: %f", va);
				break;
			
			case 6:
				exit(0);
				
			default:
				printf("\n Invalid option selected !!! ");		
		}
	}
		
		free(a);
	
	return 0;
}
