/*different type of operator */

#include <iostream>
using namespace std;
int main()

// //***********ARITHMATIC OPERATOR***********
//{
// int a=9;
// int b=10;
//  cout<<"operator in c++"<<endl;
//  cout<<"folling are the types of operator in c++"<<endl;
//  cout<<"the valu of a+b is"<<a+b<<endl;
//  cout<<"the valu of a-b is"<<a-b<<endl;
//  cout<<"the valu of a*b is"<<a*b<<endl;
//  cout<<"the valu of a/b is"<<a/b<<endl;
// cout<<"the valu of a%b is"<<a%b<<endl;    
//  cout<<"the valu of a++ is"<<a++<<endl;
//  cout<<"the valu of a-- is"<<a--<<endl;
//  cout<<"the valu of ++a is"<<++a<<endl;
//  cout<<"the valu of --a is"<<--a<<endl;

// return 0;
//}

//****************ASSIGNMENT OPERATOR*************************

/*{

=  ->SIMPLE OPERATOR         (eg: a=7)
+= ->ADD AND ASSIGNMENT OPERATOR(eg:a+=1 means "a" pehele 7 thaa aabb "1" add kar dia aabb 'a' ki value 8 hoo jaye ga)
-= ->
*= ->
/= ->

    int a=3,b=4;
    char d='d';
    cout<<"value of a:\n"<<a<<endl<<"valu of b\n"<<b<<endl<<"value of d";
    return 0;
}*/

//**************Relation or COMPERISON OPERATOR*************

{
  int a = 3;
  int b = 4;
  cout << "the valu of a==b is" << endl
       << (a == b) << endl;
  cout << "the valu of a<=b is" << endl  // koivi ek correct hoga to output one hoga menas  a!=b but a<b .
       << (a <= b) << endl;
  cout << "the valu of a>=b is" << endl
       << (a >= b) << endl;
  cout << "the valu of a>b  is" << endl
       << (a > b) << endl;
  cout << "the valu of a<b is" << endl
       << (a < b) << endl;
  cout << "the valu of a!=b is" << endl
       << (a != b) << endl;
  return 0;
}

//*****************LOGICAL OPERATOR*********************
// {
//     int a=3;
//     int b=4;
//     cout<<"Following are the logical operators in C++"<<endl;
//     cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
//     cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
//     cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;

//     return 0;
// }