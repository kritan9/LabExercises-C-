#include <iostream>
using namespace std;
namespace square{
    int num;
    int fun(int a){
        return a*a;
    }
}
namespace cube{
    int num;
    int fun(int a){
        return a*a*a;
    }
}
int main(){
    square::num=2;
    cube::num=3;
    cout<<"The square of "<<cube::num<<" is "<<square::fun(cube::num)<<endl;
    cout<<"The cube of "<<square::num<<" is "<<cube::fun(square::num)<<endl;
    cin.get();
    return 0;
}
