/*in class we can use funtion */

/*tamplate->Templates are a feature of the C++ programming language that 
allows functions and classes to operate with generic types. This allows a 
function or class to work on many different data types without being rewritten 
for each one

*/
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // setdata is Declar
    // get data print karega and void return karega
    void getData() // getdata is define
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1) // setdata funtion is define outside the employee
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee harry; // we created an object “harry” of the class “employee”
    // harry.a = 134; -->This will throw error as a is private  //private member can not acess directly
    harry.d = 34; // we assigned values to “int d”
    harry.e = 89; // we assigned values to “int e
    harry.setData(1, 2, 4);
    harry.getData();
    return 0;
}



