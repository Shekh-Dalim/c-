#include <iostream>
using namespace std;
class Y;
class X;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2) //ek X ka o1 and ek Y ka o2 means-> o1, X ka object and o2, Y ka object
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;  //1stobject.integer dataname1 +2ndobject.integer dataname2
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}



/*                                 */

// #include <iostream>
// using namespace std;

// class c2;

// class c1
// {
//     int val1;
//     friend void exchange(c1 &, c2 &); // ek c1 ka referance and ek c2 ka referance leta hai

// public:
//     void indata(int a)
//     {
//         val1 = a;
//     }

//     void display(void)
//     {
//         cout << val1 << endl;
//     }
// };

// class c2
// {
//     int val2;
//     friend void exchange(c1 &, c2 &);

// public:
//     void indata(int a)
//     {
//         val2 = a;
//     }

//     void display(void)
//     {
//         cout << val2 << endl;
//     }
// };

// void exchange(c1 &x, c2 &y) //first class"c1" ka ek objct lie jo ki'x' hai and 2nd class"c2" ka ek object lie jo ki  'y'
// {
//     int tmp = x.val1;  //
//     x.val1 = y.val2;
//     y.val2 = tmp;
// }
// int main()
// {
//     c1 oc1;
//     c2 oc2;

//     oc1.indata(34);
//     oc2.indata(67);
//     exchange(oc1, oc2);

//     // cout << "The value of c1 after exchanging becomes: "<<oc1.display();   // ku6 return nehi kar raha hai isilie hum eise nehi lik sakta
//     cout << "The value of c1 after exchanging becomes: ";
//     oc1.display();
//     cout << "The value of c2 after exchanging becomes: ";
//     oc2.display();

//     return 0;
// }
