#include <iostream>
using namespace std;
int main()

//*********selection control structure -if else*************
// {
//     int age;
//     cout << "tell me your age";
//     cin >> age;
//     if (age < 18)
//     {
//         cout << " you are not adult" << endl;
//     }
//     else if (age == 18)
//     {
//         cout << " you are just adult" << endl;
//     }
//     else
//     {
//         cout << "you are adult";
//     }
//     return 0;
// }

//  *********selection control structure- switch case*************
 {
     int age;
     cout<<"tell me your age"<<endl;
     cin>>age;
 switch (age)
 {

 case 18:
    cout<<" u r 18"<<endl;
     break;

 case 22:
    cout<<" u r 22"<<endl;
     break;

 default:
 cout<<"no special cases"<<endl;
     break;
 }
 cout<<"done with switch case";

     return 0;
 }