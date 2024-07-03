
//program1 ** kis tara se humne ek object ka arrey bana sakte hai
/*  Array of Objects & Passing Objects as Function Arguments  */


// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int salary; 

// public:
//     void setId(void)
//     {
//         salary = 122;
//         cout << "Enter the id of employee" << endl;
//         cin >> id;
//     }

//     void getId(void)
//     {
//         cout << "The id of this employee is " << id << endl;
//     }
// };

// int main()
// {
//     // Employee harry, rohan, lovish, shruti;
//     // harry.setId();
//     // harry.getId();

//     /* When there is more no of employee then we use array */
//     Employee fb[4];//store all the Employe in an Array
//     for (int i = 0; i < 4; i++)
//     {
//         fb[i].setId();
//         fb[i].getId();
//     }

//     return 0;
// }



// program 2

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }

    void setDataBySum(complex C1, complex C2)
    /*complex classs ki ek object o1 and dusre object o2 hai jo ki equal hai c1=o1,c2=o2 ke barabar*/
    {
        a = C1.a + C2.a; // o1 ka a and o2 ka a
        b = C1.b + C2.b; // o1 ka b and o2 ka b
    }

};


int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2); // if funtion is present in the class then we write like ( object.funtion )
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}


