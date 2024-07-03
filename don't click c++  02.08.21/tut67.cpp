/*     funtion template        */

// #include <iostream>
// using namespace std;

// // float funcAverage(int a, int b)
// // {
// //     float avg = (a + b) / 2.0; // (integer/integet)=integer  and (integet/float)=float 
// //     return avg;
// // }

// // float funcAverage2(int a, float b)
// // {
// //     float avg = (a + b) / 2.0; // (integer/integet)=integer  and (integet/float)=float 
// //     return avg;
// // }

/*                          using template                  */

// template<class T1,class T2>
//  float funcAverage2(T1 a, T2 b)
// {
//     float avg = (a + b) / 2.0; // (integer/integet)=integer  and (integet/float)=float 
//     return avg;
// }


// int main()
// {
//     float F;
//     F = funcAverage2(5, 2);
//     // cout can also write like this 
//     printf("The average of these numbers is %f", F);  //ek floar hai to mujhe eha par "f" dena parega 
//     //  printf("The average of these numbers is %.3f", F);  // ".3f " karenge to decimale kai bad 3 digit ayega
//     // cout<<"the avg value is "<<F; 

    
// }

/*
The average of these numbers is 3.500000
PS D:\MyData\Business\code playground\C++ course>

*/
   


 /*      swap funtion using tamplate        */ 


 #include<iostream>
 using namespace std;

 template <class T>
void swapp(T &a, T  &b)
{
    T temp = a;
    a = b;
    b = temp;
}
  
  int main()
  {
      int a=2;
      int b=3;
      cout<<"the value of a and b "<<a<<endl<<b<<endl;
      swapp(a,b); // "swap" already present in stander name space that is why "swapp" is use
      cout<<"the value of a and b after swap "<<a<<endl<<b<<endl;
      return 0;
  }