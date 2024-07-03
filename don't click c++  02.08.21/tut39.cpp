/*              use of protected            */
// main ek private varibale hmm jo ki inherit ho saktai hai  

#include <iostream>
using namespace std;

class Base
{
    /*mai ek aisa vaiable  hmm jo ki inherite ho sakta hmm but public nehi hmm
    thora sa public and thora sa private */
protected: // thora sa private rahe lekin inherite ho jaye then use protecterd
    int A ;

private:
    int B;
};

class Derived : protected Base
{


};

int main()
{
    Base b;
    Derived d;
    // cout<<b.A;  //protected ko direct call nehi kar  
    // cout<<d.A; // Will not work since 'A' is protected in both base as well as derived class
    return 0;
}
