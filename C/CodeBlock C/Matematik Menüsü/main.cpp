#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int secim,sayi1,sayi2;

    float karekok;

    baslangic :

    cout << "*****MATEMEATIK MENUSU PRGORAMINA HOSGELDINIZ*****" << endl;
    cout << "1-Toplama" << endl;
    cout << "2-Cikarma" << endl;
    cout << "3-Carpma" << endl;
    cout << "4-Bolme" << endl;
    cout << "5-Karesini Alma" << endl;
    cout << "6-Kupunu Alma" << endl;
    cout << "7-karekokunu Alma" << endl;
    cout << "8-Mutlak Degerini Alma" << endl;
    cout << "9-Uslu Sayi Hesaplatma" << endl;
    cout << "Uygulamak Istediginiz Islemi Giriniz= " << "";
    cin >> secim;

    switch (secim)
    {
        case 1 :

            cout << "1. Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "2. Sayiyi Giriniz= " << "";
            cin >> sayi2;

            cout << "Toplama Isleminin Sonucu = " << sayi1+sayi2 << endl << endl;
            goto baslangic;
            break;

        case 2 :

            cout << "1. Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "2. Sayiyi Giriniz= " << "";
            cin >> sayi2;

            cout << "Cikarma Isleminin Sonucu = " << sayi1-sayi2 << endl << endl;
            goto baslangic;
            break;

        case 3 :

            cout << "1. Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "2. Sayiyi Giriniz= " << "";
            cin >> sayi2;

            cout << "Carpma Isleminin Sonucu = " << sayi1*sayi2 << endl << endl;
            goto baslangic;
            break;

        case 4 :

            cout << "1. Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "2. Sayiyi Giriniz= " << "";
            cin >> sayi2;

            cout << "Bolme Isleminin Sonucu = " << sayi1/sayi2 << endl << endl;
            goto baslangic;
            break;

        case 5 :

            cout << "Karesini Almak Istediginiz Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "Sonuc= " << sayi1*sayi1 << endl << endl;
            goto baslangic;
            break;

        case 6 :

            cout << "Kupunu Almak Istediginiz Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "Sonuc= " << sayi1*sayi1*sayi1 << endl << endl;
            goto baslangic;
            break;

        case 7 :

            cout << "Karekokunu Almak Istediginiz Sayiyi Giriniz= " << "";
            cin >> karekok;

            cout << "Sonuc= " << sqrt(karekok) << endl << endl;
            goto baslangic;
            break;

        case 8 :

            cout << "Mutlak Degerini Almak Istediginiz Sayiyi Giriniz= " << "";
            cin >> sayi1;

            cout << "Sonuc= " << fabs(sayi1) << endl << endl;
            goto baslangic;
            break;

        case 9 :

            cout << "Taban Sayiyi Giriniz= "  << "";
            cin >> sayi1;

            cout << "Uslu Sayiyi Giriniz= " << "";
            cin>> sayi2;

            cout << "Sonuc= " << pow(sayi1,sayi2) << endl << endl;
            goto baslangic;
            break;

        default :

            cout << "Yanlis Islem Sectiniz Lutfen Tekrar Seciniz!" << endl << endl;
            goto baslangic;
            break;


    }

    return 0;
}
