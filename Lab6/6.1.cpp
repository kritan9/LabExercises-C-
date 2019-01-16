#include <iostream>
using namespace std;

class Distance{
    int meter;float cm;
public:
    Distance(){}
    Distance(float m,float c):meter(m),cm(c){}
    Distance(float dist){
        meter=  (int)dist/100;
        cm=dist-meter*100;
    }
    operator float(){
        return meter + cm/100;
    }
    void showDist(){
        cout<<"The distance is "<<meter<<" meter and "<<cm<<" cm."<<endl;
    }
};
int main(){
    Distance a,b(2,8.4);
    float d,c=288.35;
    a=c;d=b;
    a.showDist();
    cout<<"Distance = "<<d;
    return 0;
}
