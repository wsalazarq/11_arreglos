#include <iostream>
using namespace std;

int main(){

    int numFP, numPG;
    cout<<"Ingrese el numero de estudiantes de Fundamentos de Programación: ";cin>>numFP;

    string FP[numFP];    
    for (int i = 0; i < numFP; i++){
        cout<<"Ingrese el estudiante numero "<<i + 1<<" : ";cin>>FP[i];
    }

    cout<<"Ingrese el numero de estudiantes de Programacion Grafica: ";cin>>numPG;

    string PG[numPG];    
    for (int i = 0; i < numPG; i++){
        cout<<"Ingrese el estudiante numero "<<i + 1<<" : ";cin>>PG[i];
    }
    
    return 0;
}