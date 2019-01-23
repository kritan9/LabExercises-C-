#include <iostream>
#include <string>
#include <iomanip>
using  namespace std;
class Person
{
protected:
    string name;
    int age;
public:
    Person() {}
    Person(string n,int a):name(n), age(a) {}
    string Name()
    {
        return name;
    }
    int Age()
    {
        return age;
    }
};
class Employee:virtual public Person
{
protected:
    float salary;
public:
    Employee(string n,int a,float sal):Person(n,a),salary(sal)
    {
        name=n;
    }
    float Salary()
    {
        return salary;
    }
};
class Student:virtual public Person
{
protected:
    string sub;
public:
    Student(string n,int a,string subj):Person(n,a),sub(subj) {}
    string Subject()
    {
        return sub;
    }
};
class Manager:public Employee, public Student
{
public:
    Manager(string n,int a,string sub,float sal):Person(n,a),Employee(n,a,sal),Student(n,a,sub) {}
};
int main()
{
    Manager Microsoft("Ram Pandey",30,"AI",25000);
    cout<<setw(10)<<"Name :"<<Microsoft.Name()<<endl;
    cout<<setw(10)<<"Age :"<<Microsoft.Age()<<endl;
    cout<<setw(10)<<"Subject :"<<Microsoft.Subject()<<endl;
    cout<<setw(10)<<"Salary :"<<Microsoft.Salary()<<endl;
    return 0;
};
