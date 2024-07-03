
/*These are some useful classes for working with files in C++

fstreambase                             |
ifstream --> derived from fstreambase   |--->three class come from headerfile #include<fstream>
ofstream --> derived from fstreambase   |

*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class
*/



 
/*             open file using consructor      */

#include<iostream>
#include<fstream>
using namespace std; 

int main(){
    ofstream out("sample60.txt"); 
    string st = "coder";
    out<<st; 

    return 0;
}





#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("sample60b.txt");
    string st2;
    getline(in, st2);
    cout<<st2; 

    return 0;
}
