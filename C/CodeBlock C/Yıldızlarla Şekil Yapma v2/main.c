#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,i,j,k,boy,eni;

    baslangic:

    printf("Yildizlarla Sekil Yaptirma Programi\n");
    printf("-----------------------------------------------------------\n");
    printf("1-Renault Logosu\n");
    printf("2-Buyuklugunu Kullanicinin Belirledigi Dikdortgeni Cizdirme\n");
    printf("3-Buyuklugunu Kullanicinin Belirledigi Ucgeni Cizdirme\n");
    printf("4-Elmas Geometrisi 'Renault Logosunun Tersi'\n");
    printf("Uygulamak Istediginiz Islemi Giriniz= ");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1 :

            //UST KISMI

            for(i=1;i<=10;i++)
            {
                for(j=10;j>=i;j--)
                {
                    printf(" ");
                }
                for(k=10;k>=i;k--)
                {
                    printf("*");
                }
                for(j=1;j<=i;j++)
                {
                    printf("    ");
                }
                for(k=10;k>=i;k--)
                {
                    printf("*");
                }
                printf("\n");
            }

            //ALT KISMI

            for(i=1;i<=10;i++)
            {
                for(k=1;k<=i;k++)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                for(k=10;k>=i;k--)
                {
                    printf("    ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
                }
                printf("\n\n");
                goto baslangic;
                break;


        case 2 :

            printf("Seklin Boy Oranini Giriniz= ");
            scanf("%d",&boy);
            printf("Seklin En Oranini Giriniz= ");
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

        case 3 :

            printf("Seklin Boy Oranini Giriniz= ");
            scanf("%d",&boy);

                for(i=1;i<=boy;i++)
                {
                    for(j=1;j<=i;j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }

                printf("\n\n");
                goto baslangic;
                break;

        case 4 :

            //UST KISMI

            for(i=1;i<=10;i++)
            {
                for(j=10;j>=i;j--)
                {
                    printf(" ");
                }
                for(k=10;k>=i;k--)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("****");
                }
                for(k=10;k>=i;k--)
                {
                    printf(" ");
                }
                printf("\n");
            }

            //ALT KISMI

            for(i=1;i<=10;i++)
            {
                for(k=1;k<=i;k++)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf(" ");
                }
                for(k=10;k>=i;k--)
                {
                    printf("****");
                }
                for(j=1;j<=i;j++)
                {
                    printf(" ");
                }
                printf("\n");
            }
            printf("\n\n");
            goto baslangic;
            break;

        default :

            printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
            goto baslangic;
            break;
    }

    return 0;
}
