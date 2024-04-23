#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numero, *dir_numero;
    cout<<"Digite un numero ";
    cin>>numero;

    dir_numero=&numero;

    if(*dir_numero%2==0){
        cout<<"el numero: "<<*dir_numero<<"es par"<<endl;
        cout<<"Posicion: "<<dir_numero<<endl;

    }
    else{
        cout<<"el numero: "<<*dir_numero<<"es impar"<<endl;
        cout<<"Posicion: "<<dir_numero<<endl;
    }
    
    return 0;
}