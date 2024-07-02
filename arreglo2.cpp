#include <iostream>
using namespace std;

int main(){
    int n, par = 0, impar = 0;
    cout<<"Ingresa un numero: ";cin>>n;

    int A[n];
    int P[n];
    int Impar[n];

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el elemento del arreglo "<<i<<": ";
        cin>>A[i];

        if (A[i] % 2 == 0){
            P[par] = A[i];
            par++;
        }else{
            Impar[impar] = A[i];
            impar++;
        }
        
    }
    
    return 0;
}