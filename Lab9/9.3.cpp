#include<iostream>

using namespace std;

template<class T>

class Stack

{

private:

    T st[2];

    int top;

public:
    class Full{};
    class Empty{};
    Stack(){top=-1;};

    void push(T var){
        try{
            if(top==1) throw Full();
        st[++top]=var;
        }
        catch(Full ){
            cout<<"stack Full"<<endl;
        }

        };

    T pop(){
        try{
            if(top==-1) throw Empty();
          return st[top--];
        }
        catch(Empty ){
            cout<<"stack Empty"<<endl;
        }
        };


};

int main()

{

    Stack<float> s1;
    s1.pop();
    s1.push(111.1F);
    s1.push(222.2F);
    s1.push(333.3F);
    cout<<"1 : "<<s1.pop()<<endl;
    cout<<"2 : "<<s1.pop()<<endl;
    return 0;

}
