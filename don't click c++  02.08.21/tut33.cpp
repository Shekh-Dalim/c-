//v.v.v.v.v.v important alwayes revetion 



/*agar mai constuctor ko overload kia to hum di-nemakali object ko initialise kara sakte hai*/
/* dinamecally meaning-->()
 program pehele run hoga uske bad user input dega then  hame pata
 chalega ki konsa constructor run hogah )*/

/*   dinamic initialisation of object using consrtuctor   */

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:

    BankDeposit() {}                  
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int R );   // r can be a value like 14
    void show();
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
        // returnValue = returnValue +returnValue*interestRate;//also write like this
    }
}

 BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;  //float(4/100)
    returnValue = principal;
    for (int i = 0; i < y; i++) 
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;  //ye  nehi vi use kar te tav vi yee chalta
    int p, y,R; 
    float r;  

    //    bd3.show();  // this will give me a gebage value this line also written in last

    // cout << "Enter the value of p y and r" << endl;
    // cin >> p >> y >> r;
    // // BankDeposit bd1= BankDeposit(p, y, r);      
    // bd1= BankDeposit(p, y, r);      // bd1 ban jaye ga bankdeposite(p,y,r)
    // bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    // BankDeposit bd2= BankDeposit(p, y, R);      
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;

   
}

