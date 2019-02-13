#include <iostream>
using  namespace std;
template <class T>
class Queue{
private:
    T var[25];
    int cnt;
public:
    Queue()
    {
        cnt=-1;
    }
    void Add(T x)
    {
        var[++cnt]=x;
    }
    T Get()
    {
        T temp=var[0];
        for(int i=0;i<cnt;i++) var[i]=var[i+1];
        --cnt;
        return temp;
    }
    int Length(){return cnt+1;}

};

int main()
{
    Queue<int> ilist;
    ilist.Add(6);
    ilist.Add(4);
    cout << ilist.Get() << endl;
    cout << ilist.Get() << endl;
    Queue<float> flist;
    flist.Add(1.8);
    flist.Add(3.6);
    cout << flist.Get() << endl;
    cout << flist.Get() << endl;
    return 0;
}
