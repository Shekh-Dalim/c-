// /*we will discuss ‘this’  pointer to solve  (a=a)which variable name same as argument of setdata */

// #include <iostream>
// using namespace std;
// class A
// {
//     int a;   // here a is class variable

// public:
//     void setData(int a)  //c++ ke ander local variable ko jada valu die jate hai
//     //here a is local variable
//     // and here local variable ko jada valu dia jata hai
//     {
//         this->a = a;  // jo object kee lie setdata() run kar rahe hai us object kee lie 'a' ko set kar do
//     }

//     void getData()
//     {
//         cout << "The value of a is " << a << endl;
//     }
// };
// int main()
// {
//     /** 'this pointer'   and  'this' is a keyword which is pointer which points to
//      the object which invokes the member funtion **/
//     A e;
//     e.setData(4);
//     e.getData();
//     return 0;
// }

/**/
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a; // this point kar ta hai 's' object ko jisne member funtion ko call kia
        return *this;
        /*another use of this funtion  agar ap return karna chaha tai hai
        oo object(this) jiske lie yee memeber funtion run kar rahe hai
        */
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A s;
    s.setData(4).getData(); // return hai isilie implicit run kar sakte hai
    // s.getdata();   //explicit run kar ni ki jarurat nehi hai
    return 0;
}
