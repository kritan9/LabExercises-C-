#include <iostream>
using namespace std;
class Coordinate{
private:
  float x, y, z;
public:
  Coordinate(float a, float b, float c):x(a),y(b),z(c){};
  friend Coordinate operator+(Coordinate a, Coordinate b);
  friend Coordinate operator-(Coordinate a, Coordinate b);
  void display()
  {
    cout << "(" << x << "," << y << "," << z << ")";
  }
};
Coordinate operator+(Coordinate a, Coordinate b)
{

  return Coordinate(a.x+b.x, a.y+b.y, a.z+b.z);;
};
Coordinate operator-(Coordinate a, Coordinate b)
{
  return Coordinate(a.x-b.x, a.y-b.y, a.z-b.z);;
};
using namespace std;
int main()
{
  int x , y, z;
  char temp; // garbage value of ,
  cout << "Enter cordinate x y z in format x,y,z";
  cin >> x >> temp >> y>> temp >> z;
  Coordinate a(x,y,z);
  cout << "Enter cordinate x y z in format x,y,z";
  cin >> x >> temp >> y >> temp >>z;
  Coordinate b(x,y,z);
  cout << "sum is";
  Coordinate s = a+b;
  s.display();
  cout << endl;
  cout << "difference is";
  Coordinate d = a-b;
  d.display();
  return 0;
}
