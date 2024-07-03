/* array of object using pointer  
*/
#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;//id ki value ko a ke barabar kar do
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;                       // this line mean that size contain 3
    ShopItem *ptr = new ShopItem[size]; // mujhe 3 shop ki opject de do
    /*3 intiger store karne jitni memory ko allocate kar do  and peyela bala block
    ka adress ko pointer mei pass kar do */
    ShopItem *ptrTemp = ptr; //ptrTemp point the ptr 
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;  // id and salary enter karo and set kar do 
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)  
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
        
    }

    return 0;
}
