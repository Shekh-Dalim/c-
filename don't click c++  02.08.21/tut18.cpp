//***********recursions funtion**********
/*RECURTION  funtion mean -> ek funtion apne ap ko khud ii call karte hai and uske bad apne apko tabtak
call karta rahate hai jab tak base condition meet nehi kat jati hai*/

// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//         if(n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);

// }
// int main()
// {
//     int a;
//     cout<<"enter the value a";
//     cin>>a;
//     cout<<"the value of factorial a "<<factorial(a);
//     return 0;
// }



/*   fibonacci number    */

#include <iostream>
using namespace std;
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int a;
    cout << "enter a number a " << endl;
    cin >> a;
    cout << "the term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}
