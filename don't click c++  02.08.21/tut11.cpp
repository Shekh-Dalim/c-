
// soooooooooooooooooooooooooo confuse ??????????????????????????????????

#include <iostream>
using namespace std;
int main()

//     111            **********for loop for continue***********

{
    for (size_t i = 0; i < 4; i++)
    {
        // cout <<i<<endl;   //if write here then all print (0,1,2,3)
        {
            if (i == 2)
                continue;
        }
        cout << i << endl; // if write here then all print (0,1,3)
    }
    return 0;
}
//     2222            *********for loop for break**********
// {
// for (size_t i = 0; i < 4; i++)
// {
//     cout <<i<<endl;  *** output 0,1,2
//     {
//         if(i==2)
//         break;
//
//     }
//     cout <<i<<endl;   //*****output 0,1
// }
// return 0;
// }

//***********example of infinite for loop*************

/*{
for (size_t i = 1; 34 < 40; i++)
{
    cout<<i<<endl;
}
return 0;
}*/

//     333           *******************while loop for break *********************

// {
//     int i = 0;
//     do
//     {
//         cout << i << endl;//if write here out put (0,1)
//         i++;
//         if(i==2)
//         {
//             break;
//         }
//         //  cout << i << endl;//if write here out put (0,1)
//         // i++;
//     }
//     while (i < 4) ;
//        return 0;
// }

//   444     *******************while loop for continue*********************

// {
//     int i=0;
//     while(i<4)
//     {
//         // cout<<i<<endl; // print (0,1,2,3) if this line is here
//         // i++;
//         {
//             if (i==2)
//             continue;
//         }
//         cout<<i<<endl; //  if this line write here only (0,1 )print
//         i++;
//      }

//     return 0;
// }

//   555   *******************do while loop in continue **************

// {
//     int i = 0;
//     do
//     {
//         cout << i << endl;//if write here out put (0,1,2,3)
//         i++;
//         if(i==2)
//         {
//             continue;
//         }
//         //  cout << i << endl;//if write here out put (0,1)
//         // i++;
//     }
//     while (i < 4) ;
//        return 0;
// }

//   666   *******************do while loop in break **************

// {
//     int i = 0;
//     do
//     {
//         // cout << i << endl;//if write here out put (0,1,)
//         // i++;

//         if(i==2)

//             break;
//         {

//          cout << i << endl;//if write here out put (0,1)
//         i++;
//         }
//     }
//     while (i < 4) ;
//        return 0;
// }
