// C program for writing to file

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char a[20], b[20];
	FILE* fptr;
	
	
	fptr = fopen("Capital.txt","wb+");
	
	if(fptr == NULL){
		printf("\n file not opened  !");
		return -1;
	}
	else{
		printf("\n what do you want to write to the file? : ");
		if(fgets(a,sizeof(a),stdin) != NULL){
			printf("\n You entered %s", a);
			fputs(a, fptr);
		}
		else{
			printf("\n Error reading input...");
		}
		rewind(fptr);  // Move file pointer to beginning
		fgets(b, sizeof(b), fptr);
		printf("\n The content in \"Capital.txt\" is: %s", b);
		fclose(fptr);
	}
	
	return 0;
}


