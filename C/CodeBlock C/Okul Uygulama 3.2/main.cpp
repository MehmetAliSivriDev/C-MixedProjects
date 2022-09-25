
#include <iostream>

using namespace std;

int main()
{
    cout << "SELECTION SORT UYGULAMASI" << endl;

    int dizi[]={1,7,3,88,34,76,9,24,45};
    int degistirme;

    for(int i = 0; i < 9; i++)
    {

        int kontroldizi[2] = {89, 0};

        for (int m = i; m < 9; m++)
        {

            if (kontroldizi[0] > dizi[m])
            {
                kontroldizi[0] = dizi[m];
                kontroldizi[1] = m;
            }

        }

        degistirme = dizi[kontroldizi[1]];

        dizi[kontroldizi[1]] = dizi[i];

        dizi[i] = degistirme;

    }

    for (int b = 0; b < 9; b++)
    {

        cout << " " << dizi[b] << " ";

    }




    return 0;
}


