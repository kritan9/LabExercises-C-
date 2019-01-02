#include <iostream>
#include <cstring>
using namespace std;
class Depart{
    int id;
    char name[20];
public:
    Depart(){
        cout<<"Enter Department id and name:"<<endl;
        cin>>id>>name;
        cout<<"constructor of department id "<<id<<" invoked "<<endl;
    }
    ~Depart(){
        cout<<"Destructor of department id "<<id<<" invoked"<<endl;
    }

};
int main(){
    Depart a,b;
    return 0;
}
