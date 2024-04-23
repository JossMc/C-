/* Rellenar un array de 10 numeros, posteriormente
utilizando punteros indicar cuales son numeros pares y su
posicion en memoria*/

#include <iostream>
using namespace std;
void pos(int *arr){
    for(int i=0; i<10; i++){
        cout<<"element: ["<<i<<" , "<<arr[i]<<" ] "<<endl;
        cout<<"Posicion: "<<arr++<<endl;
    }  
}

void write(int *arr){
    for(int i=0 ; i<10 ;i++){
        cout<<"Digite el elemento: "<<endl;
        cin>>arr[i];
    }
}


void par(int *arr){
    for(int i=0; i<10 ; i++){
        if(arr[i]%2==0){
            cout<<"El numero: "<<arr[i]<<" es par"<<endl;
            cout<<"Posicion: "<<&arr[i]<<endl;
        }
        else{
            cout<<"El numero: "<<arr[i]<<" es impar"<<endl;
            cout<<"Posicion: "<<&arr[i]<<endl;
        }
    }

}
int main(){
    int arreglo[9];
    write(arreglo);
    pos(arreglo);
    par(arreglo);
}