#include <stdio.h>
#include <stdlib.h>

int main()
{
int secim,en,i,j,k,boy,eni;

    baslangic:
    printf("--------------------------------------------------------\n");
    printf("----------Cizdirmek Istediginiz Sekli Seciniz-----------\n\n");
    printf("1-En Boy Oranina Kullanicinin Karar Verdigi Yildiz Sekli\n");
    printf("2-Ici Dolu Ucgen\n");
    printf("3-Kelebek\n");
    printf("Uygulamak Istediginiz Secimi Giriniz= ");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1 :

            printf("Boy Orani= ");
            scanf("%d",&boy);
            printf("En Orani= ");
            scanf("%d",&eni);

            for(i=1;i<=boy;i++)
            {
                for(j=1;j<=eni;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            printf("\n\n");
            goto baslangic;
            break;
        case 2 :

            for (i=1;i<=10;i++)
            {
                for(j=10;j>=i;j--)
                {
                    printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                    printf("*");
                }
                for(k=1;k<=i;k++)
                {
                    printf("*");
                }

                printf("\n");
            }
            printf("\n\n");
            goto baslangic;
            break;
        case 3 :

            //UST KISIM
            for (i=1;i<=10;i++)
            {

                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                for(k=10;k>=i;k--)
                {
                    printf(" ");
                }
                for(k=10;k>=i;k--)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
            }

                //ALT KISIM
                for(i=1;i<=10;i++)
                {
                    for(j=10;j>=i;j--)
                    {
                        printf("*");
                    }
                    for(k=1;k<=i;k++)
                    {
                        printf(" ");
                    }
                    for(k=1;k<=i;k++)
                    {
                        printf(" ");
                    }
                    for(j=10;j>=i;j--)
                    {
                        printf("*");
                    }

                printf("\n");
                }
                printf("\n\n");
                goto baslangic;
                break;

        default :

            printf("Hatali Islem Girdiniz Lutfen Tekrar Deneyiniz!!\n\n");
            goto baslangic;
            break;
    }

    return 0;
}
