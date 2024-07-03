/*   Virtual Functions   */

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        /* mera type ka display() agar derive class mai hai to usko display karo*/
        virtual void display(){  // use of virtual class 
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;  //jis class ka pointer hogauska opposite class ka member funtion call hoga like display() of derivative class
    BaseClass obj_base;
    DerivedClass obj_derived;
 
    base_class_pointer = &obj_derived;  //derive class ki object se point kara die
    // base_class_pointer->var_derived;//derive ka display call hoga but integer variable ko direct call nehi ka saktai 
    base_class_pointer->display();
    return 0;
}


//meaning of polymorphism->object jo alag alag classes ko  bilong kar rahe ho oo ek tarha ki massege ko respond kartai hai