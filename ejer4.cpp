#include <iostream>

using namespace std;

/*Invertir el orden de las matrices*/

void print(int *, int ); /*prototipo de funcion*/
void invertir(int *, int *);
int main(){
	int arr[]={1,2,3,4,5};
	int tam=sizeof(arr)/sizeof(arr[0]);
	print(arr,tam);
	invertir(arr,arr+tam-1);
	print(arr,tam);
}



void print(*arr,tam){
	for(int i=0 , i<tam , i++){
		cout<<"[ "<<*arr<<"] ";
		arr++;
	}

}

void invertir(int *ini, int fin){
	while(ini<fin){
		int aux=*ini;
		*ini=*fin;
		*fin=*ini;
		ini++;
		fin--;
	}
	

}
