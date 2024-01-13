#include<iostream>
using namespace std;
int main (){
    int age;
    cout<<"ENter your Age : ";
    cin>>age;
    if(age<0)
    {
        cout<<"I am sorry!"<<endl;
        cout<<"Age can never be negative";
    }
    if(age>12 && age<20)  // compound statement of if manje if madhe if taku shakto.
    cout<<"you are a teen aged person.good!";
}