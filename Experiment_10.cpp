/*PRN: 22070123118
Experiment No: 10(a)*/
#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr;
   aptr=&a;
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The address of a is: "<<aptr<<endl;
   *aptr=15;
   cout<<"The new value of a is: "<<*aptr;
    return 0;
}
/*OUPUT
The original value of a is: 10
The address of a is: 0x7fff6d64eef4
The new value of a is: 15
*/

/*PRN: 22070123118
Experiment No: 10()*/
#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr;
   aptr= &a;
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The original address of a is: "<<aptr<<endl;
   *aptr=*aptr+1;
   aptr++;
   &aptr= *aptr;
   cout<<"The incremented value of a is: "<<*aptr<<endl;
   cout<<"The new address of a is: "<<aptr<<endl;
    return 0;
}
/*OUPUT

/*PRN: 22070123118
Experiment No: 10(c)*/
#include <iostream>
using namespace std;

void increment(int *a){
    (*a)++;
 }
int main(){
   int a=10;
   cout<<"The original value of a: "<<a<<endl;
   increment(&a);
   cout<<"The incremented value of a is: "<<a<<endl;
   return 0;
}
/*OUPUT
The original value of a: 10
The incremented value of a is: 11
*/
The original value of a is: 10
The original address of a is: 0x7ffee6ade564
The incremented value of a is: 11
The new address of a is: 0x7ffee6ade564
*/
