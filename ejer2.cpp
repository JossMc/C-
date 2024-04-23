#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int arr[]={2,5,8,9};
	int tam=sizeof(arr)/sizeof(arr[0]);
	int *ptr=arr;
	
	for (int i=0 ; i<tam ; i++){
		cout<<*ptr<<" ";
		ptr++;
	}

	cout<< endl;

	return 0;
}
