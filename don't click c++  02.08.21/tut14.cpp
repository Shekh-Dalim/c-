
//         *******struct employee dalim*********************

// structure is an user define datatype

//            limitation of sturucture

/* 1--we can access from any where
   2--do not write any funtion in structure*/

// #include<iostream>
// using namespace std;


//  struct employ
// {
//  int  eid;
//  char favorate;
//  float salary;
//     };
// int main()
// {
//     struct  employ dalim;        //here use ep  in the place of struct employee
//     dalim.eid=1;
//     dalim.favorate='c';
//     dalim.salary=1200000000;
//     cout<<"the value of\n"<<dalim.eid<<endl;
//     cout<<"the value of\n"<<dalim.favorate<<endl;
//     cout<<"the value of\n"<<dalim.salary<<endl;

//     return 0;
// }

//             *************using typedef and ep********************

/*
#include<iostream>
using namespace std;

 typedef struct employ
{
 int  eid;
 char favorate;
 float salary;

}ep;
int main()
{
    //struct employee dalim
    ep dalim;        //here use ep  in the place of struct employee
    dalim.eid=1;
    dalim.favorate='c';
    dalim.salary=1200000000;
    cout<<"the value of\n"<<dalim.eid<<endl;
    cout<<"the value of\n"<<dalim.favorate<<endl;
    cout<<"the value of\n"<<dalim.salary<<endl;

    return 0;
}
*/

//        ***********{union}(use for better memory management)******************

// #include<iostream>
// using namespace std;
//  typedef union money   //use typedef
// {

//     int rice;
//     char car;
//     float pound;
// }ep;               //ep

//  int main()
// {
//     // ep  dalim;
//     union money m1;      // use ep replace of typrdef union
//    m1.rice=34;
//    m1.car='d';   //at a time only one can be declare
//    cout<<m1.car;
//    //cout<<m1.rice;

//     return 0;
// }

//       *************{enum} ***********

#include <iostream>
using namespace std;

int main()
{
    enum meal { breakfast, lunch, dinner};    // meal become data type
    meal m1 = lunch;
    meal m2 = breakfast;
    meal m3 = dinner;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    // cout << (m1 == 1) << endl;  //true 
    // cout << (m1 == 2) << endl;  //false

   return 0;   //here can be use or not
}

