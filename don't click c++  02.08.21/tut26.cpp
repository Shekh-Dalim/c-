//  //is program mai sirf ek funtion ko friend funtion banaya hai 

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
#include <iostream>
using namespace std;


class Complex
{
    int a, b;
public:
// int a, b;  // if a ans b is public member then without friend funtion this programm will be run
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
  
    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

//private member a and b can not access directly out of class 
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3; 
   // cout<<a; // this is a meaningless  line if we write here because yee kiska 'a' ,o1 ka "a "yaa o2 ka "a"
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));// set the complex number with the help of object o3
    return o3;
}
 
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);// this line can not write like this ( sum.sumcomplex ) becaus sumfuntion out of class 
    sum.printNumber();

    return 0;
}

// /* Properties of friend functions  


// 1. Not in the scope of class
// 2. since it is not in the scope of the class, it cannot be called from the 
//    object of that class like   sum.sumComplex() == Invalid
// 3. Can be invoked without the help of any object  (this line mean kisi object
//    ki jorurat nehi hai isko invoke karne ke lie)
// 4. Usually contans the objects as arguments    ex: Complex sumComplex(Complex o1, Complex o2)
// 5. Can be declared inside public or private section of the class
// 6. It cannot access the members directly by their names and need object_name.member_name 
//    to access any member.

// */
  

