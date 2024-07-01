#include <iostream>
using namespace std;

int main(){
    int n, p, c = 0, s = 0;
    cout<<"Ingresa un numero: ";cin>>n;

int A[n];
    for (int i = 0; i < n; i++){
        cout<<"Ingrese el elemento del arreglo "<<i<<": ";
        cin>>A[i];
        s = s + A[i];
        if (A[i] == 0){
            c++;
        }
    }

    p = (c * 100) /n;
    
    cout<<"Sumatoria: "<<s<<endl;
    cout<<"Porcentaje de ceros: "<<p<<"%"<<endl;

    return 0;
}