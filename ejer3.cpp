#include <iostream>
using namespace std;

int suma(int *, int);


int main(){
	int arr[]={1,2,3,4,5};
	int tam=sizeof(arr)/sizeof(arr[0]);
	cout<<"La suma es: "<<suma(arr, tam)<<endl;
}

int suma(int *arr, int tam){
	int sum=0;
	for(int i=0; i<tam; i++){
		sum=sum+*arr;
		arr++;
	}
	return sum;

}



