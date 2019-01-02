#include <iostream>
using namespace std;
float& temperature(float& a,float& b){
    if(a>b) return a;
    else return b;
}
int main(){
    float x=20,y=30;
    temperature(x,y)=100;
    cout<<"The new values of temp. are "<<x<<" and "<<y<<endl;
    cin.get();
    return 0;
}
