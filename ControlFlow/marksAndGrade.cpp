#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }

    if(n>=81){
    cout<<"very good ";
    }

   if(n>=71){
    cout<<"good ";
    }
   if(n>=61){
   cout<<"can do better";
   }
   if(n>=51){
    cout<<"Average";
   }
   if(n>=40){
    cout<<"Below Average";

    }
   if(n<40){
    cout<<"Fail";
    }
}  

     
