#include <iostream>

using namespace std;

class CNumber {
private:
    int n1;
    int n2;
    int n3;

public:
    CNumber(int na, int nb, int nc);
    int SetN1(int na);
    int SetN2(int nb);
    int SetN3(int nc);
    int Max(int na, int nb, int nc);
    int Min(int na, int nb, int nc);
    float Prom(int na, int nb, int nc);
    int CantP(int na, int nb, int nc);
    int CantI(int na, int nb, int nc);

};

CNumber::CNumber(int na, int nb, int nc) {
    n1 = SetN1(na);
    n2 = SetN2(nb);
    n3 = SetN3(nc);
};

int CNumber::SetN1(int na) {
    n1 = na;
    return n1;
}

int CNumber::SetN2(int nb) {
    n2 = nb;
    return n2;
}

int CNumber::SetN3(int nc) {
    n3 = nc;
    return n3;
}

int CNumber::Max(int na, int nb, int nc) {
    int m = n1;
    if (n2 > m) {
        m = n2;
    }
    if (n3 > m) {
        m = n3;
    }
    return m;
}

int CNumber::Min(int na, int nb, int nc) {
    int mi = n1;
    if (n2 < mi) {
        mi = n2;
    }
    if (n3 < mi) {
        mi = n3;
    }
    return mi;
}

float CNumber::Prom(int na, int nb, int nc) {
    float calcu = (n1 + n2 + n3) / 3;
    return calcu;
}

int CNumber::CantP(int na, int nb, int nc) {
    int par = 0;

    if (n1 % 2 == 0) {
        par += 1;
    }
    if (n2 % 2 == 0) {
        par += 1;
    }
    if (n3 % 2 == 0) {
        par += 1;
    }
    return par;
}

int CNumber::CantI(int na, int nb, int nc) {
    int impar = 0;

    if (n1 % 2 != 0) {
        impar += 1;
    }
    if (n2 % 2 != 0) {
        impar += 1;
    }
    if (n3 % 2 != 0) {
        impar += 1;
    }
    return impar;
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    
    cout<<"ingrese un numero: ";
    cin>>a;
    cout<<"ingrese un numero: ";
    cin>>b;
    cout<<"ingrese un numero: ";
    cin>>c;
    CNumber number(a, b, c);
    cout << "MAX:  " << number.Max(a, b, c) << endl;
    cout << "MIN:  " << number.Min(a, b, c) << endl;
    cout << "Promedio:  " << number.Prom(a, b, c) << endl;
    cout << "Par:  " << number.CantP(a, b, c) << endl;
    cout << "Impar:  " << number.CantI(a, b, c) << endl;

    return 0;
}
