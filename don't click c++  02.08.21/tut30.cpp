/*                      parametericed constructor
             how to use of implecit call and explicit call         */

// #include <iostream>
// using namespace std;
// class complex
// {
//     int a, b;

// public:
//     complex(int x, int y) // parameterized constructot
//     {
//         a = x;
//         b = y;
//     }
//     void getdata()
//     {
//         cout << "enter the value of complex number " << a << " + " << b << "i" << endl;
//     }
// };
// int main()
// {
//     // implicit call
//     complex q1(1, 2);
//     q1.getdata();

//     // explicit call
//     complex q2 = complex(2, 1);
//     //q1.getdata();  //it can also be declare here
//     q2.getdata();
//     return 0;
// } 





//******  programm no 2 ***************/

#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};
int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}


// //quistion  how to write a program which find distance between two point