// for loop
// while loop
// do while loop

/***************  for loop  *******************/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0;i < 4; i++)
    {
        cout << i << endl;
    }
}

//     return 0;
//}

//**************while loop****************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=0;
//     while(i<=4)
//     {
//        cout<<i<<endl;
//        i++;
//     }
//     return 0;
// }

//************** do  while loop****************

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } 
    while (i <= 4);
    return 0;
}