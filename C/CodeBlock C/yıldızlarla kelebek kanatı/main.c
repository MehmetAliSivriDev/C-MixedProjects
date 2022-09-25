#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,a,s,d,f,m,n;

    //UST

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(a=5;a>=i;a--)
        {
            printf(" ");
        }
        for(d=5;d>=i;d--)
        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf("*");
        }

        printf("\n");
    }

//ALT

    for(k=1;k<=5;k++)
    {
        for(l=5;l>=k;l--)
        {
            printf("*");
        }
        for(d=1;d<=k;d++)
        {
            printf(" ");
        }
        for(m=1;m<=k;m++)
        {
            printf(" ");
        }
        for(n=5;n>=k;n--)
        {
            printf("*");
        }
        printf("\n");
    }





    return 0;
}
