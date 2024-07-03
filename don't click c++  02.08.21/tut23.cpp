

// /*      *********memory allocation *******************             */

#include <iostream>
using namespace std;

class Shop
{
  int itemID[100];
  int itemPrice[100];
  int counter;

public:
  void intCounter(void)
  {
    counter = 0;  // couter value start from 0 for every object
  }
  void setPrice(void);
  void displayPrice(void);
};

void Shop ::setPrice(void)
{
  cout << "Enter Id of your item number "<<counter+1<< endl;
  cin >> itemID[counter];
  cout << "Enter price of your item" << endl;
  cin >> itemPrice[counter];
  counter++;
}

void Shop ::displayPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout<<"The price of item with Id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
  }
}

int main()
{
  Shop dukan;
  dukan.intCounter();  // without using this line counter return garbage value
  // dukan.setPrice();
  // dukan.setPrice();
  // dukan.setPrice();

  //setprice display with loop
  for (int i = 0; i < 3; i++)
  {
  dukan.setPrice();
  }
  dukan.displayPrice();

  return 0;
}

