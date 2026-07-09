#include<stdio.h>

int main()
{
    int o1r,o1c, o2r, o2c, i, j,  a[10][10], b[10][10], c[10][10];

    printf("Enter the order of the two matrices (with spaces): \n Matrix -1: ");
    scanf("%d", &o1r);
    scanf("%d", &o1c);
    printf("Matrix - 2: ");
    scanf("%d", &o2r);
    scanf("%d", &o2c);					

	int* a = (int* )malloc(sizeof(int));
    if((o1r != o2r) || (o1c != o2c) )
    {
    	printf("The matrices orders does not match...");
    	return 0;
	}
        
printf("\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ ");
    else {
        printf("Now, enter the matrices: ");

        printf("Enter matrix a:");

        for(i = 0; i<o1r; i++) {
            for(j=0; j< o1c; j++) {
                printf("Enter a%d%d = ", i+1, j+1);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter matrix b:");

        for(i = 0; i<o2r; i++) {
            for(j=0; j< o2c; j++) {
                printf("Enter b%d%d = ", i+1, j+1);
                scanf("%d", &b[i][j]);
            }
        }

        printf("\n The entered matrices are: \n");
        showMatrix(a, o1r, o1c);
        showMatrix(b, o2r, o2c);

        for(i = 0; i<o2r; i++) {
            for(j=0; j< o2c; j++) {
                c[i][j]=a[i][j]+b[i][j];
            }
        }

        printf("The resultant matrix after addition is: ");
        showMatrix(c, o1r, o1c);
    }

return 0;
}

void showMatrix(int d[10][10], int i ,int j)
{
    int l,m;
	printf("\n");
    for(l=0; l<i; l++) {
        for(m=0; m<j; m++) {
            printf("\t %d", d[l][m]);
        }
        printf("\n");
    }
}
