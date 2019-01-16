#include <iostream>
using namespace std;

class DistanceFPI{
    int feet;float inch;
public:
    friend class DistanceSI;
    DistanceFPI(){}
    DistanceFPI(int f,float i):feet(f),inch(i){}

    void showDist(){
        cout<<"The distance is "<<feet<<" feet and "<<inch<<" inch."<<endl;
    }
};
class DistanceSI{
    int meter;float cm;
public:
    DistanceSI(){}
    DistanceSI(int m,float c):meter(m),cm(c){}
    DistanceSI(DistanceFPI dist){
        meter=  static_cast<int>((dist.feet*12+dist.inch)/40);
        cm=(dist.feet*12+dist.inch)*2.5-meter*100;
    }
    operator DistanceFPI(){
        int temp=static_cast<int>((meter*100+cm)/30);
        return DistanceFPI(temp,(meter*100+cm)*12/30-temp*12);
    }
    void showDist(){
        cout<<"The distance is "<<meter<<" meter and "<<cm<<" cm."<<endl;
    }
};

int main(){
DistanceFPI a,b(12,3.8);
DistanceSI c,d(8,19.6);
a=d;
c=b;
a.showDist();
c.showDist();
    return 0;
}
