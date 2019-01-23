#include <iostream>
#include <string>
using  namespace std;
class Student
{
protected:
    string name;
    int age;
public:
    Student() {}
    Student(string n,int a):name(n), age(a) {}
    string Name()
    {
        return name;
    }
    int Age()
    {
        return age;
    }
    virtual string Subject()=0;
};
class Engineering:public Student
{
public:
    Engineering() {}
    Engineering(string n,int a):Student(n,a) {}
    string Subject()
    {
        return "Engineering";
    }
};
class Medicine:public Student
{
public:
    Medicine() {}
    Medicine(string n,int a):Student(n,a) {}
    string Subject()
    {
        return "Medicine";
    }
};
class Science:public Student
{
public:
    Science() {}
    Science(string n,int a):Student(n,a) {}
    string Subject()
    {
        return "Science";
    }
};
int main()
{
    Student* st[3];
    st[0] = new Engineering("Kritan",19);
    st[1] = new Medicine("Hari",20);
    st[2] = new Science("Shyam",18);
    cout << "Student of various field" << endl;
    for (int i = 0; i < 3; ++i)
    {
        cout << "Name :" << st[i]->Name() << endl;
        cout << "Age  :" << st[i]->Age() << endl;
        cout << "Sub  :" << st[i]->Subject() << endl;
    }
    return 0;
};
