//Program to display a matrix on screen

#include <stdio.h>

void main()
{
int matrix[2][3]={12,15,18,9,16}, i, j;

printf("\nThe entered matrix is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}


//Program to read a matrix of size M*N from user and display it on screen
#include <stdio.h>

#define M 2
#define N 4
void main() {
int matrix[M][N], i, j;

printf("\nEnter the matrix elements:\t");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
scanf("%d", &matrix[i][j]);
}
}
printf("\nThe entered matrix is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
}



//Program to read two M*N matrices and display their sum/difference

#include <stdio.h>

#define M 3
#define N 3
void main()
{
int matrix1[M][N], matrix2[M][N], sum[M][N], i, j;

printf("\nEnter the elements of first matrix:\t");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
scanf("%d", &matrix1[i][j]);
}
}
printf("\nThe first matrix is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t", matrix1[i][j]);
}
printf("\n");
}

printf("\nEnter the elements of second matrix:\t");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
scanf("%d",&matrix2[i][j]);
}
}
printf("\nThe second matrix is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t",matrix2[i][j]);
}
printf("\n");
}
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
sum[i][j]=matrix1[i][j]+matrix2[i][j];
}
}
printf("\nThe sum of the matrices is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("\t%d", sum[i][j]);
}
printf("\n");
}
}


/*Program to compute the product of two matrices if possible*/
#include <stdio.h>
void main()
{
int matrix1[10][10],matrix2[10][10],i,j,k,product[10][10],M,N,P,Q;
int row_mul_col=0;

printf("\nEnter order of first matrix (less than 10*10):\t");
scanf("%d %d",&M,&N);
printf("\nEnter order of second matrix (less than 10*10):\t");
scanf("%d %d",&P,&Q);
if(N!=P)
{
printf("\nThe matrices are unsuitable for multiplication.\n");
}
printf("\nEnter the elements of first matrix:\t");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
scanf("%d",&matrix1[i][j]);
}
}
printf("\nThe first matrix is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<N;j++)
{
printf("%d\t",matrix1[i][j]);
}
printf("\n");
}
printf("\nEnter the elements of second matrix:\t");
for(i=0;i<P;i++)
{
for(j=0;j<Q;j++)
{
scanf("%d",&matrix2[i][j]);
}
}
printf("\nThe second matrix is:\n");
for(i=0;i<P;i++)
{
for(j=0;j<Q;j++)
{
printf("%d\t",matrix2[i][j]);
}
printf("\n");
}
/*multiply two matrices*/
for(i=0;i<M;i++)
//first row
{
for(j=0;j<Q;j++)
//second col
{
for(k=0;k<N;k++) //first col
{
row_mul_col += matrix1[i][k]*matrix2[k][j];
}
product[i][j]=row_mul_col;
row_mul_col=0;
}
}
printf("\nThe matrix after multiplication is:\n");
for(i=0;i<M;i++)
{
for(j=0;j<Q;j++)
{
printf("%d\t",product[i][j]);
}
printf("\n");
}
}


