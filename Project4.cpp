#include <iostream>

using namespace std;

extern  int Perenosa;
extern  int Perenosb;
extern  int Perenosc;
extern  int Perenosd;

int main()
{
    int a, b, c, d;
    cout << "Enter an integer a" << endl;
    cin >> a;
    cout << "Enter an integer b" << endl;
    cin >> b;
    cout << "Enter an integer c" << endl;
    cin >> c;
    cout << "Enter an integer d, not equal to 0" << endl;
    cin >> d;
    float Schet1;
    Schet1 = a * (b + static_cast <float>(c) / d);
    cout << Schet1 << endl;

    int ternar;
    ternar = a <= 21 ? 21 - a : (a - 21) << 1;
    cout << ternar << endl;

    const unsigned int SIZE2 = 3;
    int Array1[SIZE2][SIZE2][SIZE2] = {};
    int *pArr = &Array1[0][0][0];

    pArr += sizeof (int)*3+1;
    *pArr = 10;
    cout << *pArr << endl; 
    cout << Array1[1][1][1] << endl;

   
    float Schet2;
    Schet2 = Perenosa * (Perenosb + static_cast <float>(Perenosc) / Perenosd);
    cout << Schet2 << endl;

    return 0;
}