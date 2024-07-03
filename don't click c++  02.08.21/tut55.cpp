/*   pointer to derive classes */



#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer; //jis class ka pointer hoga sirf usi class ka member funtion call hoga like display() of base class
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class 

    base_class_pointer->var_base = 34; 
    // base_class_pointer->var_derived= 134; // Will throw an error (because derive class having no pointer ,base class point to derive class)
    base_class_pointer->display();//object jo hai oo derive class ka hai but jo pointer hai oo to base clas ka hai

    // base_class_pointer->var_base = 3400; 
    // base_class_pointer->display();A

    // DerivedClass * derived_class_pointer; //derive class mai  base class ko public member mai derive kia isilie base class and derive class dono run hoga
    // derived_class_pointer = &obj_derived;
    // derived_class_pointer->var_base = 9448;
    // derived_class_pointer->var_derived = 98;
    // derived_class_pointer->display();
  
    return 0;
}
