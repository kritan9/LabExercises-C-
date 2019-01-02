#include <iostream>
#include <cstring>
using namespace std;
class VehCharge
{
private:
  int num_vehicles;
  float hour, charge;
public:
  VehCharge(int n, float h, float c):num_vehicles(n),hour(h),charge(c){};
  VehCharge(VehCharge &a)
  {
    num_vehicles=a.getNumVehicles();
    hour=a.getHour();
    charge=a.getCharge();
  }
  int getNumVehicles()
  {
    return num_vehicles;
  }
  float getHour()
  {
    return hour;
  }
  float getCharge()
  {
    return charge;
  }
  float getTotal()
  {
    float total = num_vehicles*hour*charge;
    if (num_vehicles > 10)
      {
	total *= 0.9;
      }
    return total;
  }
  void display()
  {
    cout << "No of vehicle " << num_vehicles << endl;
    cout << "No of hours " << hour << endl;
    cout << "Charge " << charge << endl;
    cout << "Total " << getTotal() << endl;
  }
};


int main()
{
  VehCharge a(4,5,5),b(12,5,5);
  cout << "Object constructed via constructor" << endl;
  a.display();
  b.display();
  VehCharge c= a, d=b;
  cout << "Object constuced via copy constructor" << endl;
  c.display();
  d.display();
  return 0;
}
