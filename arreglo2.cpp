#include <iostream>
using namespace std;

int main(){
    int n, par = 0, impar = 0;
    cout<<"Ingresa un numero: ";cin>>n;

    int A[n];
    int Par[n];
    int Impar[n];

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el elemento del arreglo "<<i<<": ";
        cin>>A[i];

        if (A[i] % 2 == 0){
            Par[par] = A[i];
            par++;
        }else{
            Impar[impar] = A[i];
            impar++;
        }
    }

    cout<<"Numeros pares: "<<endl;
    for (int i = 0; i < par; i++){
        cout<<Par[i]<<endl;
    }

    cout<<"Numeros impares: "<<endl;
    for (int i = 0; i < impar; i++){
        cout<<Impar[i]<<endl;
    }
    
    return 0;
}