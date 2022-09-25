#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char start,cevap;
    int i,puan,dogru,yanlis,islem;

    printf("********TEST SORUSU PROGRAMINA HOS GELDINIZ!********\n\n");
    printf("Bilgilendirme\n");
    printf("-------------\n");
    printf("->5 Test Sorusu Bulunmaktadir\n");
    printf("->Her Soru 20 Puan Seklindedir\n\n");

    basla:

    puan=0;
    dogru=0;
    yanlis=0;

    printf("Teste Baslamak Icin 'E' Harfini Tuslayiniz= ");
    scanf("%s",&start);

        if(start == 'E')
        {
            printf("Test Baslatiliyor...\n\n");
            Sleep(1250);

            printf("1-)55 Sayisinin 5'e Bolumunde Bolum Kactir?\n");
            printf("A-23\n");
            printf("B-13\n");
            printf("C-11\n");
            printf("D-10\n\n");
            printf("Cevap= ");
            scanf("%s",&cevap);

                if (cevap == 'A')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru2;
                }
                if (cevap == 'B')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru2;
                }
                if (cevap == 'C')
                {
                    printf("TEBRIKLER Dogru Cevabi Verdiniz!\n");
                    dogru+=1;
                    puan+=20;
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru2;
                }
                if (cevap == 'D')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru2;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz!\n");
                    printf("Bu Soru Yanlis Sayilacaktir!\n");
                    yanlis+=1;
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru2;
                }

            soru2:

            printf("2-)Turkiye'nin Baskenti Neresidir?\n");
            printf("A-Izmir\n");
            printf("B-Adana\n");
            printf("C-Istanbul\n");
            printf("D-Ankara\n\n");
            printf("Cevap= ");
            scanf("%s",&cevap);

                if (cevap == 'A')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= D\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru3;
                }
                if (cevap == 'B')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= D\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru3;
                }
                if (cevap == 'C')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= D\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru3;
                }
                if (cevap == 'D')
                {
                    printf("TEBRIKLER Dogru Cevabi Verdiniz!\n");
                    dogru+=1;
                    puan+=20;
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru3;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz!\n");
                    yanlis+=1;
                    printf("Bu Soru Yanlis Sayilacaktir!\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru3;
                }

            soru3 :

            printf("3-)Istanbulu Kim Fethetmistir?\n");
            printf("A-Fatih Sultan Mehmet\n");
            printf("B-Mehmet Ali SIVRI\n");
            printf("C-Kanuni Sultan Suleyman\n");
            printf("D-Yavuz Sultan Selim\n\n");
            printf("Cevap= ");
            scanf("%s",&cevap);

                if (cevap == 'A')
                {
                    printf("TEBRIKLER Dogru Cevabi Verdiniz!\n");
                    dogru+=1;
                    puan+=20;
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru4;
                }
                if (cevap == 'B')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= A\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru4;
                }
                if (cevap == 'C')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= A\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru4;
                }
                if (cevap == 'D')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= A\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru4;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz!\n");
                    yanlis+=1;
                    printf("Bu Soru Yanlis Sayilacaktir!\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru4;
                }

            soru4 :

            printf("4-)Galatasaray Kulubu Hangi Yil Kurulmustur?\n");
            printf("A-1903\n");
            printf("B-1907\n");
            printf("C-1905\n");
            printf("D-1963\n\n");
            printf("Cevap= ");
            scanf("%s",&cevap);

                if (cevap == 'A')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru5;
                }
                if (cevap == 'B')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru5;
                }
                if (cevap == 'C')
                {
                    printf("TEBRIKLER Dogru Cevabi Verdiniz!\n");
                    dogru+=1;
                    puan+=20;
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru5;
                }
                if (cevap == 'D')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= C\n\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru5;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz!\n");
                    yanlis+=1;
                    printf("Bu Soru Yanlis Sayilacaktir!\n");
                    printf("Diger Soruya Aktariliyorsunuz...\n\n");
                    Sleep(1350);
                    goto soru5;
                }

            soru5 :

            printf("5-)Bursaspor Hangi Yil Sampiyon Olmustur?\n");
            printf("A-2010\n");
            printf("B-2008\n");
            printf("C-2013\n");
            printf("D-2015\n\n");
            printf("Cevap= ");
            scanf("%s",&cevap);

                if (cevap == 'A')
                {
                    printf("TEBRIKLER Dogru Cevabi Verdiniz!\n");
                    dogru+=1;
                    puan+=20;
                    goto son;
                }
                if (cevap == 'B')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= A\n\n");
                    goto son;
                }
                if (cevap == 'C')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    printf("Dogru Cevap= A\n\n");
                    goto son;
                }
                if (cevap == 'D')
                {
                    printf("Yanlis Cevap Verdiniz!\n");
                    yanlis+=1;
                    goto son;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz!\n");
                    yanlis+=1;
                    printf("Bu Soru Yanlis Sayilacaktir!\n");
                    goto son;
                }

            son :

                printf("-------------------------------------------\n\n");
                printf("TEST TAMAMLANMISTIR!\n\n");
                printf("Puan Hesaplamalari Yapiliyor...\n\n");
                Sleep(2000);

                printf("\n\n");
                printf("Puan= %d\n",puan);
                printf("Dogru Sayisi= %d\n",dogru);
                printf("Yanlis Sayisi= %d\n",yanlis);

                again:

                printf("Testi Tekrardan Uygulamak Istiyor Musunuz?\n");
                printf("1-Evet\n");
                printf("2-Hayir\n");
                printf("Cevap= ");
                scanf("%d",&islem);

                if (islem == 1)
                {
                    printf("Test Tekrardan Baslatiliyor...\n\n");
                    Sleep(1500);
                    goto basla;
                }
                if (islem == 2)
                {
                    printf("Sistem Kapatiliyor...");
                    Sleep(1000);
                    return 0 ;
                }
                else
                {
                    printf("Yanlis Tuslama Yaptiniz Tekrar Deneyiniz!\n\n");
                    goto again;
                }


        }
        else
        {
                printf("Yanlis Tusladiniz Lutfen Tekrar Deneyiniz!\n\n");
                goto basla;
        }

    return 0;
}
