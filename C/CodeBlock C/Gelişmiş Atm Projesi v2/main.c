#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 1.Hesap= Ýsim=Mehmet Ali SÝVRÝ - Þifresi=1905 Bakiyesi=20000TL  Ýban=2
       2.Hesap= Ýsim=Veysel UÐURLU - Þifresi=2002 Bakiyesi=18500TL  Ýban=1
       Döviz Kuru:
        Altýn=800
        Euro=15.5
        Dolar=13.63
        Sterlin=18.25 */

    int secim,secim2,sifre,iban1,iban2;

    float bakiye1,bakiye2,a1,e1,d1,s1,a2,e2,d2,s2,yatirma,cekme,ak,ek,dk,sk,as,es,ds,ss,ab,eb,db,sb;
    bakiye1=20000;
    bakiye2=18500;
    ak=800;
    ek=15.5;
    dk=13.63;
    sk=18.25;

    baslangic:


    printf("*****SIVRI BANKASI DIJITAL SISTEMI*****\n");
    printf("Sifre= ");
    scanf("%d",&sifre);


    //1.HESAP

        if (sifre==1905)
        {
           start:
           printf("**Hosgeldiniz Mehmet Ali Bey**\n");
           printf("Mevcut Bakiyeniz= %.2f\n",bakiye1);
           printf("1-Para Yatirma\n");
           printf("2-Para Cekme\n");
           printf("3-Doviz Islemleri\n");
           printf("4-Baska Bir Hesaba Para Aktarma\n");
           printf("5-Hesaptan Cikis Yapma\n");
           printf("Uygulamak Istediginiz Islemi Girin= ");
           scanf("%d",&secim);

           switch (secim)
           {
            case 1 :
                printf("***Para Yatirma Islemini Sectiniz***\n");
                printf("Mevcut Bakiyeniz= %.2f\n",bakiye1);
                printf("Yatirmak Istediginiz Tutari Girin= ");
                scanf("%f",&yatirma);
                bakiye1=bakiye1+yatirma;
                printf("**Isleminiz Basarý Ile Gerceklesmistir!**\n");
                printf("Guncel Bakiyeniz= %.2f\n\n",bakiye1);
                goto start;
                break;
            case 2 :
                printf("***Para Cekme Islemini Sectiniz***\n");
                printf("Mevcut Bakiyeniz= %.2f\n",bakiye1);
                printf("Cekmek Istediginiz Tutari Girin= ");
                scanf("%f",&cekme);
                bakiye1=bakiye1-cekme;
                printf("**Isleminiz Basarý Ile Gerceklesmistir!**\n");
                printf("Guncel Bakiyeniz= %.2f\n\n",bakiye1);
                goto start;
                break;
            case 3 :
                printf("***Doviz Islemlerini Sectiniz***\n");
                printf("1-Altin Satin Alma\n");
                printf("2-Altin Bozdurma\n");
                printf("3-Euro Satin Alma\n");
                printf("4-Euro Bozdurma\n");
                printf("5-Dolar Satin Alma\n");
                printf("6-Dolar Bozdurma\n");
                printf("7-Sterlin Satin Alma\n");
                printf("8-Sterlin Bozdurma\n");
                printf("Uygulamak Istediginiz Islemi Giriniz= ");
                scanf("%d",&secim2);

                switch (secim2)
                {
                  case 1 :
                    printf("***Altin Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Altin Kuru= %.0f\n",ak);
                    printf("Mevcut Altin Bakiyeniz= %.2f\n",a1);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&as);
                        if (bakiye1-(as*800)>=0){
                        a1=a1+as;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Altin Bakiyeniz= %.2f Gram\n\n",a1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                  case 2 :
                    printf("***Altin Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Altin Kuru= %.0f\n",ak);
                    printf("Mevcut Altin Bakiyeniz= %.2f\n",a1);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&as);
                        if (as<=a1){
                        a1=a1-as;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Altin Bakiyeniz= %.2f Gram\n\n",a1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                  case 3 :
                    printf("***Euro Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Euro Kuru= %.0f\n",ek);
                    printf("Mevcut Euro Bakiyeniz= %.2f\n",e1);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&es);
                        if (bakiye1-(es*15.5)>=0){
                        e1=e1+es;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Euro Bakiyeniz= %.2f\n\n",e1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    case 4 :
                    printf("***Euro Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Euro Kuru= %.0f\n",ek);
                    printf("Mevcut Euro Bakiyeniz= %.2f\n",e1);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&es);
                        if (es<=e1){
                        e1=e1-es;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Euro Bakiyeniz= %.2f\n\n",e1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    case 5 :
                    printf("***Dolar Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Dolar Kuru= %.0f\n",dk);
                    printf("Mevcut Dolar Bakiyeniz= %.2f\n",d1);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&ds);
                        if (bakiye1-(ds*13.63)>=0){
                        d1=d1+ds;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Dolar Bakiyeniz= %.2f\n\n",d1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    case 6 :
                    printf("***Dolar Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Dolar Kuru= %.0f\n",dk);
                    printf("Mevcut Dolar Bakiyeniz= %.2f\n",d1);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&ds);
                        if (ds<=d1){
                        d1=d1-ds;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Dolar Bakiyeniz= %.2f\n\n",d1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    case 7 :
                    printf("***Sterlin Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Sterlin Kuru= %.0f\n",sk);
                    printf("Mevcut Sterlin Bakiyeniz= %.2f\n",s1);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&ss);
                        if (bakiye1-(ss*18.25)>=0){
                        s1=s1+ss;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Sterlin Bakiyeniz= %.2f\n\n",s1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    case 8 :
                    printf("***Sterlin Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Sterlin Kuru= %.0f\n",sk);
                    printf("Mevcut Sterlin Bakiyeniz= %.2f\n",s1);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&ss);
                        if (ss<=s1){
                        s1=s1-ss;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Sterlin Bakiyeniz= %.2f\n\n",s1);
                        goto start;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto start;
                        }
                        break;
                    default :
                        printf("**Hatali Islem Sectiniz Lutfen Tekrar Seciniz!**\n\n");
                        goto start;
                        break;
                        }
                        break;
                case 4 :
                      printf("**Baska Bir Hesaba Para Aktarma Islemini Sectiniz!**\n");
                      printf("Aktarmak Istediginiz Hesabim Iban Numarasini Giriniz= ");
                      scanf("%d",&iban2);
                        if (iban2==1)
                        {
                            printf("Para Aktarmak Istediginiz Kisi= Veysel Ugurlu\n");
                            printf("Aktarmak Istediginiz Tutari Giriniz= ");
                            scanf("%f",&yatirma);
                            bakiye2=bakiye2+yatirma;
                            bakiye1=bakiye1-yatirma;
                            printf("**Aktarma Basari Ile Gerceklesmistir!**\n");
                            printf("Mevcut Bakiyeniz= %f\n\n",bakiye1);
                            goto start;
                        }
                        else
                        {
                            printf("**Hatali Iban No Girdiniz!**\n");
                            printf("**Yazdiginiz Iban No Sistemimize Kayitli Degildir!**\n\n");
                            goto start;
                        }
                        break;
                case 5 :
                    printf("**Hesabinizdan Basari Ile Cikis Yapilmistir!**\n\n");
                    goto baslangic;
                    break;
                default :
                    printf("**Hatali Islem Sectiniz Lutfen Tekrar Seciniz!**\n\n");
                    goto start;
                    break;

           }


        }

        //2.HESAP

         if (sifre==2002)
        {


           gel:
           printf("**Hosgeldiniz Veysel Bey**\n");
           printf("Mevcut Bakiyeniz= %.2f\n",bakiye2);
           printf("1-Para Yatirma\n");
           printf("2-Para Cekme\n");
           printf("3-Doviz Islemleri\n");
           printf("4-Baska Bir Hesaba Para Aktarma\n");
           printf("5-Hesaptan Cikis Yapma\n");
           printf("Uygulamak Istediginiz Islemi Girin= ");
           scanf("%d",&secim);

           switch (secim)
           {
            case 1 :
                    printf("***Para Yatirma Islemini Sectiniz***\n");
                    printf("Mevcut Bakiyeniz= %.2f\n",bakiye2);
                    printf("Yatirmak Istediginiz Tutari Girin= ");
                    scanf("%f",&yatirma);
                    bakiye2=bakiye2+yatirma;
                    printf("**Isleminiz Basarý Ile Gerceklesmistir!**\n");
                    printf("Guncel Bakiyeniz= %.2f\n\n",bakiye2);
                goto gel;
                break;
            case 2 :
                    printf("***Para Cekme Islemini Sectiniz***\n");
                    printf("Mevcut Bakiyeniz= %.2f\n",bakiye2);
                    printf("Cekmek Istediginiz Tutari Girin= ");
                    scanf("%f",&cekme);
                    bakiye2=bakiye2-cekme;
                    printf("**Isleminiz Basarý Ile Gerceklesmistir!**\n");
                    printf("Guncel Bakiyeniz= %.2f\n\n",bakiye2);
                goto gel;
                break;
            case 3 :
                printf("***Doviz Islemlerini Sectiniz***\n");
                printf("1-Altin Satin Alma\n");
                printf("2-Altin Bozdurma\n");
                printf("3-Euro Satin Alma\n");
                printf("4-Euro Bozdurma\n");
                printf("5-Dolar Satin Alma\n");
                printf("6-Dolar Bozdurma\n");
                printf("7-Sterlin Satin Alma\n");
                printf("8-Sterlin Bozdurma\n");
                printf("Uygulamak Istediginiz Islemi Giriniz= ");
                scanf("%d",&secim2);

                switch (secim2)
                {
                  case 1 :
                    printf("***Altin Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Altin Kuru= %.0f\n",ak);
                    printf("Mevcut Altin Bakiyeniz= %.2f\n",a2);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&as);
                        if (bakiye2-(as*800)>=0){
                        a2=a2+as;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Altin Bakiyeniz= %.2f Gram\n\n",a2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                  case 2 :
                    printf("***Altin Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Altin Kuru= %.0f\n",ak);
                    printf("Mevcut Altin Bakiyeniz= %.2f\n",a2);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&as);
                        if (as<=a2){
                        a2=a2-as;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Altin Bakiyeniz= %.2f Gram\n\n",a2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                  case 3 :
                    printf("***Euro Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Euro Kuru= %.0f\n",ek);
                    printf("Mevcut Euro Bakiyeniz= %.2f\n",e2);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&es);
                        if (bakiye2-(es*15.5)>=0){
                        e2=e2+es;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Euro Bakiyeniz= %.2f\n\n",e2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    case 4 :
                    printf("***Euro Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Euro Kuru= %.0f\n",ek);
                    printf("Mevcut Euro Bakiyeniz= %.2f\n",e2);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&es);
                        if (es<=e2){
                        e2=e2-es;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Euro Bakiyeniz= %.2f\n\n",e2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    case 5 :
                    printf("***Dolar Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Dolar Kuru= %.0f\n",dk);
                    printf("Mevcut Dolar Bakiyeniz= %.2f\n",d2);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&ds);
                        if (bakiye2-(ds*13.63)>=0){
                        d2=d2+ds;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Dolar Bakiyeniz= %.2f\n\n",d2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    case 6 :
                    printf("***Dolar Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Dolar Kuru= %.0f\n",dk);
                    printf("Mevcut Dolar Bakiyeniz= %.2f\n",d2);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&ds);
                        if (ds<=d2){
                        d2=d2-ds;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Dolar Bakiyeniz= %.2f\n\n",d2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    case 7 :
                    printf("***Sterlin Satin Alma Islemini Sectiniz***\n");
                    printf("Mevcut Sterlin Kuru= %.0f\n",sk);
                    printf("Mevcut Sterlin Bakiyeniz= %.2f\n",s2);
                    printf("Almak Istediginiz Miktari Girin= ");
                    scanf("%f",&ss);
                        if (bakiye2-(ss*18.25)>=0){
                        s2=s2+ss;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Sterlin Bakiyeniz= %.2f\n\n",s2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    case 8 :
                    printf("***Sterlin Bozdurma Islemini Sectiniz***\n");
                    printf("Mevcut Sterlin Kuru= %.0f\n",sk);
                    printf("Mevcut Sterlin Bakiyeniz= %.2f\n",s2);
                    printf("Bozdurmak Istediginiz Miktari Girin= ");
                    scanf("%f",&ss);
                        if (ss<=s2){
                        s2=s2-ss;
                        printf("**Isleminiz Basari Ile Gerceklesmistir!**\n");
                        printf("Mevcut Sterlin Bakiyeniz= %.2f\n\n",s2);
                        goto gel;
                        }
                        else
                        {
                        printf("**Yetersiz Bakiye!**\n\n");
                        goto gel;
                        }
                        break;
                    default :
                        printf("**Hatali Islem Sectiniz Lutfen Tekrar Seciniz!**\n\n");
                        goto gel;
                        break;
                        }
                        break;
                case 4 :
                      printf("**Baska Bir Hesaba Para Aktarma Islemini Sectiniz!**\n");
                      printf("Aktarmak Istediginiz Hesabim Iban Numarasini Giriniz= ");
                      scanf("%d",&iban1);
                        if (iban1==2)
                        {
                            printf("Para Aktarmak Istediginiz Kisi= Mehmet Ali\n");
                            printf("Aktarmak Istediginiz Tutari Giriniz= ");
                            scanf("%f",&yatirma);
                            bakiye1=bakiye1+yatirma;
                            bakiye2=bakiye2-yatirma;
                            printf("**Aktarma Basari Ile Gerceklesmistir!**\n");
                            printf("Mevcut Bakiyeniz= %f\n\n",bakiye2);
                            goto gel;
                        }
                        else
                        {
                            printf("**Hatali Iban No Girdiniz!**\n");
                            printf("**Yazdiginiz Iban No Sistemimize Kayitli Degildir!**\n\n");
                            goto gel;
                        }
                        break;
                case 5 :
                    printf("**Hesabinizdan Basari Ile Cikis Yapilmistir!**\n\n");
                    goto baslangic;
                    break;
                default :
                    printf("**Hatali Islem Sectiniz Lutfen Tekrar Seciniz!**\n\n");
                    goto gel;
                    break;

           }
        }
    return 0;
}
