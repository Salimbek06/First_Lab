#include <iostream>
using namespace std;

int main(){
    float x,y;
    cin>>x>>y;
    y *= 30.48;
    if(x > y){
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}