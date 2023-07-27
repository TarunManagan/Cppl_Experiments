/*
PRN: 22070123118
Experiment no: 4(a)
*/

#include <iostream>
using namespace std;
int main(){
    int i= 67, j,set,reset;
    set = (67|8);
    reset= (67&191);
    cout<<"Value of set is: "<<set<<endl<<"Value of set is: "<<reset;
    return 0;
}
/* OUTPUT
Value of set is: 75
Value of set is: 3
*/

/*
PRN: 22070123118
Experiment no: 4(b)
*/
#include <iostream>
using namespace std;
int main(){
    int a=12,b,c;
    b=a<<1; 
    c=a>>1;
    cout<<"Left binary shift value is: "<<b<<endl<<"Right binary shift value is: "<<c;
    return 0;
}
/*OUTPUT
Left binary shift value is: 24
Right binary shift value is: 6
*/

/*
PRN: 22070123118
Experiment no: 4(c)
*/
#include<iostream>
using namespace std;
int main(){
    int i=50,set_bit,reset_bit,set,reset;
    cout<<"Enter the bit to be set: ";
    cin>>set_bit;
    cout<<"Enter the  it to be reset: ";
    cin>>reset_bit;
    set=i|(1<<set_bit);
    reset=i&(~1<<reset_bit);
    cout<<"Set bit - "<<set<<endl<<"Reset bit - "<<reset;
    return 0;
}
/* OUTPUT 
Enter the bit to be set: 6
Enter the  it to be reset: 1
Set bit - 114
Reset bit - 48
*/



