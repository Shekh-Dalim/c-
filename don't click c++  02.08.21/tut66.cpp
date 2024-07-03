/*        Class Templates with Default Parameters           */


#include<iostream>
using namespace std;

// dafault data type
template <class T1=int, class T2=float, class T3=char> // T1,T2,T3 are not exetly a data type but we assume that it is a data type
class Harry{
    public:
        T1 a;
        T2 b;
        T3 c;
        Harry(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main()
{
    Harry<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    Harry<float, char, char> g(1.6, 'o', 'c'); // agar iha koi data type nehi hoga then upar ka data tyoe use kare ga
    // Harry< char, char> g(1.6, 'o', 'c');  //dont run if one data type is missing 
    g.display();
    return 0;
}
