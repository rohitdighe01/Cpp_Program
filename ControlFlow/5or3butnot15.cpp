#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an interger : ";
    int n;
    cin>>n;
    /*if((n%5==0 || n%3==0) && n%15!=0){
        cout<<"The number is divisible by 5 or 3 but not 15";
    }
    else{
        cout<<" Not matching condition ";

    }
    }*/
// using  nested if else
 
if(n%5==0 || n%3==0){
    if(n%15!=0){
        cout<<"The number is divisible by 5 or 3 but not 15";
    }
    else{
        cout<<"Not Maching conditoin";

    }
}
else{
    cout<<"Not maching Condition";
}

}
//ithe na as hot ki don conditon dilet apan ek zal tar next  mg ajun next.

