#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter2nd Nmuber: ";
    cin>>b;
    cout<<"ENter 3rd number: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is greatest ";
        }
        else{ // c>a
            cout<<c<<" is greatest";
        }

    }

    else{
        if (b>c){
            cout<<b<<"is greastet";

        }
        else{
            cout<<c<<"is greatest";
        }
    }
}