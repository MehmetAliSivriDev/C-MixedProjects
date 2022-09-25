#include <iostream>

using namespace std;

int main()
{
    int dizi[5]={2,6,9,1,8};
    float toplam=0;
    float ortalama;

    for (int i=0;i<=4;i++)
    {
        toplam=toplam + dizi[i];
    }
    ortalama= toplam/5;

    cout << "Toplam= "<< "";
    cout << toplam << endl;

    cout << "Ortalama= " << "";
    cout << ortalama << endl;


    return 0;
}
