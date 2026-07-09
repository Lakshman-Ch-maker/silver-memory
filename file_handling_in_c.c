// C program for File Handling

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char a[20];
	FILE* fptr;
	
	
	fptr = fopen("RubyBilly.txt","r");
	
	if(fptr == NULL){
		printf("\n file not opened  !");
		return -1;
	}
	else{
		printf("\n The file contents are: ");
		fgets(a,6,fptr); // reading 6 characters into "a" from "fptr"
		printf("\n The content in \"RubyBilly.txt\" is: %s",a);
	}
	fclose(fptr);
	return 0;
}


