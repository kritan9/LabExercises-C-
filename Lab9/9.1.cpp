#include <iostream>
using  namespace std;
template <class T>
T sum(T* a)
{
    T temp=0;
    for(int i=0;i<sizeof(a);i++) temp+=a[i];
    return temp;
}

int main()
{
    int a[5]={2,6,7,9,4};
    double b[4]={1.0,2.3,6.1,1.1};
    cout<<"sum of Integers: "<<sum(a)<<endl;
    cout<<"sum of Doubles: "<<sum(b)<<endl;
    return 0;
}
