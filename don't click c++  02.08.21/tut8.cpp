/*how to use constant variable  and use of "setw(n)"" */

// #include <iostream>
// using namespace std;
// int main()

// {
//     int a = 34;
//     cout << "the vaue of a was\n"<< a << endl;
//     a = 45;
//     cout << "the value of a is\n"<< a << endl;
//     return 0;
// }

/* **************const variable ******************/

//  {
//      const int a = 4;// cont is use as  like this pi=3.14
//      cout<<"the value of a was\n"<<a<<endl;
//      a=3;  //due to this line showing error because a is cont , valu of a can not be change
//      cout<<"the value of a is\n"<<a<<endl;
//  }

/*******************NEW HEADERFILE ************/
 #include<iostream>
 #include<iomanip>    //new headerfile
 using namespace std;
 int main()

 {
  int a=3,b=78,c=1233;
  cout<<"the value of a is"<<a<<endl;
  cout<<"the value of b is"<<b<<endl;
  cout<<"the value of c is"<<c<<endl;
  cout<<"the value of a is"<<setw(4)<<a<<endl; //setw use due to new headerfile
  cout<<"the value of b is"<<setw(4)<<b<<endl;
  cout<<"the value of c is"<<setw(4)<<c<<endl;

 }

//  #include<iostream>
//  using namespace  std;
//  int main()

//  {
//   int a =3 ,b = 4;
//   //int c = (a*5)+b;
//   int c=((((a*5)+b)-45)+87);  //(side)C++ Operator Precedence
//   cout<<c;
//   return 0;
//  }
