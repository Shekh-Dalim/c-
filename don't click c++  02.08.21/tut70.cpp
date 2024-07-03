/*          DISCUSSION ABOUT CONTAINERS           */

/*
three type of container:
1:Sequency container
2:Associative container
3:Derive container
*/

/*                              1:Sequency container

discussion about Sequency container :container which store data in the way of linear fashion like
A->B->C->.............N->..........        
ex:vector,list,dequeue(mean double unit queue)  
*: vector ->    RA(random access)                 ->FIRST
 //             Middie insertion and delition was ->SLOW
 //             Delition Insertion at the end     ->FIRST

*: list->       RA                                ->SLOW
  //            Middile insertion                 ->FIRST  
  //            Delition Insertion at the end     ->FIRST     




//                           2:Associative container
//                 agar mai cahata hmm ki jo jo element "R" se suru hota hai
//                 oo sab ku6 ek bar mai aaa jaya then use Associative container    

discussion about Associative container:use to get first serch
* direct acess
*tree is a data structure
ex:set/multiset,map/multimap
* all operation are fast execpt RA ,RA is slow


//                           3:derive container

discussion about derive container:derive from Sequency container and Associative container
* Real world modeling 
ex: * stack ->LIFO(last in first out) | 1 | mean last mai entry lia '1' but first out hoga one hiii
//                                    | 2 |
//                                    |_3_|

    * queue ->FIFO(first in first out)

    * priority queue
   
    * all first slow depend on data structure

*/