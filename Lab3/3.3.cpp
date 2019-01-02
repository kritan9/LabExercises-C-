#include <iostream>
#include <cstdio>
using namespace std;
class carpart{
private:
   int carId,rate;
   float time;
public:
    void setData(int id,int charge,float t)
    {
        carId=id; rate=charge; time=t;
    }
    void showData()
    {
          cout<<"Car Id: "<<carId<<"\t\tParking Hours :"<<time<<"hr\t\tCharge: "<<time*rate<<endl;
    }
};
void carfunc(int carId,int rate,float time,carpart &car){
    car.setData(carId,rate,time);
    car.showData();
}
int main()
{
    int a,b;
    float c;
    carpart car;
    cout<<"Enter CarId, charge rate and time ";
    cin>>a>>b>>c;
    carfunc(a,b,c,car);
}
