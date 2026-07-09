// C program to Declare structure Globally

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 3
#define MARK 5

struct stu{
	int regId;
	char name[20];
	int marks[MARK];
}s[MAX];

int main(){
	
	int i, j;
	char c[][30] = {"Language", "Maths", "Physical Science", "Biological Science", "Social Science"};
	printf("\n Enter the three students details along eith marks: ");
	for(i=0; i<MAX; i++){
		printf("\nEnter student %d registered ID number: ", i+1);
		scanf("%d", &s[i].regId);
		printf("\nEnter student %d Name: ", i+1);
		scanf("%s", s[i].name);
		printf("\nEnter student %d Marks: ", i+1);
		for(j=0; j<MARK; j++){
			printf("\n\t %s = ", c[j]);
			scanf("%d", &s[i].marks[j]);
		}
				
	}
	
	printf("\n The Entered three students details are: ");
	for(i=0; i<MAX; i++){
		printf("\n\n\n Student %d : \n ID: %d, \n Name: %s, \n Marks: \n", i+1, s[i].regId, s[i].name);
		for(j=0; j<MARK; j++){
			printf("\t %s = %d", c[j], s[i].marks[j]);
		}
				
	}
	
	
	
	return 0;
}
