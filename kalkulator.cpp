#include <iostream>
using namespace std ;

float fungsi (float x){
    return (x+55)/5;
}

float kalkulator (float a, float b, char op) {
    float hasil = 0 ;
    if (op == '+') hasil = (a+b) ;
    else if (op == '-') hasil = (a-b) ;
    else if (op == 'x') hasil = (a*b) ;
    else if (op == ':') hasil = (a/b) ;
    else if (op == '^') {
        hasil = 1 ;
        for (int i = 0 ; i < b ; i++) {
            hasil = hasil * a ;
        }
    }
    else if (op == '&') {
        float interval = (b-a) / 1000 ;
        for (int i = 0 ; i < 1000 ; i++) {
            hasil = hasil + ((fungsi(a + (i*interval)) + fungsi(a+(i*interval)+interval))*interval/2) ;
        }
    }
    return hasil ;
}

int main () {
    float a,b ;
    char op ;
    char jwbn ;
    cout << "Halo! Saya kalkulator" << endl;
    while (true) {
        cout << "Masukkan bilangan pertama :" ;
        cin >> a;
        cout << "Masukkan bilangan kedua :" ;
        cin >> b;
        cout << "Masukkan operasi :" ;
        cin >> op ;
        cout << kalkulator (a, b, op) << endl;
        cout << "Ketik Y untuk melanjutkan/ N untuk berhenti" << endl;
        cin >> jwbn ;
        if (jwbn == 'N') break ;
    }
}


