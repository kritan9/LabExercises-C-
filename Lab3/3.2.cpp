#include <iostream>
#include <cstdio>
using namespace std;
class checkPrime{
private:
   unsigned int num=1,flag;
public:
    setNum(unsigned int n)
    {
        num=n; flag=1;
    }
    int checkNum()
    {
            if(num==1) return 0;
            else if(num==2) return 1;
            for(int i=2;i<=num/2;i++)
                {
                    if(num%i==0) { flag=0; break;}
                }
                return flag;
    }
    void result(){
        if(flag==0) cout<<"The number "<<num<<" is not prime\n";
        else  cout<<"The number "<<num<<" is prime\n";
    }
};
int main()
{
        unsigned int temp;
        char a;
        checkPrime x;
        while(1)
        {
                cout<<"Enter a natural number ";
                cin>>temp;
                x.setNum(temp);
                x.checkNum();
                x.result();
                cout<<"Do you want to test another number? (y/n)  ";
                fflush(stdin);
                cin.get(a);
                if(a=='N' || a=='n') break;
        }
}
