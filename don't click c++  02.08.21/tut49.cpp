  /*                    initialization  list in cnstructor                   */

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

#include <iostream>
using namespace std;

class Test
{
    int a,b;
    

public:
// this type of process only use in constructor 
    // Test(int i, int j) : a(i),b(j) // this line will be run
    // Test(int i, int j) : a(i), b(i+j) //this line will be run
    // Test(int i, int j) : a(i), b(2*j) //this line will be run
    // Test(int i, int j) : a(i), b(a+j) //this line will be run
    // Test(int i, int j) : a(i), b(j+a) //this line will be run
    //  Test(int i, int j) : b(j),a(i)   //this line will be run
    Test(int i, int j) : b(j),a(i+b)  //ths line will not run because This will create problems because a will be initialized first
    
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }

    
    //     Test(int i, int j) : a(i) 
    //     {
    //         b = j;
    //         cout << "Constructor executed" << endl;
    //         cout << "Value of a is " << a << endl;
    //         cout << "Value of b is " << b << endl;
    //     }
    // };
};

int main()
{
    Test t(4, 6);

    return 0;
}

