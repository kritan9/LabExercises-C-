#include <iostream>
int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
using namespace std;
class Date
{
private:
  int year;
  int month;
  int day;
public:
  Date(int y, int m, int d)
  {
    setDate(y, m, d);
  }
  static bool isLeapYear(int y)
  {
    if((y % 4 == 0 && y%100!=0)|| y%400==0)
      return true;
    else
      return false;
  }
  bool setDate(int y, int m, int d )
  {
    year = y;
    if (m <= 12 && m > 0)
      {
	month = m;
      }
    else
      {
	cerr << "invalid month";
	return false;
      }
    if (d > 0 && d <= days[m-1])
      {
	day = d;
      }
    else if (m == 2 && d == 29 && isLeapYear(y))
      {
	day = d;
      }
    else
      {
	cerr << "invalid days in month";
	return false;
      }
    return true;
  }
  Date operator++()// pre
  {
    day += 1;
    if (month == 2 && isLeapYear(year) == true && (day==30 || day==29))
      {
          if(day==29) return *this;
        day=1;
        month=3;
      }
    else
      {
	if (day > days[month-1])
	  {
	    day=1;
	    month++;
	   }
      }
    if (month > 12)
      {
	month==1;
	year++;
      }
    return *this;
  }
  Date operator++(int)// post
  {
    Date temp = *this;
    ++(*this);
    return temp;
  }
  void display()
  {
    cout << year << "-" << month << "-" << day;
  }
};
int main()
{
  int y, m, d;
  char temp;
  cout << "Enter date yyyy-mm-dd";
  cin >> y >> temp >> m >> temp >> d;
  Date date(y,m,d);
  cout << "Post increment of date return value";
  (date++).display();
  cout << endl;
  cout << "Post increment after execution";
  date.display();
  cout << endl;
  cout << "Pre of date return value";
  (++date).display();
  cout << endl;
  cout << "Pre increment after execution";
  date.display();
  return 0;
}
