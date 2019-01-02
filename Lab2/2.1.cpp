#include <iostream>
using namespace std;
typedef struct{
    int month,year,day;
}sdate;
void date(sdate);
int main(){
    sdate a;
    a.month=3;
    a.year=1997;
    a.day=12;
    date(a);
    cin.get();
    return 0;
}

void date(sdate sth){
    cout<<"The date is "<<sth.month<<'/'<<sth.day<<'/'<<sth.year<<endl;
}
