#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Verileri kullanici tarafindan girilecektir.

    int i,j,satir1,sutun1;

    printf("Satir Sayisini Giriniz= ");
    scanf("%d",&satir1);
    printf("Sutun Sayisini Giriniz= ");
    scanf("%d",&sutun1);

    int dizi1[satir1][sutun1];
    int dizi2[satir1][sutun1];

    for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            printf("1.Dizinin [%d][%d] -->",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
            printf("\n");
            printf("2.Dizinin [%d][%d] -->",i+1,j+1);
            scanf("%d",&dizi2[i][j]);
            printf("\n");
        }
    }

    int toplam[satir1][sutun1];

    for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    printf("Toplama Sonucu\n");

       for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            printf("%d ",toplam[i][j]);
        }
        printf("\n");
    }


    int carpim[satir1][sutun1];

    for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            carpim[i][j]=dizi1[i][j]*dizi2[i][j];
        }
    }

    printf("Carpma Sonucu\n");

       for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            printf("%d ",carpim[i][j]);
        }
        printf("\n");
    }

    int cikarma[satir1][sutun1];

    for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            cikarma[i][j]=dizi1[i][j]-dizi2[i][j];
        }
    }

    printf("Cikarma Sonucu\n");

       for(i=0;i<satir1;i++)
    {
        for(j=0;j<sutun1;j++)
        {
            printf("%d ",cikarma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
