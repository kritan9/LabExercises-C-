#include <iostream>
using namespace std;

class Musicians
{
 protected:
  string str[3][5];
 public:
  void string()
  {
    str[0][0] ="vern";
    str[0][1]="guitar";
    str[0][2]="sitar";
    str[0][3]="sarod";
    str[0][4]="mandolin";
    cout<< "string instrument has been initialized to" << endl;
    for(int i = 0 ; i < 5; i++)
    {
      cout << str[0][i] << endl;
    }
  }
  void wind(){

    str[1][0]="flute";
    str[1][1]="mridangam";
    str[1][2]="bangos";
    str[1][3]="drums";
    str[1][4]="tambour";
    cout<< "wind instrument has been initialized to" << endl;
    for(int i = 0 ; i < 5; i++)
    {
      cout << str[1][i] << endl;
    }
  }
  void perc()
  {
    str[2][0]="tabla";
    str[2][1]="mridangam";
    str[2][2]="bangos";
    str[2][3]="drums";
    str[2][4]="tambour";
    cout<< "percussion instrument has been initialized to" << endl;
    for(int i = 0 ; i < 5; i++)
    {
      cout << str[2][i] << endl;
    }
  }
};
class TypeIns:public Musicians
{
 public:
  void get()
  {
    cout<<"Type of instrument to be displayed" << endl;
    cout << "a. String instruments" << endl;
    cout << "b. Wind instruments" << endl;
    cout << "c. Percussion instruments" << endl;
    char choice;
    cin >> choice;
    show(choice);
  }
  void show(char choice)
  {
      for(int i = 0 ; i < 5; i++)
        cout << str[choice-'a'][i] << endl;
    }
};
int main()
{
  TypeIns t;
  t.string();
  t.perc();
  t.wind();
  t.get();
  return 0;
}
