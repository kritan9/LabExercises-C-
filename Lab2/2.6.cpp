#include <iostream>
#include <iomanip>
using namespace std;
float income(float a,float b=12){
    return a*(1+b/100);
}
int main(){

    cout<<"after increment, the salaries are"<<endl;
    cout<<setw(20)<<"C.E.O:"<<setw(10)<<income(35000,9)<<endl;
    cout<<setw(20)<<"Information Officer:"<<setw(10)<<income(25000,10)<<endl;
    cout<<setw(20)<<"System Analyst:"<<setw(10)<<income(24000)<<endl;
    cout<<setw(20)<<"Programmer:"<<setw(10)<<income(18000)<<endl;
    cin.get();
    return 0;
}

