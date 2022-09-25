#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    float n,i;
    float toplam=0;
    float carpim=0;

    for(n=1;n<=20;n++){

        for(i=1;i<=n;i++){

        toplam=toplam+(i-n)/(i+n);

        }

        a+=1;
        carpim=toplam*n;
        printf("%d. - Islemin Sonucu= %.4f\n",a,carpim);
    }


    return 0;
}

