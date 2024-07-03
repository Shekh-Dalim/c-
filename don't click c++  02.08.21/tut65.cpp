/*    class template with multiple parameter    */

#include <iostream>
using namespace std;
/*          syntax
 template <class T1, class T2,.........class TN>
*/
template <class T1, class T2>
class myClass
{
public:
    int data1;
    char data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        // cout << data1 << " " << data2;
        cout << this->data1 << endl <<this-> data2;
    }
};

;
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
}