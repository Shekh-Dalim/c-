 /*                                 Constructors in Derived Class in C++


  *We can use constructors in derived classes in C++
  *If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
  *But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
  *If both base and derived classes have constructors, base class constructor is executed first
  
  */

/*        we will discuss constructors in derived class in C++   */


/*      *****multiple inheritance***** 

         A                    B
         |                    |
         |                    |
         | ________ __________|     
                   |
                   C

first exequit constuctor of 'A' and then exequit constructor of 'B'

         B                    A
         |                    |
         |                    |
         |  _______ __________     
                   |
                   C

first exequit constuctor of 'B' and then exequit constructor of 'A'


            ***multilevel inheritance ****

       A
       |
       |
       B
       |
       |
       C

   first exiquit constructor of "A" then exiquit constuctor of "B" the exiquit constuctor of "C"  


*/
/*


Special Syntax

C++ supports a special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
The body is called after the constructors is finished executing
Syntax Example:

Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)




Special Case of virtual base class

 * The constructors for virtual base classes are invoked before an nonvirtual base class.
 * If there are multiple virtual base class, they are invoked in the order declared.
 * Any non-virtual base class are then constructed before the derived class constructor is executed.

 */