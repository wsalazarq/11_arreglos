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
    
    string comunes[numFP + numPG];
    int numComunes = 0;

    for (int i = 0; i < numFP; i++){
        for (int j = 0; j < numPG; j++){
            if (FP[i] == PG[j]){
                comunes[numComunes] = FP[i];
                numComunes++;
            }
        }
    }
    
    cout<<"Estudiantes comunes en ambas clases: "<<endl;
    for (int i = 0; i < numComunes; i++) {
        cout<<comunes[i]<<endl;
    }
    cout<<"Numero total de estudiantes comunes: "<<numComunes<<endl;
    return 0;
}