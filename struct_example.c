// C program for struct (a user-defined data type)

#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	
	//creating a struct 
	struct myFirstStruct{
		int id;
		char group;
		char color[20];
	}s1; // creating a variable s1
	
	// assigning values
	s1.id = 1;
	s1.group = 'A';
	strcpy(s1.color,"Magenta");
	
	// printing struct variable values
	printf("\n ID: %d, Group: %c, Colour: %s ", s1.id, s1.group, s1.color);
	
	
	
	
	// creating multiple variables
	struct myFirstStruct s2, s3, s4;
	
	// assigning values
	
	s2.id = 20;
	s2.group = 'b';
	strcpy(s2.color,"Green");
	
	s3.id = 24;
	s3.group = 'h';
	strcpy(s3.color,"Orange");
	
	s4.id = 21;
	s4.group = 'k';
	strcpy(s4.color,"Cyan Green");
	
	// printing
	printf("\n ID: %d, Group: %c, Colour: %s ", s2.id, s2.group, s2.color);
	printf("\n ID: %d, Group: %c, Colour: %s ", s3.id, s3.group, s3.color);
	printf("\n ID: %d, Group: %c, Colour: %s ", s4.id, s4.group, s4.color);
		
	
	return 0;
}

