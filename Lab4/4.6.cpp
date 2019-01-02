#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
  unsigned int serial_number;
  static unsigned int total;
public:

  Student()
  {
    total++;
    serial_number = total;
  }
  void display()
  {
    cout << "serial number is "<< serial_number << " total is "<< total << endl;
  }
  unsigned int getTotal()
  {
    return total;
  }
};
unsigned int Student::total=0;
int main()
{
  Student no1, no2;
  no1.display();
  no2.display();
  return 0;
}
