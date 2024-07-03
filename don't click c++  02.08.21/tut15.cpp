
// /*    funtion prototype   */

// #include <iostream>
// using namespace std;

// // int sum(int a,int b)                  //here taken two argument
// // {

// // int c=a+b;
// // return c;
// // }
//  /* syntex of funtion prototype
//     type funtionname(argument)*/
// // int sum(int a,int b);                   //acceptable             ****//syntex [type funtion-name(argument);]**
// // int sum(int a,b);                       //not acceptable
// int sum(int, int);                         // acceptable   this is funtion prototype
// // void g();                                  // or here void g(void)
// int main()
// {
//     int num1, num2;                         // we can also replace num1,num2  by a,b
//     cout << "enter the first number" << endl;
//     cin >> num1;                            // also use 'a' in the place of num1;
//     cout << "enter second number" << endl;
//     cin >> num2;                             // also use 'b' in the place of num2;
//                                              // actual parameters num1 and num2
//     cout << "the sum is\n"<< sum(num1, num2);// pehele to yee sum ko find karega and then num1 and num2 ka  value pass kara dega
//     // g();
//     return 0;
// }

// int sum(int a, int b)                        // here taken two argument
//                                              // formal parameters  a,b will be taken value from actual  from actual parameters num1,num2
// {
//     int c = a + b;
//     return c;
// }
// // void g()
// // {
// //     cout << "\nhellow good morning";
// // }
