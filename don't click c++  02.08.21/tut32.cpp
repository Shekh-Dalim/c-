/*  Constructor with default argument */

/*    1st program           */

#include<iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
   
    simple(int a1,int b1 ,int c1=8)  //C1 is a default constructor
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void display()
    {
        cout<<" the value of a,b,c "<<endl<<a<<endl<<b<<endl<<c<<endl;
    }
};
int main()
{
   
    simple q1(1,2);
    q1.display();
    return 0;
} 



/*            2nd program               */


// #include<iostream>
// using namespace std;
// class simple
// {
//     int a,b,c;
//     public:
//     simple(int a1,int b1 ,int c1=9)
//     {
//         a=a1;
//         b=b1;  
//         c=c1;
//     }
//     void display()
//     {
//         cout<<" the value of a,b,c "<<endl<<a<<endl<<b<<endl<<c<<endl;
//     }
// };
// int main()
// {
//      simple q1(1,2,3);//first pririty if given value 
//     // simple q1(1,2); //if here c value not given then find in funtion where argument are written 
//     q1.display();
//     return 0;
// }