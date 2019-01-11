#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void in(char *a,fstream &x,int l=0)
{
    char temp; int i;
    for( i=0;;i++){
            x.get(temp);
       if(temp!='\n' ) {a[i]=temp;
       if(l==1) if(temp=='}') break;
       }
    else break;
    }
    a[i]=0;

}

int check_state(char *a,char *b){
    int temp=1;
    for(int f=0;f<strlen(a);f++){
        if(a[f]!=b[f]) {temp=0; return temp;}
    }
    return temp;
}

void FA(char *a,char *b,char *transition){
    if(a[0]!=0){
            cout<<"("<<b<<" , "<<a<<" )\n->";
            for(int i=0;i<strlen(transition);i++){
                if(check_state(b,transition+i)){
                        for(;transition[i]!=',' ;i++){}
                        i++;
                        for(;transition[i]==' ';i++){}
                    if(a[0]==transition[i]){
                    i++;
                    for(;i<strlen(transition);i++){
                    if(transition[i]==' ' || transition[i]==','){}
                    else break;
                    }
                        int j=0;
                        for(;transition[i]!=')' && transition[i]!=' ';i++){
                            b[j]=transition[i];
                            j++;
                        }
                        b[j]=0;
                    break;

                }
                }
            }
            FA(a+1,b,transition);}
            else cout<<"("<<b<<" , e)\n";

}

int main()
{
    int cont=1;
    char temp;
    char states[100],alphab[100],current_state[10],initial[10],final[100],transition[200];
    fstream file;
    file.open("FA.txt",ios::in);
    in(states,file);  in(alphab,file);  in(initial,file);  in(final,file);  in(transition,file,1);
     file.close();
    char str[50];
    while(cont==1){
            for(int i=0;i<10;i++){
                current_state[i]=initial[i];
            }
     for(int i=0;i<strlen(current_state);i++){
        if(current_state[i]=='='){
             int j;
                i++;
            for( j=0;current_state[i]!=0;i++){
                if(current_state[i]==' '){}
                else {
                    current_state[j]=current_state[i];
                    j++;
                }
            }
        current_state[j]=0;
        }
    }

    cout<<"Enter the input string\n";
    cin>>str;

    FA(str,current_state,transition);
    for(int l=0;l<strlen(final);l++){
    if(check_state(current_state,final+l)) {cout<<"The string is accepted by the DFA\n"; break;}
        else if(l==strlen(final)-1) cout<<"The string is not accepted by the DFA since "<<current_state<<" is not a final state\n";
    }
    cout<<"Do yo wish to continue?(y/n)  ";
    cin.ignore();
    temp=cin.get();
   if(temp=='n'){cont=0;}
    }
    return 0;
}



