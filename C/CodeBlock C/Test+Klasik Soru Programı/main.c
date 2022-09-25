#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int secim,ts,ks,dogru,yanlis,puan;
    char start,cevap;
    char kcevap[30];
    char cevapkontrol=0;

    //KLASIK-TARIH CEVAPLAR
    char ktsoru1[]="KanuniSultanSuleyman";
    char ktsoru2[]="IkinciMurad";
    char ktsoru3[]="YavuzSultanSelim";
    char ktsoru4[]="OrhanGazi";
    char ktsoru5[]="OsmanGazi";

    //KLASIK-SPOR CEVAPLAR
    char kssoru1[]="Galatasaray";
    char kssoru2[]="GheorgheHagi";
    char kssoru3[]="Bursaspor";
    char kssoru4[]="Fenerbahce";
    char kssoru5[]="FatihTerim";

    //KLASIK-EDEBIYAT CEVAPLAR
    char kesoru1[]="OguzAtay";
    char kesoru2[]="OrhanPamuk";
    char kesoru3[]="AhmetHamdiTanpinar";
    char kesoru4[]="YasarKemal";
    char kesoru5[]="HalidZiyaUsakligil";

    printf("********SORU PROGRAMINA HOS GELDINIZ********\n\n");
    printf("****GENEL BILGILENDIRME*****\n");
    printf("-Her Konuda 5 Soru Bulunmaktadir\n");
    printf("-Her Soru 20 Puan Seklindedir\n");
    printf("****BASARILAR****\n\n");

    baslangic :

        dogru=0;
        yanlis=0;
        puan=0;

    printf("1-)Test Sorusu Cozmek\n");
    printf("2-)Klasik Soru Cozmek\n");
    printf("Cozmek Istediginiz Soru Tarzini Giriniz= ");
    scanf("%d",&secim);

        switch(secim)
        {
            //TEST BOLUMU

            case 1 :

                testsecimi :

                printf("\n\nCozmek Istediginiz Konuyu Seciniz!\n");
                printf("1-)Tarih\n");
                printf("2-)Spor\n");
                printf("3-)Matematik\n");
                printf("Hangi Konuyu Cozmek Istiyorsunuz?= ");
                scanf("%d",&ts);

                    switch(ts)
                    {
                    //TEST-TARIH
                        case 1 :
                            ttb:
                            printf("\n\nKonu Secimi= TARIH\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                            printf("Test Baslatiliyor...\n\n");
                            Sleep(1500);

                                soru1:

                                printf("1-)SORU= Istanbulu Hangi Padisah Fethetmistir?\n");
                                printf("A-)Yavuz Sultan Selim\n");
                                printf("B-)Kanuni Sultan Suleyman\n");
                                printf("C-)1.Murad\n");
                                printf("D-)Fatih Sultan Mehmet\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru2;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru2;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru2;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru2;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru1;
                                    }


                                soru2 :

                                printf("2-)SORU= Ataturk Hangi Yil Dogmustur?\n");
                                printf("A-)1881\n");
                                printf("B-)1905\n");
                                printf("C-)1923\n");
                                printf("D-)1889\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru3;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru3;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru3;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru3;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru2;
                                    }

                                soru3 :

                                printf("3-)SORU= Ataturk Hangi Yil Vefat Etmistir?\n");
                                printf("A-)1938\n");
                                printf("B-)1923\n");
                                printf("C-)1927\n");
                                printf("D-)1931\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru4;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru4;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru4;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru4;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru3;
                                    }

                                soru4 :

                                printf("4-)SORU= Hangi Padisah Gemileri Karadan Yurutmustur?\n");
                                printf("A-)Kanuni Sultan Suleyman\n");
                                printf("B-)Fatih Sultan Mehmet\n");
                                printf("C-)Yavuz Sultan Selim\n");
                                printf("D-)1.Mahmud\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru5;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru5;

                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru5;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru5;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru4;
                                    }

                                soru5 :

                                printf("5-)SORU= Cumhuriyet Hangi Yil Ilan Edilmistir?\n");
                                printf("A-)1881\n");
                                printf("B-)1905\n");
                                printf("C-)1923\n");
                                printf("D-)1889\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitistt;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitistt;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        Sleep(1350);
                                        goto bitistt;

                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitistt;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru5;
                                    }

                                bitistt:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                tekrar1:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto tekrar1;
                                }

                            }
                            else
                            {
                            printf("Hatali Giris Yaptiniz Tekrar Deneyiniz!\n");
                            goto ttb;
                            }
                            break;

                        //TEST-SPOR

                        case 2 :

                            stb:
                            printf("\n\nKonu Secimi= SPOR\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                            printf("Test Baslatiliyor...\n\n");
                            Sleep(1500);

                                soru21:

                                printf("1-)SORU= GALATASARAY Hangi Yil Kurulmustur?\n");
                                printf("A-)1907\n");
                                printf("B-)1963\n");
                                printf("C-)1903\n");
                                printf("D-)1905\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru22;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru22;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru22;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru22;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru21;
                                    }


                                soru22 :

                                printf("2-)SORU= Fenerbahce Hangi Yil Kurulmustur?\n");
                                printf("A-)1907\n");
                                printf("B-)1905\n");
                                printf("C-)1963\n");
                                printf("D-)1903\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru23;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru23;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru23;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru23;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru22;
                                    }

                                soru23 :

                                printf("3-)SORU= Besiktas Hangi Yil Kurulmustur?\n");
                                printf("A-)1903\n");
                                printf("B-)1923\n");
                                printf("C-)1907\n");
                                printf("D-)1905\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru24;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru24;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru24;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru24;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru23;
                                    }

                                soru24 :

                                printf("4-)SORU= Trabzonspor Hangi Yil Kurulmustur?\n");
                                printf("A-)1961\n");
                                printf("B-)1967\n");
                                printf("C-)1963\n");
                                printf("D-)1960\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru25;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru25;

                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru25;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru25;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru24;
                                    }

                                soru25 :

                                printf("5-)SORU= Bursaspor Hangi Yil Kurulmustur?\n");
                                printf("A-)1961\n");
                                printf("B-)1905\n");
                                printf("C-)1963\n");
                                printf("D-)1967\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitisst;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitisst;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        Sleep(1350);
                                        goto bitisst;

                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitisst;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru25;
                                    }

                                bitisst:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                tekrar2:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto tekrar2;
                                }

                            }
                            else
                            {
                            printf("Hatali Giris Yaptiniz Tekrar Deneyiniz!\n");
                            goto stb;
                            }
                            break;

                        //TEST-MATEMATIK

                        case 3 :

                            mtb:
                            printf("\n\nKonu Secimi= MATEMATIK\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                            printf("Test Baslatiliyor...\n\n");
                            Sleep(1500);

                                soru31:

                                printf("1-)SORU= 100 Hangi Sayiya Tam Bolunmez?\n");
                                printf("A-)10\n");
                                printf("B-)20\n");
                                printf("C-)5\n");
                                printf("D-)3\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru32;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru32;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= D\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru32;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru32;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru31;
                                    }


                                soru32 :

                                printf("2-)SORU= 75 Sayisinin 7'ye Bolumunden Kalan Kactir?\n");
                                printf("A-)5\n");
                                printf("B-)3\n");
                                printf("C-)0\n");
                                printf("D-)4\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru33;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru33;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru33;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru33;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru32;
                                    }

                                soru33 :

                                printf("3-)SORU= (20/5)*4=?\n");
                                printf("A-)16\n");
                                printf("B-)1\n");
                                printf("C-)12\n");
                                printf("D-)20\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru34;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru34;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru34;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= A\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru34;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru33;
                                    }

                                soru34 :

                                printf("4-)SORU= 144 Sayisinin Karekoku Kactir?\n");
                                printf("A-)11\n");
                                printf("B-)12\n");
                                printf("C-)14\n");
                                printf("D-)13\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru35;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru35;

                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru35;
                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= B\n");
                                        yanlis+=1;
                                        printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                        Sleep(1350);
                                        goto soru35;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru34;
                                    }

                                soru35 :

                                printf("5-)SORU= (x*4)+10=26 ise X=?\n");
                                printf("A-)5\n");
                                printf("B-)3\n");
                                printf("C-)4\n");
                                printf("D-)2\n\n");
                                printf("Cevap= ");
                                scanf("%s",&cevap);

                                    if (cevap == 'A')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitismt;
                                    }
                                    if(cevap == 'B')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitismt;
                                    }
                                    if(cevap == 'C')
                                    {
                                        printf("TEBRIKLER Dogru Cevabi Sectiniz\n");
                                        dogru+=1;
                                        puan+=20;
                                        Sleep(1350);
                                        goto bitismt;

                                    }
                                    if(cevap == 'D')
                                    {
                                        printf("MAALESEF Yanlis Cevabi Sectiniz\n");
                                        printf("Dogru Cevap= C\n");
                                        yanlis+=1;
                                        Sleep(1350);
                                        goto bitismt;
                                    }
                                    else
                                    {
                                        printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!\n\n");
                                        goto soru35;
                                    }

                                bitismt:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                tekrar3:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto tekrar3;
                                }

                            }
                            else
                            {
                            printf("Hatali Giris Yaptiniz Tekrar Deneyiniz!\n");
                            goto mtb;
                            }
                            break;

                        default :

                            printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!!\n\n");
                            goto testsecimi;
                            break;
                    }


                //KLASIK BOLUMU

                case 2 :

                    klasiksecimi :

                    printf("\n********UYARI********\n");
                    printf("Cevaplar Su Sekilde Girilmelidir= 'MehmetAliSivri'");
                    printf("\n\nCozmek Istediginiz Konuyu Seciniz!\n");
                    printf("1-)Tarih\n");
                    printf("2-)Spor\n");
                    printf("3-)Edebiyat\n");
                    printf("Hangi Konuyu Cozmek Istiyorsunuz?= ");
                    scanf("%d",&ks);

                        switch(ks)
                        {
                            case 1 :

                        //KLASIK-TARIH

                            tks:

                            printf("\n\nKonu Secimi= TARIH\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                                printf("Test Baslatiliyor...\n\n");
                                Sleep(1500);

                                    tklasik1 :

                                        printf("1-)Hurrem Sultan Hangi Padisahin Esidir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,ktsoru1);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik2;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= KanuniSultanSuleyman\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik2;
                                        }

                                    tklasik2 :

                                        printf("2-)Fatih Sultan Mehmet'in Babasi Kimdir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,ktsoru2);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik3;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= Ikinci Murad\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik3;
                                        }

                                    tklasik3 :

                                        printf("3-)Kanuni Sultan Suleyman'in Babasi Kimdir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,ktsoru3);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik4;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= YavuzSultanSelim\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik4;
                                        }

                                    tklasik4 :

                                        printf("4-)Bursa'yi Hangi Padisah Fethetmistir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,ktsoru4);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik5;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= OrhanGazi\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto tklasik5;
                                        }

                                    tklasik5 :

                                        printf("5-)Osmanli'yi Kim Kurmustur?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,ktsoru5);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitiskt;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= OsmanGazi\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitiskt;

                                        }

                                bitiskt:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                ktekrar1:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto ktekrar1;
                                }


                            }
                            else
                            {
                                printf("Hatali Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n\n");
                                goto tks;
                            }
                            break;

                        case 2 :

                        //KLASIK-SPOR

                            sks:

                            printf("\n\nKonu Secimi= SPOR\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                                printf("Test Baslatiliyor...\n\n");
                                Sleep(1500);

                                    sklasik1 :

                                        printf("1-)Turkiye'nin En Buyuk Futbol Kulubu Hangisidir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kssoru1);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik2;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= Galatasaray\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik2;
                                        }

                                    sklasik2 :

                                        printf("2-)Turkiye'ye Gelmis En Iyi Orta Saha Oyuncusu Kimdir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kssoru2);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik3;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= Gheorghe Hagi\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik3;
                                        }

                                    sklasik3 :

                                        printf("3-)1963 Yilinda Kurulan SuperLig'de Sampiyon Olmus Takim Hangisidir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kssoru3);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik4;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= Bursaspor\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik4;
                                        }

                                    sklasik4 :

                                        printf("4-)Galatasaray'i 6-0 Yenen Takimin Adi Nedir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kssoru4);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik5;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= Fenerbahce\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto sklasik5;
                                        }

                                    sklasik5 :

                                        printf("5-)Turkiye Tarihindeki En Basarili Teknik Adam Kimdir?\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kssoru5);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitisks;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= FatihTerim\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitisks;

                                        }

                                bitisks:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                ktekrar2:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto ktekrar2;
                                }


                            }
                            else
                            {
                                printf("Hatali Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n\n");
                                goto sks;
                            }
                            break;

                        case 3 :

                            //KLASIK-EDEBIYAT

                            eks:

                            printf("\n\nKonu Secimi= EDEBIYAT\n");
                            printf("Testi Baslatmak Icin 'E' Tuslayiniz= ");
                            scanf("%s",&start);

                            if (start == 'E')
                            {
                                printf("Test Baslatiliyor...\n\n");
                                Sleep(1500);

                                    eklasik1 :

                                        printf("1-)KITABIN ADI= TUTUNAMAYANLAR\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kesoru1);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik2;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= OguzAtay\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik2;
                                        }

                                    eklasik2 :

                                        printf("2-)KITABIN ADI= KARA KITAP\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kesoru2);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik3;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= OrhanPamuk\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik3;
                                        }

                                    eklasik3 :

                                        printf("3-)KITABIN ADI= SAATLERI AYARLAMA ENSTITUSU\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kesoru3);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik4;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= AhmetHamdiTanpinar\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik4;
                                        }

                                    eklasik4 :

                                        printf("4-)KITABIN ADI= INCE MEMED 1\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kesoru4);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik5;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= YasarKemal\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto eklasik5;
                                        }

                                    eklasik5 :

                                        printf("5-)KITABIN ADI= ASK-I MEMNU\n");
                                        printf("Cevap= ");
                                        scanf("%s",&kcevap);

                                        cevapkontrol=strcmp(kcevap,kesoru5);

                                        if(cevapkontrol == 0)
                                        {
                                            printf("\nTEBRIKLER Dogru Cevabi Verdiniz!\n");
                                            dogru+=1;
                                            puan+=20;
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitiske;

                                        }
                                        else
                                        {
                                            printf("\nMAALESEF Yanlis Cevabi Verdiniz!\n");
                                            yanlis+=1;
                                            printf("Dogru Cevap= HalidZiyaUsakligil\n");
                                            printf("Diger Soruya Aktariliyorsunuz...\n\n");
                                            Sleep(1350);
                                            goto bitiske;

                                        }

                                bitiske:

                                printf("***TEST TAMAMLANMISTIR***\n");
                                printf("Puan Hesaplaniyor...\n\n");
                                Sleep(1500);
                                printf("Dogru Sayisi= %d\n",dogru);
                                printf("Yanlis Sayisi= %d\n",yanlis);
                                printf("Puan= %d\n\n",puan);

                                ktekrar3:

                                printf("Tekrardan Soru Cozmek Istiyor Musunuz?\n");
                                printf("1-)Evet\n");
                                printf("2-)Hayir\n");
                                printf("Ne Yapmak Istiyorsunuz?= ");
                                scanf("%d",&secim);

                                if(secim == 1)
                                {
                                    printf("Sistem Sifirlaniyor...\n\n");
                                    Sleep(1350);
                                    goto baslangic;
                                }
                                if(secim == 2 )
                                {
                                    printf("Sistem Kapatiliyor...\n");
                                    Sleep(1350);
                                    return 0;
                                }
                                else
                                {
                                    printf("Hatali Islem Sectiniz Lutfen Tekrar Seciniz!\n\n");
                                    goto ktekrar3;
                                }

                            }
                            else
                            {
                                printf("Hatali Giris Yaptiniz Lutfen Tekrar Deneyiniz!\n\n");
                                goto eks;
                            }
                            break;

                        default :

                            printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!!\n\n");
                            goto klasiksecimi;
                            break;
                        }


                default :

                            printf("Hatali Secim Yaptiniz Lutfen Tekrar Seciniz!!\n\n");
                            goto baslangic;
                            break;

        }

    return 0;

}
