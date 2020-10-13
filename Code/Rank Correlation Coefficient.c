#include<stdio.h>

#include<math.h>

void main()

{

    int n,i,j;

    float d=0,r,a[100],b[100],u[100],v[100],t1,t2;

    printf("Enter no of ranks:");

    scanf("%d",&n);

    printf("Enter the values:\n");

    for(i=0;i<n;i++)

    {

        printf("a[%d]:",i);

        scanf("%f",&a[i]);

        printf("b[%d]:",i);

        scanf("%f",&b[i]);

        u[i]=i+1;

        v[i]=i+1;

    }

    for(i=0;i<n-1;i++)

    {

        for(j=0;j<n-1-i;j++)

        {

            if(a[j]<a[j+1])

            {

                t1=a[j];

                t2=b[j];

                a[j]=a[j+1];

                b[j]=b[j+1];

                a[j+1]=t1;

                b[j+1]=t2;

            }

        }

    }

    for(i=0;i<n-1;i++)

    {

        for(j=0;j<n-1-i;j++)

        {

            if(b[j]<b[j+1])

            {

                t1=u[j];

                t2=b[j];

                u[j]=u[j+1];

                b[j]=b[j+1];

                u[j+1]=t1;

                b[j+1]=t2;

            }

        }

    }

    for(i=0;i<n;i++)

    {

        d=d+pow((u[i]-v[i]),2);

    }

    r=1-(6*d)/(n*(n*n-1));

    printf("rank correlation is, %f",r);

}

