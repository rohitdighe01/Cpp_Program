#include<iostream>
using namespace std;
int main (){

    int n;
    cout<<"No of rows : ";
    cin>>n;

    // no of stars = n+1 -1

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){  // for reverse we can use here formula n+1-1
                 cout<<"*";
        }
        cout<<endl;
    }
}