#include <iostream>
using namespace std;

int main(){
    int n, par = 0, impar = 1;
    cout<<"Ingresa un numero: ";cin>>n;

    int A[n];

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el elemento del arreglo "<<i<<": ";
        cin>>A[i];

        if (A[i] % 2 == 0){
            int P[par];
            P[par] = A[i];
            par++;
        }else{
            int Impar[impar];
            Impar[impar] = A[i];
            impar++;
        }
        
    }
    
    return 0;
}