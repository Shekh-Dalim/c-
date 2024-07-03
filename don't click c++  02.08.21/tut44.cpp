//                   **************virtual base class*******

#include <iostream>
using namespace std;
class A  //'A' is a virtual base class
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
    
};
class D : public B, public C
{
};
int main()
{
    return 0;
}