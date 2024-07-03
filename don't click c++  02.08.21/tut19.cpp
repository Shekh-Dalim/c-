//       *********1st program funtion overloading**********



//funtion overloading means ekhi nam but kam alag alag hai 
//**POLYMORPHISAM MEAN ek hi chis jiska alag alag form ho 



// #include<iostream>
// using namespace std;

//  int sum(int a,int b)
//  {
    
//      return a+b;
//  }

// int sum(int a,int b,int c)
// {
//     return a+b+c;
// }

// int main()
// {
//     cout<<"the sum of 1,2 is\n"<<sum(1,2)<<endl;
//     cout<<"the sum of 1,2,3 is\n"<<sum(1,2,3);
//     return 0;
// }


//****2nd funtion overloading**********


#include<iostream>
using namespace std;

int volume (int a)
{
return a*a*a;
}

int volume (int r,int h )
{
return 3.24*r*r*h;
}

int volume (int l,int b,int h)
{
return l*b*h;
}
int main()
{
  cout<<"the volume of cube 3"<<volume(3)<<endl;  
  cout<<"the volume of cylender radius 3 and hight 2"<<volume(3,2)<<endl;  
  cout<<"the volume of cube leng 2 ,breth 3,hight 4 is"<<volume(2,3,4)<<endl;  
return 0;
}