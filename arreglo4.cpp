#include <iostream>
using namespace std;

void llenarArreglo(int, int, int);

int main() {
    int n, mult, A[n];

    cout<<"Ingrese un valor: ";cin>>n;
    cout<<"Ingrese un numero: ";cin>>mult;

    return 0;
}

void llenarArreglo(int A[], int n, int mult) {
    for (int i = 0; i < n; i++) {
        A[i] = mult * (i + 1);
    }
}
