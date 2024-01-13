#include<iostream>
using namespace std;
void starTraingle(int x){ // vlaue of argumernt is x
    for (int i =1;i<=x;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
starTraingle(3);
starTraingle(4);
starTraingle(5);
}