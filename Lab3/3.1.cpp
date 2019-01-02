#include <iostream>
using std::cout;
class celsius{
private:
    float temp;
public:
   void setTemp(float temp){
        this->temp=temp;
    }
    float toFahrenheit()
    {
        return 32.0+temp*9.0/5;
    }
    float toFahrenheit(float temp)
    {
        return 32.0+temp*9.0/5;
    }
};
class fahren{
private:
    float temp;
public:
    void setTemp(float temp){
        this->temp=temp;
    }
    float toCelsius()
    {
        return -32.0+temp*5.0/9;
    }
    float toCelsius(float temp)
    {
        return (-32.0+temp)*5.0/9;
    }
};
int main(){
    celsius t1;
    fahren t2;
    t1.setTemp(36);
    t2.setTemp(98);
    cout<<"36 degree celsius is "<<t1.toFahrenheit()<<" degree Fahrenheit";
    cout<<"\n98 degree fahrenheit is "<<t2.toCelsius(98)<<" degree Celsius";
}
