/*?????????????????????????????????????????????????????*/

#include <iostream>
using namespace std;

class vector
{
public:
    int *arr; // ek integer pointer
    int size;
    vector(int m)
    {
        size = m;            // size ko set kar do 'm' saiii
        arr = new int[size]; // arr ko barabar kar do new int[size]
    }
    //?????? cant understand   "T dotProduct(vector &v)" this line
    int dotProduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i]; // multiply this ka arr[i] with v.arr[i]
        }
        return d;
    }
};

int main()
{
    vector v1(3); // vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3; // number in integer
    v1.arr[2] = 1;
    vector v2(3); // vector 2
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}



/*    examle of class templete with a program    */


// #include <iostream>
// using namespace std;

// template <class T>
// class vector
// {
//     public:
//         T *arr;                    //jaha jha mera custom data type karna hai uha uha mai T lik dunga
//         int size;
//         vector(int m)
//         {
//             size = m;
//             arr = new T[size];     //jaha jha mera custom data type karna hai uha uha mai T likh dunga
//         }
//   //?????? cant understand   "T dotProduct(vector &v)" this line
//     T dotProduct(vector &v){       //jaha jha mera custom data type karna hai uha uha mai T likh dunga
//         T d=0;                     //jaha jha mera custom data type karna hai uha uha mai T likh dunga
//         for (int i = 0; i < size; i++)
//         {
//             d+=this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main()
// {
//     vector<float> v1(3); //vector 1 with a float data type
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;    //number in float
//     v1.arr[2] = 0.1;
//     vector<float> v2(3); //vector 2 with a float data type
//     v2.arr[0]=0.1;
//     v2.arr[1]=1.90;
//     v2.arr[2]=4.1;
//     float a = v1.dotProduct(v2);
//     cout<<a<<endl;
//     return 0;
// }
