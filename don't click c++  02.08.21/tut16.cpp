// //*****************call by value **************

// #include<iostream>
// using namespace std;
// /* swappointer ek bar use karne ke bad destroid ho jata hai */
// void swappointer(int *a,int *b)           //*****pass the address of a and b
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
// int  x=2,y=3;
// cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y<<endl;
// swappointer (&x,&y);           //**lelo adress of a and b        //***  this line mean call the swap funtion
// //this will swap a and b using pointer reference
// cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y;
// return 0;    
// }

// //**********call  by referance *************

// #include<iostream>
// using namespace std;
// void swapreferencevar(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;

// }
// int main()
// {
// int  x=2,y=3;
// cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y<<endl;
// swapreferencevar (x,y); //this will swap a and b using referencevariable
// cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y;
// return 0;    
//     return 0;
// }

// //**********call  by return  *************

#include<iostream>
using namespace std;
int &swapreferencevar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
int  x=2,y=3;
cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y<<endl;
swapreferencevar (x,y); //this will swap a and b using referencevariable
swapreferencevar(x,y)=766;
cout<<"the value of x  "<<x<<endl<<"the value of y  "<<y;
return 0;    
    return 0;
}

