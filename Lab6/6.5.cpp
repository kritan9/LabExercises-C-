#include <iostream>
using namespace std;
class Complex{
protected:
    float r,i;
public:
    Complex(){
        cout<<"Enter the real and complex part of the complex no. ";
        cin>>r>>i;
    }
    float real(){return r;}
    float img(){return i;}
    void display(){
    cout<<'('<<r<<" + "<<i<<"i )";
    }
};

class  DComplex: public Complex{
public:
    DComplex& operator+(Complex a)
  {
    r += a.real();
    i += a.img();
    return *this;
  }
  friend class FComplex;

};
class FComplex: public Complex{

    public:
        FComplex& operator-(DComplex a){
            r -= a.r;
            i -= a.i;
            return *this;
        }
};
int main(){
    Complex a;
   DComplex b;
   FComplex c;
  a.display();
  cout << "+";
  b.display();
  cout << "=";
  (b+a).display();
  cout<<endl;
  c.display();
  cout << "-";
  b.display();
  cout << "=";
  (c-b).display();
    return 0;
}
