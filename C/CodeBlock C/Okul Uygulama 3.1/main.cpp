#include <iostream>

using namespace std;


int main()
{

    int dizi[]={4,35,47,14,8,22,88,72,62,90};
    int gecici;

    cout << "BUBBLE SORT SIRALAMASI" << endl;

    for(int i=1; i<10; i++)
    {
		for(int j=0; j<10-i; j++)
		{

			if(dizi[i] > dizi[j+1])
			{
				gecici = dizi[i];
				dizi[i] = dizi[j+1];
				dizi[j+1] = gecici;
			}
		}
	}

	cout << endl;
	cout << "Dizinin Siralanmis Hali= ";
	for(int i=0; i<10; i++){
		cout << dizi[i] << " ";
	}
	cout << endl;


    return 0;
}
