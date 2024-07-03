/*             open file using consructor      */


/*read write funtion with  Closing Files*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file withhout stream
    ofstream hout("sample60b.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // // writing a string to the file
    hout << " is my name "+ name ;

    // // disconnecting our file
    hout.close();
    // // connecting our file with hin stream
    ifstream hin("sample60b.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    hin >> content;
    cout << "The content of the file is: " << content;

    // disconnecting our file
    hin.close();
    return 0;
}
