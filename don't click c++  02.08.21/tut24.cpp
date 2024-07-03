

//     *************static variable and static funtion************

#include <iostream>
using namespace std;

class Employee
{
    int id; // name or count rak rahe hai employe ka
    // int count ;
    /*   if write int count then count ka apna ek count hoga,
           hum ek object se dusre object tak count pass nehi kara sakta*/
    static int count; // define of static int count
    //    ekbar memory lega uske bad updare karte rahega
    //     iska jo count hai usko sare object sare karte hai

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void) /*in stetic funtion only static variable can be use and stetic funtion class ke nam sehi run ho
     jata hai usko object ki jrurat nehi parti */
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count = 0; /*isko bahar decleare karna para qu ki iska memory object ke 7th nehi class ke 7th ayegi Default value is 0**
                      {meaning of this line }employee class ka count nam ka ek variable hai jisko main stetic banana chata hmm*/
int main()
{
    Employee harry, rohan, lovish; // 3 object ekhii count count variable ko share kar rahe hai
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}


