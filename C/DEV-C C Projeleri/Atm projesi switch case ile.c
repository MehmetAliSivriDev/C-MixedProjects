

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Bu proje atm projesidir para çekme yatýrma gibi iþlemler içermektedir.

	int cekme,yatirma,kalan,bakiye,sistem,secim;

	bakiye=1000;

	printf("*****SIVRI BANKASI ATM SISTEMINE HOS GELDININIZ*****\n\n");
	printf("-YAPMAK ISTEDIGINIZ ISLEMI SECINIZ-\n");
	printf("1");
	printf("-Para Yatirma\n");
	printf("2");
	printf("-Para Cekme\n");
	printf("3");
	printf("-Bakiye Sorgulama\n");
	printf("Uygulamak Istediginiz Islemi Seciniz= ");
	scanf("%d",&secim);

	switch (secim) {
	    case 1 :
	    printf("Mevcut Bakiyeniz= %d\n",bakiye);
	    printf("Yatirmak Istediginiz Tutari Girin= ");
	    scanf("%d",&yatirma);
	    printf("Para Yatirma Isleminiz Basari ile Gerceklemistir.\n\n");
	    printf("Guncel Bakiyeniz= %d\n\n",bakiye+yatirma);
	    printf("SIVRI Bankasini Tercih Ettiginiz icin Tesekkur Ederiz!\n");
	    printf("Kartinizi ATM'den Almayi UNUTMAYIN!");
		break;
		case 2 :
		printf("Mevcut Bakiyeniz= %d\n",bakiye);
		printf("Cekmek Istediginiz Tutari Girin= ");
		scanf("%d",&cekme);
		printf("Para Cekme Isleminiz Basari ile Gerceklesmistir.\n\n");
		printf("Guncel Bakiyeniz= %d\n\n",bakiye-cekme);
		printf("SIVRI Bankasini Tercih Ettiginiz icin Tesekkur Ederiz!\n");
		printf("Kartinizi ve Paranizi ATM'den Almayi UNUTMAYIN!");
		break;
		case 3 :
		printf("Mevcut Bakiyeniz= %d\n\n",bakiye);
		printf("SIVRI Bankasini Tercih Ettiginiz icin Tesekkur Ederiz!\n");
		printf("Kartinizi ATM'den Almayi UNUTMAYIN!");
		break;
		default :
		printf("Hatali Islem Sectiniz Lutfen Tekrar Deneyiniz!");
		break;
	}
	return 0;
}
