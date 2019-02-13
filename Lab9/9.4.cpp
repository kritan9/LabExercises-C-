#include <iostream>
using namespace std;
class DIVZERO{};
class DIVMINUS{};
int main()
{
  int a, b;
  float ans=0;
  try {
    cout << "a";
    cin >> a;
    cout << "b";
    cin >> b;

    try {
      if(b < 0)
        throw DIVMINUS();
      if(b == 0)
        throw DIVZERO();
      ans = a/b;
    }
    catch (DIVZERO)
    {
      cerr << "rethrowing DIVZERO exception" << endl;
      throw;
    }
    catch (DIVMINUS)
    {
      cerr << "divison by minus in not allowed"<< endl;
    }

  } catch (...) {
    cerr << "caught exception";
  }
  cout << ans;
  return 0;
}
