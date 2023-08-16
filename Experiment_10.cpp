/*PRN: 22070123118
Experiment No: 10(a)*/
#include <iostream>
using namespace std;
int main(){
   int a,*aptr;
   cout<<"Enter the value of a: ";
   cin>>a;
   aptr=&a;
   cout<<"The original value of a is: "<<a<<endl;
   cout<<"The address of a is: "<<aptr<<endl;
   cout<<"Enter the new value of a: ";
   cin>>*aptr;
   cout<<"The new value of a is: "<<a;
    return 0;
}
/*OUPUT
Enter the value of a: 10
The original value of a is: 10
The address of a is: 0x7ffe6153f454
Enter the new value of a: 15
The new value of a is: 15
*/
