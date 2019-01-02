#include <iostream>
using namespace std;
class eng
{
    char *ch;
public:
    eng(){ch=NULL;}
    eng(const char* a){
        ch=new char[len(a)+1];
        for(int i=0;i<len(a);i++){
            ch[i]=a[i];
        }
        ch[len(a)]=0;
    }
    char* getStr(){
        return ch;
    }
   static eng join(eng a,eng b){
        char *x;int n=len(a.getStr())+len(b.getStr()); int k=len(a.getStr());
        x=new char[n+1];
        for(int i=0;i<n;i++){
            if(i<k) x[i]=a.getStr()[i];
            else x[i]=b.getStr()[i-k];
        }
        x[n]=0;
        eng temp(x);
        return temp;
    }
    void showString(){
        cout<<ch;
    }
    static int len(const char *a){
        int i;
        for(i=0;a[i]!=0;i++);
        return i;
    }
    ~eng(){
        delete[] ch;
    }
};
int main(){
    eng a("Engineers are "),b("Creatures of logic");
     eng d=eng::join(a,b);
    d.showString();
}
