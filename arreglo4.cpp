#include <iostream>
using namespace std;

void llenarArreglo(int A[], int n, int mult);

int main() {
    int n, mult;

    cout<<"Ingrese un valor: ";cin>>n;
    cout<<"Ingrese un numero: ";cin>>mult;
    int  A[n];

    llenarArreglo(A, n, mult);

    cout << "Los múltiplos son: ";
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}

void llenarArreglo(int A[], int n, int mult) {
    for (int i = 0; i < n; i++) {
        A[i] = mult * (i + 1);
    }
}
