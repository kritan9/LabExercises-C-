#include <iostream>
using namespace std;
inline float income(float a){
    return 0.9*a;
}
int main(){
    float a;
    cout<<"enter your salary ";
    cin>>a;
    cout<<"You will receive "<<income(a)<<endl;
    cin.get();
    cin.get();
    return 0;
}
