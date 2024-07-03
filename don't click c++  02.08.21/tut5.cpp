/*c++ basik input output */
#include<iostream>
using namespace std;

  int main()
{
    int num1, num2;                   //(cin>>)use only when enter value
    cout<<"enter the value of num1:\n";//<< insertion operator
    cin>>num1;                        //>>extraction operator
    cout<<"enter the value of num2:\n";
    cin>>num2;
    cout<<"this sum is "<<num1+num2;
     return 0;
}
