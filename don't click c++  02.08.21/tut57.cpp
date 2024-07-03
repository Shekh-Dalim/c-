  /*    virtual funtion  example    */
/*
                  Rules for virtual functions
   1:They cannot be static
   2:They are accessed by object pointers
   3:Virtual functions can be a friend of another class
   4:A virtual function in the base class might not be used.
   5:If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/
/*strcpy() this is a funtion jo ki string copy karne ke lie use hota hai*/

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

        //void diplay mai kahi sai vi acess kar sakta hmm
        //   void display()   //if dont write this line then show error
        //  {
        //      cout<<"i am an empty funtion "<<endl;
        //    }
        /*yee display sirf pointer ke time pai hii show karna parega
        and mai derive claas ka display funtion ko use karna chahata hmm means base claass ka display funtion ko
        derive class overwrite karega*/

          virtual void display()   //if dont write this line then show error
         {
             cout<<"i am an empty funtion "<<endl;
         }

};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
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
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    /*  for Code With Harry Video  */

    // /*apna detail enter karo->iha pay cout and cin ki madad sai vi value de saktai hai*/
    // title = "Django tutorial";
    // vlen = 4.56;
    // rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    ;

    /*  for Code With Harry Text  */ 
    // title = "Django tutorial Text";//by default this("Django tutorial Text")is string
    // words = 433;
    // rating = 4.19;
    CWHText djText(title, rating,words);
    // djText.display();

    CWH* tuts[2];  //CWH pointer array banaya;
    tuts[0] = &djVideo;  //tuts[0] ko point karado djVideo se and mai point karaunga to sddress of operator laga na parega
    tuts[1] = &djText;   //tut[1]  ko point karado djText sai

    /*without array we can also create pointer obect*/
    // CWH* tuts;  //CWH pointer array banaya;
    // tuts = &djVideo;  //tuts[0] ko point karado djVideo se and mai point karaunga to sddress of operator laga na parega
    // tuts = &djText;

    tuts[0]->display();  //only derive bala display() hi call hoga
    tuts[1]->display();  //only derive bala display() hi call hoga

    return 0;
}

