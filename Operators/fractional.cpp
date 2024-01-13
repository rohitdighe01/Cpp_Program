// frctional part means x= x-[x] manje greatest madhun minus karaych suppose  -1.3 fractuion kadaych asel tar -1 cha greatest part -2 yet mg te -1.3 zlayvr 0.7 yet 

#include<iostream>
using namespace std ;
int main (){
    float x ;
    cin>>x; // 9.5 
    int y = (int)x;  // y =9
    if(y<0) y = y-1; // jar negative number pahije asel kadhi kadhi use karaych function mjnus madhe 
    float z = (float)y;  //z= 9
    x =x-z;
    cout<<x;
}

// siu