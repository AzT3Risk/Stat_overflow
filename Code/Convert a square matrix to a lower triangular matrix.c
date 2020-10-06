#include<stdio.h>

void main()

{

int n,i,j,k;

float a[10][10], r; 


printf("Enter the order of the matrix \n");

scanf("%d",&n);

printf("Enter the elements of the matrix \n");

for(i=0;i<n;i++)

{

for(j=0;j<n;j++)

{

printf("a[%d][%d] = ",i+1,j+1);

scanf("%f",&a[i][j]);

}

}



for(i=n-1;i>0;i--)

{

for(j=i-1;j>=0;j--)

{

r=a[j][i]/a[i][i];

for(k=i;k>=0;k--)

{a[j][k]=a[j][k]-a[i][k]*r;

}

}

printf("The triangularised matrix is \n");

for(i=0;i<n;i++)

{

for(j=0;j<n;j++)

{

printf("%f\t",a[i][j]);

}

printf("\n");

}

} 

