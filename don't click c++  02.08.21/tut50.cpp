/*    discuss pointers and new, delete keywords in C++   */

// #include <iostream>
// using namespace std;

// int main()
// {
//   int *p = new int(40); // new keyword in pointer
//   // float *p = new float(40.78);
//   // cout << "The value at address p is " << *(p) << endl; // *(p) and (*p)  both are corrreect
//   cout << "The value at address p is " << (*p) << endl;

//   return 0;
// }

/*      array of pointer    */
/* new operator in pointer with array  and also use delete operator*/

#include<iostream>
using namespace std;  

int main(){

  //new operator
    int *arr = new int[3];//float ,double ku6 vi ho sakta hai
//    *(arr)=10;// bracket must be use
//    *(arr+1)=20;
//    *(arr+2)=30;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    //delete operator
    // delete arr;
    delete[] arr; // puri ki puri conguous bloak ko delete kar na hai to
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    
    // cout << "The value of arr[0] is " << *(arr) << endl;
    // cout << "The value of arr[1] is " << *(arr+1) << endl;
    // cout << "The value of arr[2] is " << *(arr+2) << endl;
    // cout << "The value of arr[3] is " << arr[3] << endl;

    return 0;
}

