// C program for array of pointers to structure

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>



struct student{
	int id;
	char c;
	float m;
}s;

void readStudents(struct student* a[], int n);
void displayStudents(struct student* a[], int n);

int main(){
	
	struct student* arr[3];

    for (int i = 0; i < 3; i++) {
        arr[i] = (struct student*)malloc(sizeof(struct student));
    }

	
	printf("\n Enter Students details in Maths: \n");
	
	// reading details
		readStudents(arr, 3);
	
	// displaying details
		displayStudents(arr, 3);
	
	return 0;
}

void readStudents(struct student* a[], int n){
	int i;
	
	for(int i=0; i<n; i++){
		printf("\n Student %d: \n", i+1);
		printf(" ID: ");
		scanf("%d", &a[i]->id);
		printf(" Grade Character: ");
		scanf(" %c", &a[i]->c);
		printf(" Marks: ");
		scanf("%f", &a[i]->m);
	}
}

void displayStudents(struct student* a[], int n){
	int i;
	
	for(int i=0; i<n; i++){
		printf("\n\n Student %d: \n", i+1);
		printf(" ID: %d", a[i]->id);
	
		printf("\n Grade Character: %c", a[i]->c);
		
		printf("\n Marks: %.2f\n", a[i]->m);
		
	}
}
