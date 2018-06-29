#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    double h;
    double total = 0;

    cout <<"Masukan Jumlah data =" << endl;
    cin >> a;

    for ( int z = 1 ; z <= a ; z++ )
    {
        cout << " Masukan jumlah nilai " << z << endl;
        cin >> b;
        total = total + b;

    }
    h = total / a;
    cout << " Rata rata = " << h << endl;
     if ( h <= 50 )
     {
         cout <<" Kemungkinan tidak lulus " << endl;

     }
     else
     {
         cout << " Kemungkinan lulus " << endl;
     }

    return 0;
}
