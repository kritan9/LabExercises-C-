#include <iostream>
using namespace std;
int feetToInch()
{
    cout<<"1 feet is equal to 12 inches"<<endl;
}
int feetToInch(int feet){
    return feet*12;
}
void feetToInch(int &ft1,int &ft2){
        ft1*=12;
        ft2*=12;
    }
int main(){
    feetToInch();
    cout<<"10 feet is "<<feetToInch(10)<<endl;
    cout<<"Enter 2 distances in feet"<<endl;
    int a,b;
    cin>>a>>b;
    feetToInch(a,b);
    cout<<"The distances are "<<a<<" and "<<b<<" inches respectively" <<endl;
    cin.get();
    return 0;

}
