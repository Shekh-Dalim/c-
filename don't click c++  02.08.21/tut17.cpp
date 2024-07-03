// ***use inline funtion--jab funtion ke ander na ke barabar kam ho
//*inline funtion is use when funtion is so small *******
// in recurtion do not use inline funtion

#include<iostream>
using namespace std;

// agar inline funtion hain to static variable nehi banana 
inline int product(int a,int b)// there have two argument int a,int b
{
static int c=0; //static variable **static mean this value only initialise one time   //this line only run one time 
c=c+1 ;           
return a*b+c;
} //in inline funtion the round process is not happend only product and get output

int main()
{
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b ;
    cout<<"the  product  "<<product(a,b)<<endl;
    cout<<"the  product  "<<product(a,b)<<endl;
    cout<<"the  product  "<<product(a,b)<<endl;
    cout<<"the  product  "<<product(a,b)<<endl;
    return 0;
}




//*********money and receved money after few year*******

// #include<iostream>
// using namespace std;
// float moneyreceived(int currentmoney,float factor=1.04)//*compalsary argument always in left
// {
//     return currentmoney*factor;
// }
// int main()
// {
//    int money= 1000; 
//    cout<<"if u have "<<money<<"rs in your bank account,you will receved "<<moneyreceived(money)<< "rs after 1 year"<<endl;  
//    cout<<"if u have "<<money<<"rs in your bank account,you will receved "<<moneyreceived(money,1.1)<< "rs after 1 year"; //first priority get of local factorial
    
//     return 0;
// }