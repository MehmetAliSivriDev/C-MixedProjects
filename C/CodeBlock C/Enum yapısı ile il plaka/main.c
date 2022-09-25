#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

enum iller
{
 giris,Adana,Adiyaman,Afyon,Agri,Amasya,Ankara,Antalya,Artvin,Aydin,Balikesir,Bilecik,Bingol,Bitlis,Bolu,Burdur,Bursa,Canakkale,Cankiri,Corum,Denizli,
 Diyarbakir,Edirne,Elazig,Erzincan,Erzurum,Eskisehir,Gaziantep,Giresun,Gumushane,Hakkari,Hatay,Isparta,Mersin,Istanbul,Izmir,Kars,Kastamonu,Kayseri,
 Kirklareli,Kiraehir,Kocaeli,Konya,Kutahya,Malatya,Manisa,Kahramanmaras,Mardin,Mugla,Mus,Nevsehir,Nigde,Ordu,Rize,Sakarya,Samsun,Siirt,Sinop,Sivas,
 Tekirdag,Tokat,Trabzon,Tunceli,Sanliurfa,Usak,Van,Yozgat,Zonguldak,Aksaray,Bayburt,Karaman,Kirikkale,Batman,Sirnak,Bartin,Ardahan,Igdir,Yalova,
 Karabuk,Kilis,Osmaniye,Duzce
};

int main()
{
    enum iller sehir;

    //UYARI!! = OGRENMEK ISTEDIGINIZ ILIN ADINI sehir=Adana; KISMINDAKI ADANA YERINE GIRIN VE CALISTIRIN!

    sehir=Adana;

    printf("*****PLAKA OGRENMME PROGRAMI*****\n\n");
    printf("\n\n");
    printf("Plaka Numarasi= %d",sehir);


    return 0;
}
