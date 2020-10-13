#include<stdio.h>

#include<math.h>

void main()

{

    int n,i;

    float p,q,Zp,Z=0,d[100],T;

    printf("Enter p:");

    scanf("%f",&p);

    printf("To test \n H0:Z%0.1f=",p);

    scanf("%f",&Zp);

    printf("Against, H1:not H0");

    printf("\nEnter size of the data:");

    scanf("%d",&n);

    printf("Enter data:\n");

    for(i=0;i<n;i++)

    {

        printf("D[%d]:",i);

        scanf("%f",&d[i]);

        if(d[i]>Zp)

        {

            Z=Z+1;

        }

    }

    q=1-p;

    T=((Z-(float)n*q)/(sqrt((float)n*p*q)));

    if(T<0)

    {

        T=0-T;

    }

    if(T>1.96)

    {

        printf("Since |T|=%f>Tau_0.025=1.96,\n H0 is rejected",T);

    }

    else if(T<1.96)

    {

        printf("Since,\n |T|=%f<Tau_0.025=1.96,\n H0 is accepted",T);

    }

    else

    {

        printf("No conclusion");

    }   

}

