// /* member funtion template and overloading template funtion*/
// #include<iostream>
// using namespace std;
// template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a)
//     {
//         data = a;
//     }
//     void display()
//     {
//         cout << data;
//     }
// };

// template <class T>
// void Harry<T> :: display(){
//     cout<<data;
// }
// int main()
// {
//     Harry<int> h(5.7);
//     cout << h.data << endl;
//     h.display();
//     return 0;
// }



/*   overloading template funtion */


#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    func(4);  //Exact match takes the highest priority
    func <float> (3.14);

    return 0;
}
