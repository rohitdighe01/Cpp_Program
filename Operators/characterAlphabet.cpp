// Write a program to check whether a character is an alphabet or not.


#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
        cout<<"The<<"The character is aplhabet:";

    }
}