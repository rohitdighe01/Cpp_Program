#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer :";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"The number is divisible by 5 or 3";
    }
        else{
            cout<<"The number is not divisible by 5 and  3 ";
        }
    
    
}

//Take 3 positive integer input and print the greatest of them.