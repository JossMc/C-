#include<iostream>
using namespace std;

int main(){
   int num, *dir_num;
   num=20;
   dir_num=&num;
   cout<<"El valor de num es: "<<*dir_num<<endl;
   cout<<"La direccion de memoria es "<<dir_num<<endl;


}