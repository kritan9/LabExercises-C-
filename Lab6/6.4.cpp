#include <iostream>
#include <cstring>
using namespace std;
class Person
{
 private:
  string name;
  int age;
 public:
  void setName(string n)
  {
    name = n;
  }
  void setAge(int a)
  {
    age = a;
  }
  string getName()
  {
    return name;
  }
   Person* getAddress(){
    return this;
  }
};
class Student: public Person
{
 private:
  int rank;
  int cls;
 public:
 int getRank()
  {
    return rank;
  }
  int getClass()
  {
    return cls;
  }
  void setRank(int r)
  {
    rank = r;
  }
  void setClass(int c)
  {
    cls = c;
  }
};
class Employee: public Person
{
 private:
  string dep;
  int salary;
 public:
  void setDep(string d)
  {
    dep = d;
  }
  void setSalary(int s)
  {
    salary = s;
  }
  string getDep()
  {
    return dep;
  }
  int getSalary()
  {
    return salary;
  }
};
int main()
{
  Person p1, p2;
  Employee e1, e2;
  Student s1, s2;
  cout << p1.getAddress()<<"\t" << p2.getAddress() << endl;
  cout <<(int) p1.getAddress() - (int)p2.getAddress() << endl;
  cout << e1.getAddress() <<"\t" << e2.getAddress() << endl;
  cout << (int)e1.getAddress() - (int)e2.getAddress() << endl;
  cout << s1.getAddress()<<"\t"  << s2.getAddress() << endl;
  cout << (int)s1.getAddress() - (int)s2.getAddress() << endl;
  return 0;
}
