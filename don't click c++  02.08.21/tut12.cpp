//                    **************POINTER********************


//   pointer is a datatype which hold the address of other data type
     #include<iostream>
     using namespace std;
     int main()
     {
         int a=3;     //&(address of )operator, (*) de-reference operator 
         int* b=&a;    /* create a pointer variable which name as "b" 
         /*int* b;
         b=&a;*/
         /*which point "a" and also hold the adress of "a"*/
         //adress of operator********
         cout<<"the address of a"<<&a<<endl;
         cout<<"the address of a"<<b<<endl;
         //value of operator
         cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<*(b);
         
        //  cout<<"the value of b is "<<*b; //this line also correct
         return 0;
     }




     

//                   ************pointer to pointer************



// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=3;     //&(address of )operator, * dereference operator 
//     int* b=&a;    //b hold the address of a;
//     int** c =&b;
//  cout<<"the address of b is"<<&b<<endl;   
//  cout<<"the address of b is"<<c<<endl;   
//  cout<<"the value at address  value at(valu at(c))of b is"<<**c<<endl;   
//     return 0;
// }

