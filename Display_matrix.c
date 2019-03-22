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



/*Program to read two M*N matrices and display their sum/difference*/

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




