/*  Single Inheritance */

//***how to access private data member of the base classs by using funtion ******
// publically inherrite program

// #include <iostream>
// using namespace std;

// class Base
// {
//     int data1; // private by default and is not inheritable
// public:
//     int data2;
//     void setData(); // only declear
//     int getData1(); // only declear
//     int getData2(); // only declear
// };

// void Base ::setData(void) // define
// {
//     data1 = 10;
//     data2 = 20;
// }

// int Base::getData1() // define
// {
//     return data1;
// }

// int Base::getData2() // define
// {
//     return data2;
// }

// /* Derive class */
// class Derived : public Base   // Class is being derived publically
// {
//     int data3;

// public:
//     void process();
//     void display();
// };

// void Derived ::process()
// {
//     data3 = data2 * getData1();
// }

// void Derived ::display()
// {
//     cout << "Value of data 1 is " << getData1() << endl;/*data1 ko funtion {getdata1()} ke through lana parega qu ki data1 to private member hai base class ki which is never inherite */
//     cout << "Value of data 2 is " << data2 << endl; // data2 is public member of the base class
//     cout << "Value of data 3 is " << data3 << endl; // data3 is private member of derive class
// }
// int main()
// {
//     Derived der;
//     der.setData();
//     der.process();
//     der.display();

//     return 0;
// }

/*  inherrite program  in the way of privately  */

#include <iostream>
using namespace std;
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData(); // only declear
    int getData1(); // only declear
    int getData2(); // only declear
};

void Base ::setData(void) // define
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1() // define
{
    return data1;
}

int Base::getData2() // define
{
    return data2;
}

/*    Derive class */
class Derived : private Base // Visibility mode is private
{                            // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    // Private data ko bahar se call nehi kar sakta but within class kar sakta hmm

    setData(); // we can't call directly the 'setdata()' but call through derive class
    data3 = data2 * getData1();
}

void Derived ::display()
{
    // setData();//if call here then data3 give gaebage value

    cout << "Value of data 1 is " << getData1() << endl; /*data1 ko funtion {getdata1()} ke through lana parega qu ki data1 to private member hai base class ki which is never inherite */
    cout << "Value of data 2 is " << data2 << endl;      // data2 is public member of the base class
    cout << "Value of data 3 is " << data3 << endl;      // data3 is private member of derive class
}
int main()
{
    Derived der;
    // der.setData();  // we can not call because  Derive class use private derivation
    der.process();
    der.display();

    return 0;
}

