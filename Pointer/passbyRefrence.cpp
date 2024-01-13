#include<iostream>
using namespace std;
void swap (int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return ; 
}
 //                 saglyat pahul main function a =8 adress = z500  b =6  adrres z600  then nxt line swap &a , &b 
  //  address pass kele varti int *x la n y la parat mg don dabbe  

int main(){
    int a = 8,b = 6; // number ni pan hot 
    //int a,b;
   // cin>>a>>b; // input geun pan deu shakto
   swap(&a,&b);  /// int*x = &a                         //
    cout<<a<<" "<<b;
}