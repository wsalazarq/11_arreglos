#include <iostream>
using namespace std;

int main(){
    int dias = 7;
    float tempMin[dias], tempMax[dias];

    for (int i = 0; i < dias; i++){
        cout<<"Ingrese la temperatura minima del dia "<< i + 1 <<" : ";cin>>tempMin[i];

        cout<<"Ingrese la temperatura maxima del dia "<< i + 1 <<" : ";cin>>tempMax[i];        
    }

    
    
    return 0;
}