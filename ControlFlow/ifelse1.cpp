#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two number you want to compare: ";
    cin>>a>>b;
    if(a==b)
    {
        cout<<"The two numbers are equal";
    }
    
        else if(a>b)
        {
            cout<<a<<"is greater than"<<b;
        }
        else{
            cout<<b<<"is greater than "<<a;
        }
        return 0;
        }
    
    

