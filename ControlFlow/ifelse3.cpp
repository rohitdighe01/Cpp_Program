#include<iostream>
using namespace std;
int main(){
    cout<<"Enter thr cost price ";
    int cp;
    cin>>cp;


    cout<<"Enter thr seeling  price ";
    int sp;
    cin>>sp;

    if(sp>cp){
    cout<<"profit ="<<sp-cp;
}
else{
    cout<<"loss ="<<cp-sp;
}
}  

