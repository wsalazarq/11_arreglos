#include <iostream>
using namespace std;

int main(){
    int dias = 7;
    float tempMin[dias], tempMax[dias];

    for (int i = 0; i < dias; i++){
        cout<<"Ingrese la temperatura minima del dia "<< i + 1 <<" : ";cin>>tempMin[i];

        cout<<"Ingrese la temperatura maxima del dia "<< i + 1 <<" : ";cin>>tempMax[i];        
    }

    float temMedia[dias];
    float menorTemp = tempMin[0];
    int diaMenorTemp = 0;

    for (int i = 0; i < dias; i++){
        temMedia[i] = (tempMin[i] + tempMax[i]) / 2;
        cout<<"La temperatura media del dia "<< i + 1 <<" es: "<<temMedia[i]<<endl;

        if (tempMin[i] < menorTemp){
            menorTemp = tempMin[i];
            diaMenorTemp = i;
        }
    }
    cout<<"El dia con menor temperatura es: "<< diaMenorTemp  + 1 <<endl;

    return 0;
}