/*                  copy constructor                  */

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    /****** When no copy constructor is found, compiler supplies its own copy constructor  ****/

    // Number(Number &obj)  // copy constructor
    // {
    //     cout << "Copy constructor called!!!" << endl;
    //     a = obj.a;//iss object ki 'a' ko obj.a ki barabar kar do
    // }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main(){
    Number x, y, z(45), z2;
    // x.display();
    // y.display();
    // z.display();

    // Number z1(z); // Copy constructor invoked
    // Number z1 = z; // Copy constructor invoked
    // z1.display();

    z2 = z; // Copy constructor not called because object('z2') already created
    // z2.display();

    // Number z3 = z; // Copy constructor invoked because object direct create here
    // z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}

