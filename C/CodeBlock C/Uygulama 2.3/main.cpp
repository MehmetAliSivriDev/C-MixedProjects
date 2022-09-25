#include <iostream>

using namespace std;

int main()
{
    char dizi[2][3];

    for (int i=0;i<=1;i++)
    {
        for (int x=0;x<=2;x++)
        {
           cout<< i+1<<"."<<"Dizinin "<<x+1<<"."<<"Elamani= " << "";
           cin >> dizi[i][x];

        }

        cout << ""<< "\n";
    }


        for (int i=0;i<=1;i++)
    {
        for (int x=0;x<=2;x++)
        {
           cout << dizi[i][x] << "";

        }

        cout << ""<< "\n";
    }



    return 0;
}
