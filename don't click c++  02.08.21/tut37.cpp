//       **base class and derive class**

//default visibility mode is private

/*                         Public Derivation         	Private Derivation      	Protected Derivation

Private members           	Not Inherited              	 Not Inherited              Not Inherited      // private member  are never inherited
Protected members           Protected                    Private                    Protected
Public members           	Public	                     private                    protected

 */

/* Derived Class syntax       //meaning of visibility-mode weather it is public or private
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;//bydefault salary sab ka same hai
    }
    Employee() {}
};


class Programmer : public Employee  // Default visibility mode is private
// class Programmer :  Employee
{
public:
    int languageCode;
    Programmer(int inpId)//call the default constructor of employee class which is base class
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    // cout << skillF.id<<endl;//id become private in derive class if visibility mode is private  that is why this line dont call directly
    skillF.getData();
    return 0;
}

