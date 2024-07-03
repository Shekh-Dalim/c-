// // /*Pointers to Objects and Arrow Operator  */
// // /*pointer ki help sai mai mai public member ko kese exes karte hai*/

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int real, imaginary;

// public:
//     void getData()
//     {
//         cout << "The real part is " << real << endl;
//         cout << "The imaginary part is " << imaginary << endl;
//     }

//     void setData(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };
// int main()
// {

//     /**   1st way  **/
//     //  Complex c;
//     // c.setData(1,2);
//     // c.getData();

//         /**  2nd way  **/
//     Complex c;
//     Complex *ptr = &c; // pointer ki help sai object ke public member ko kaise excess kare
//     (*ptr).setData(1, 2);
//     (*ptr).getData();
//     // *(ptr).setData(1,2); *(ptr).getData();  //this is wrong

//          /**    3rd way  **/

//         // Complex *ptr = new Complex;  //new lagake ek naya objec miljata hai
//         // (*ptr).setData(1, 2);// is exactly same as
//         // (*ptr).getData(); //is as good as

//     return 0;
// }

/*Another example program for the pointer to Objects and the use of the “Arrow” Operator is shown below.*/
/*array ko use kar ke  ek  pointer ko dereference kar ke uske funtion ko direct call kar sakte ho*/

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
//  (-->)row operator
    ptr->setData(1, 2); //arrow ka matlab hai ki is pointer ko de reference karo and and sat data ko run karo
    ptr->getData();

    // // Array of Objects
    // Complex *ptr1 = new Complex[4]; //array of pointer which point the object
    // ptr1->setData(1, 2);
    // ptr1->getData();
    // return 0;
}

