// /*             concept of class templates


// *templates->class->object  //class ke lie template too tamplate hai and object kai lie class ek tamplate hai
// *tamplate also known as parametarise class

// Q:why we use tamplate ?
// 1:I follow the DRY principle that is why i use tamplate
// 2:create generic program(meaning ek hii bar class defien ki orr oo jenerik ho gayii*/


//                     //   syntax of template

// #include <iostream>
// using namespace std;
 
// template <class T>   // here "T" is a castom data type
// class vector {
//     T *arr;  // 'T' jos type ka hoga arr us type kaban jaye ga i mean "T" like (int,float,char,double)datatype 
//     int size;
//     public:
//         vector(T* arr)[
//             code
//         ]
//         and many other methods
    
// };
 
// int main() {
//     vector<int> myVec1();
//     vector<float> myVec2();
//     return 0;
// }
