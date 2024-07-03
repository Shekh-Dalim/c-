#include<iostream>
using namespace std;

int main()
{
    int marks[]={1,2,3,4};

    //***********write array in one way****************

//     cout<<"the marks marks[0]\n"<<marks[0]<<endl;
//     cout<<"the marks marks[1]\n"<<marks[1]<<endl;
//     cout<<"the marks marks[2]\n"<<marks[2]<<endl;
//     cout<<"the marks marks[3]\n"<<marks[3]<<endl;

//     return 0;
// }

//                 **************write  array in another way**************

//     marks[0]=1;
//     marks[1]=2;
//     marks[2]=3;
//     marks[2]=8;
//     marks[3]=4; 
//     cout<<"the value"<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
// }

    //**********write array in the form of loop********

//    for (int i = 0;i < 4; i++)
//    {
//        cout<<"the value of  marks " <<i<<endl<< marks[i]<<endl;
//    }
   
//     return 0;
// }

//                   **************point and array******


    int* p=marks;//int* is an integer variable which name as p which point marks 
    cout<<"the vlaue of *p\n"<<*p<<endl;  //*p mean value at p
    cout<<"the vlaue of *(p+1)\n"<<*(p+1)<<endl;
    cout<<"the vlaue of *(p+2)\n"<<*(p+2)<<endl;
    cout<<"the vlaue of *(p+3)\n"<<*(p+3)<<endl;
    cout<<*(p++);
    cout<<*(++p);
    cout<<*(p++);
    return 0;
}

//              *********array using while loop*********

// #include<iostream>
// using namespace std;

// int main()
// {
//   int marks []={1,2,3,4};
//   int i=0;
//   while(i<4)
// {
//     cout<<"value marks at indexce "<< i<<endl <<marks[i] <<endl;
//     i++;
// }
  

//   return 0;
// }