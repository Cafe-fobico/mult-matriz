#include <iostream>
#include <time.h>

using namespace std;

    //sistema de matriz

int main () {
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];
    int l, c, m;

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            matriz[l][c]=l;
        }
    }

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            cout << "   "<< matriz[l][c] <<"  ";
        }
        cout << "\n";
    }

    cout << "Agora insira o multiplicador da matriz: ";
    cin >> m;

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            matriz[l][c]=l*m;
        }
    }

    for (l=0;l<4;l++) {
        for (c=0;c<4;c++) {
            cout << "   "<< matriz[l][c] <<"  ";
        }
        cout << "\n";
    }

    return 0;
}
