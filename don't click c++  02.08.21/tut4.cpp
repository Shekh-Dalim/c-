/*variable scope and data type */
#include <iostream>
using namespace std;
// static int glo;
int glo;
void sum()
{
  int a;
  cout << glo;
}
int main()
{

  int glo = 12; // local variable get priority
  bool is_true = true;
  // sum(); //funtion sum can be also called two time
  sum();
  // cout<<glo<<is_true;
  cout << glo << is_true;
  // cout<<glo<<is_true;
  return 0;
}
