#include <iostream>
#include <climits>
using namespace std;

int main(){
    	int arr[10];
        int *dir_arr;
        dir_arr=arr;
        int min=INT_MAX;
        for(int i=0 ; i<10 ;i++){
            cout<<"Digite el elemento: "<<endl;
            cin>>arr[i];
        }
        for(int i=0; i<10; i++){
            if (*dir_arr<min){
                min=*dir_arr;
            }
            dir_arr++;
        }
        cout<<"El menor numero es: "<<min<<endl;
}