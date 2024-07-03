/* array ko  hum resize (agar hum array ka 10 lenth ka lengai to 11 number nehi bana saktai )
    nehi kar sakte but voctor  ki madat sai kar saktai hai*/
/*          Syntax of declaring a vector

#include<iostream>
#include<vector>

int main(){

    vector<int> vec1;
    return 0;
}
   */







// #include <iostream>
// #include <vector> /*agar mai vector ko use karna chahatu hmm to this headefile use karna parega */
// using namespace std;
// void display(vector<int> &v) //vector<int> isko mai ek data type ke tarha use karunga and ek reference lunga integer vactor ka
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         // cout << v[i] << " ";
//         cout << v.at(i) << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> vec1;  // zero length vector
//     int element, size;
//     cout << "Enter the size of your vector" << endl; //mai iha par user sai hii pu6 lia ki  vector ka size kaya hai
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter an element to add to this vector: ";
//         cin >> element;
//         vec1.push_back(element); // vec1.push_back likne ke bad jo element hum lena chaheta oo likhengai
//     }
//     // vec1.pop_back(); //pop_back last bala element ko hata deta hai
//     //  display(vec1);
    
//     /* datatype :: iterator iter (iterator name)= vec1.begin();  sintex of how to write etetator*/
//     vector<int> :: iterator iter = vec1.begin(); 
//     vec1.insert(iter,566); // here iter is an pointer which poin to an element of vector class
//     display(vec1);

//     // vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter+1,566); //566 ko 2nd no mai point karna cahata hmmm
//     // display(vec1);

//     // vector<int> :: iterator iter = vec1.begin();
//     // vec1.insert(iter+1,5,566); //566 ko 5 bar incert karna chahata hmm
//     // display(vec1);

//     return 0;
// }








/*                          */


#include <iostream>
#include <vector> /*agar mai vector ko use karna chahatu hmm to this headefile use karna parega */
using namespace std;
template <class T>
void display(vector<T> &v) //vector<int> isko mai ek data type ke tarha use karunga and ek reference lunga integer vactor ka
{
    cout<<"displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int> vec1;        // zero length vector
    //  display(vec1);

    // vector<char> vec2(4);    // 4 element character vector
    //  vec2.push_back('5');
    //  display(vec2);

    // vector<char> vec3(vec2); // 4 element character vector from vec2
    //  display(vec3);

    vector<int> vec4(6,13);  //6 element of vector 3s   (6 time '13' ayega)
     display(vec4);
    
    // cout<<vec4.size();        //vector ka size 6 hai
    return 0;
}

