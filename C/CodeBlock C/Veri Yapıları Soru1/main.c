#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    int dizi[boyut];

    printf("********PROGRAMA HOSGELDINIZ********\n\n");
    printf("Dizinin Boyutunu Giriniz= ");
    scanf("%d",&boyut);

    for(int i=0;i<boyut;i++)
    {
        printf("Dizinin %d. Degerini Giriniz= ",i+1);
        scanf("%d",&dizi[i]);

    }



    return 0;
}
