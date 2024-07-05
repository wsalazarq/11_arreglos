#include <iostream>
using namespace std;

int main(){

    int numFP;
    cout<<"Ingrese el numero de estudiantes de Fundamentos de Programación: ";cin>>numFP;

    string FP[numFP];    
    for (int i = 0; i < numFP; i++){
        cout<<"Ingrese el estudiante numero "<<i + 1<<" : ";cin>>FP[i];
    }
    return 0;
}