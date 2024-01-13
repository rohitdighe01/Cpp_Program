// find the largest three number 

#include<iostream>
using namespace std;
int main (){
    float a,b,c,big;
    cout<<"Enter the three floating number : ";
    cin>>a>>b>>c;
    big =a;
    if(b>big)
    big =b;
    if(c>big)
    big=c;
    cout<<"Largest of the three numbers= "<<big;
}