#include <iostream>
using namespace std;

void esprimo(int a){
    int *dir_a;
    int c=0;
    dir_a=&a;

    for( int i=1 ; i<=*dir_a;  i++){
        if (*dir_a%i==0){
            c++;
        }
        else
        {
            c=c;
        }
    }

    if(c>2){
        cout<<"El numero "<<*dir_a<<" no es primo"<<endl;
        cout<<"Posicion: "<<dir_a<<endl;
    }
    else{
        cout<<"El numero "<<*dir_a<<" es primo"<<endl;
        cout<<"Posicion: "<<dir_a<<endl;	
    }

}

int main(){
    int b;
    cout<<"Digite un numero: "<<endl; cin>>b;
    esprimo(b);


    return 0;
}