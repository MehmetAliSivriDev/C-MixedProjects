#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j,r;

    printf("satir sayisini giriniz: ");
    scanf("%d",&satir);

    printf("sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int dizi1[satir][sutun];

    for (i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\n dizinin degeri [%d][%d]=",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
        }
    }

    printf("\n\ndizi1'in degerleri\n");

    for(int a=0;a<satir;a++)
    {
        for(int b=0;b<sutun;b++)
        {
            printf("%d ",dizi1[a][b]);
        }
        printf("\n");
    }

    printf("\n\n\n");


    printf("satir sayisini giriniz: ");
    scanf("%d",&satir);

    printf("sutun sayisini giriniz: ");
    scanf("%d",&sutun);

    int dizi2[satir][sutun];

    for(int s=0;s<satir;s++)
    {
        for(int d=0;d<sutun;d++)
        {
            printf("\ndizinin degeri [%d][%d]=",s+1,d+1);
            scanf("%d",&dizi2[s][d]);
        }
    }

    printf("\ndizi2'in degerleri\n");

    for(int w=0;w<satir;w++)
    {
        for(int e=0;e<sutun;e++)
        {
            printf("%d ",dizi2[w][e]);
        }
        printf("\n");
    }
    printf("\n\n\n");


    int toplam[satir][sutun];

    for (r=0;r<satir;r++);
    {
        for(int t=0;t<sutun;t++)
        {
            toplam[r][t]=dizi1[r][t]+dizi2[r][t];
        }
    }

    for(int y=0;y<satir;y++)
    {
        for(int u=0;u<sutun;u++)
        {
            printf("%d ",toplam[y][u]);
        }
        printf("\n");
    }

    return 0;
}
