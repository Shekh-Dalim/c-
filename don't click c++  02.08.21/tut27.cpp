// *****individually declaration funtion as friend*********/

// (ek class ke funtion ko dusre class ka friend banaya)
#include <iostream>
using namespace std;
class complex; //****forward declaration***** mean bataya ki complex class mojud hai usmai kaya hai oo nehi bataya
class calculator
{
public:
    int sumrealcomplex(complex o1, complex o2);
    int sumrealcomplex(complex , complex );
};

class complex
{
    int a;
    int b;

public:

    friend int calculator ::sumrealcomplex(complex o1, complex o2); // ek class ke funtion ko dusre class ka friend banaya
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "the complex number " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2) // define
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;

    o1.setdata(1, 4);
    o2.setdata(5, 7);

    calculator calc;

    int res = calc.sumrealcomplex(o1, o2); // mujhe result ke ander bataw sumrealcomplex o1 and o2 ka kaya hai
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    return 0;
}

/*                kese pura class ko hi friend banalia                             */

// #include <iostream>
// using namespace std;
// class complex;
// class calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     int sumRealComplex(complex, complex);
//     int sumcompComplex(complex, complex);
// };
// class complex
// {
//     int a;
//     int b;

// public:
// //     friend int calculator ::sumRealComplex(complex o1, complex o2);
// //     friend int calculator ::sumcompComplex(complex o1, complex o2);

// friend class calculator;//(Declaring the entire calculator class a friend) pure class ko hi friend bana lie
//     void setdata(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printnumber()
//     {
//         cout << "the complex number " << a << " + " << b << "i" << endl;
//     }
// };
// int calculator::sumRealComplex(complex o1, complex o2) // sum of 1,4
// {
//     return (o1.a + o2.a);
// }
// int calculator::sumcompComplex(complex o1, complex o2) // sum of 4,7
// {
//     return (o1.b + o2.b);
// }
// int main()
// {
//     complex o1, o2;
//     o1.setdata(1, 4);
//     o2.setdata(5, 7);
//     calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout << "the sum of real part of a1 and o2 is " << res << endl;
//     int resc = calc.sumcompComplex(o1, o2);
//     cout << "the sum of real part of a1 and o2 is " << resc << endl;
//     return 0;
// }

