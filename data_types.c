#include<stdio.h>

int main(){
	
	int a = 5;
	float b = 2.0;
	short c = 2;
	double d = 4.001972;
	long int e = 35000;
	char f = 'a';
	long double g = 2414.237542704L;
	long long int h = 456456435678LL;
	
	printf("\n The data types and their sizes in Bytes in C Programming language are: \n");
	printf("integer(int) = %d\n float (float) = %f\n short (short) = %hd\n double (double) = %lf\n long integer (long int) = %ld\n  character (char) = %c\n Long double (long double) = %Lf\n long long integer (long long int) = %lli",a,b,c,d,e,f,g,h);
	printf("\n The sizes of the same data types are: \n");
	printf("integer = %zu\n float = %zu\n short = %zu\n double = %zu\n long int = %zu\n char = %zu\n  long long integer = %zu\n long double = %zu", sizeof(int), sizeof(float), sizeof(short), sizeof(double), sizeof(long int), sizeof(char), sizeof(long long int), sizeof(long double));
	
	
	
	
	return 0;
}
