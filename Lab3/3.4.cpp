#include <iostream>
#include <cmath>
using  namespace std;
class Circle{
    float radius;
public:
    void setRadius(float a){
        radius=a;
    }
    float area(){
        return M_PI*radius*radius;
    }
    float perimeter(){
        return M_PI*2*radius;
    }
    void display(){
        cout<<"the circle of radius "<<radius<<" has perimeter and area "<<perimeter()<<" units and "<<area()<<" sq. units resp."<<endl;
    }
};
class Triangle{
    float a,b,c;
public:
    void setSides(float x,float y,float z){
        a=x; b=y; c=z;
    }
    float area(){
        float s=perimeter()*0.5;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    float perimeter(){
        return a+b+c;
    }
    void display(){
        cout<<"the triangle of sides "<<a<<','<<b<<','<<c<<" has perimeter and area "<<perimeter()<<" units and "<<area()<<" sq. units resp."<<endl;
    }
};
class Rectangle{
    float l,b;
public:
    void setSides(float x,float y){
        l=x; b=y;
    }
    float area(){
        return l*b;
    }
    float  perimeter(){
        return 2*(l+b);
    }
    void display(){
    cout<<"the rectangle of sides "<<l<<','<<b<<" has perimeter and area "<<perimeter()<<" units and "<<area()<<"sq. units resp."<<endl;
    }
};
int main(){
    Circle c;
    Triangle t;
    Rectangle r;
    c.setRadius(5);
    t.setSides(3,4,5);
    r.setSides(4,50);
    c.display();
    t.display();
    r.display();

}
