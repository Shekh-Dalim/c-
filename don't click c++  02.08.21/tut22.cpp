
/*       how to write binary number in c++     */
// this program use nasting funtion
/*A string is a variable that stores a sequence of letters or other characters*/

// OOPs - classes and object

//     C++ -->initially called ->> C with classes by stroustroup
//     class --> extention of structure (in c)
//     structure and limitations
//           --> members are public
//           --> no methods
//     classes --> structures + more
//     classes --> can have methods and properties
//     classes --> can make few members as private and few as public
//     structures in c++ are typedefed
//     you can declare objects along with the class declaration like this:
//       /*
//       class Employee{
//         Class defination
//       } harry,rohan, lovish;
//       */
//      harry.salary = 8 makes no sense if salary is private

//      Nesting of member funtion

#include <iostream>
#include <String>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
    cout << "this is an binarry number";
}
void binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Display your bbinary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
