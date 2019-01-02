
#include <iostream>

using namespace std;
class employee
{

private:

  int id;
  int bonus;
  int overtime;
  int year;

public:

  void setpara(int i, int b, int o, int y)
  {
    id =i;
    bonus = b;
    overtime = o;
    year = y;
  }
  void displayreport()
  {
    cout << "Employee with id " << id << " has received Rs. " << bonus << " as bonus and had worked " << overtime << " hours as a over time in year " << year << endl;
  }

};
int main()
{
  int n;
  cout << "Enter the no of employee?";
  cin >> n;
  employee *e=new employee[n];
  for (int i = 0; i < n; i++)
    {
      int id, bonus, overtime, year;
      cout << "Employee id:";
      cin >> id;
      cout << "Bonus:";
      cin >> bonus;
      cout << "Overtime:";
      cin >> overtime;
      cout << "Year:";
      cin >> year;
      e[i].setpara(id,bonus,overtime,year);
    }

  for (int i = 0; i< n ; i++)
    {
      e[i].displayreport();
    }
  return 0;
}
