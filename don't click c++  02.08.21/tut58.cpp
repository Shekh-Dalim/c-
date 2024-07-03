/*Abstract Base Class & Pure Virtual Functions -> */

/*Pure Virtual Functions :-
Pure virtual function is a function that doesn’t perform any operation and the function
 is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.
 */

/*
Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which 
are inheriting the base class must need to override the virtual function of the abstract class otherwise 
compiler will throw an error.*/

/*           important point 

     1:pure virtual funtion must be present in Abstract base class
     2:abstract class mai kamse kam ek esa virtual function dalna parega jisko  over write karna apko pare hii pare
     3:abstract base class ko bana ne ke lie pure base class banana joruri hai
     4:pure virtual funtion must be over write
     5:Abstract Base Class object create karne ke lie use nehi karte only we can inherrite this 
     Abstract Base class
*/
#include<iostream>
using namespace std;
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        //iss display()funtion ka naya version bana na hi parega
        virtual void display()=0;// do-nothing funtion or pure virtual funtion

/* yee kisi vi tarha sei run nehi hona chahie means agar derive clas ka display call na vi kare int int main() mai firvi isko call nehi hona chahie*/
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        /*yee funtion ka neya version hai if mai isko  na banauu to program mai error ayega*/
        void display()
        {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

