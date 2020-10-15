#include<stdio.h>

int main()

{

    int i,j,n,u[100],v[100],c=0,d=0,t1,t2;

    float t;

    printf("Enter the number of ranks: ");

    scanf("%d",&n);

    printf("Enter the ranks: \n");

    for(i=0;i<n;i++)

    {

        printf("U[%d]:",i);

        scanf("%d", &u[i]);

        printf("V[%d]:",i);

        scanf("%d",&v[i]);


			 
			}

    for(i=0;i<n;i++)

    {

        for(j=0;j<(n-i-1);j++)

        {

            if(u[j]>u[j+1])

            {

                t1=u[j];

                t2=v[j];

                u[j]=u[j+1];

                v[j]=v[j+1];

                u[j+1]=t1;

                v[j+1]=t2;

            }

       }

   } 

    

    for(i=0;i<(n-1);i++)

    {

        for(j=i+1;j<n;j++)

        {

            if(v[j]>v[i])

            {c=c+1;}

            else

            {d=d+1;}

        }

    }



    t=((float)(c-d)/(c+d));

    printf("The value of the Kendall's Tau is,%.2f",t);

}

