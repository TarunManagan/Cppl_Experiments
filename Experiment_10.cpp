/*PRN: 22070123118
Experiment No: 10(a)*/
#include <iostream>
using namespace std;
int main(){
   int a;
   cout<<"Enter the value of a: ";
   cin>>a;
   int *aptr;
   aptr=&a;
   cout<<"The value of aptr is: "<<*aptr<<endl<<"The address of aptr is: "<<aptr;
    return 0;
}
/*OUPUT
Enter the value of a: 10
The value of aptr is: 10
The address of aptr is: 0x7fff7edb8364
*/
