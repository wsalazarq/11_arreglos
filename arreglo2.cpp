#include <iostream>
using namespace std;

int main(){
<<<<<<< HEAD
    int n, par = 0, impar = 0;
    cout<<"Ingresa un numero: ";cin>>n;

    int A[n];
    int Par[n];
    int Impar[n];
=======
    int n, par = 0, impar = 1;
    cout<<"Ingresa un numero: ";cin>>n;

    int A[n];
>>>>>>> 6b78af93e0eb65416775e4b1424ced15ef073622

    for (int i = 0; i < n; i++){
        cout<<"Ingrese el elemento del arreglo "<<i<<": ";
        cin>>A[i];

        if (A[i] % 2 == 0){
<<<<<<< HEAD
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
=======
            int P[par];
            P[par] = A[i];
            par++;
        }else{
            int Impar[impar];
            Impar[impar] = A[i];
            impar++;
        }
        
>>>>>>> 6b78af93e0eb65416775e4b1424ced15ef073622
    }
    
    return 0;
}