/*  PRN:22070123118
    Experiment no:2(e)
*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    if(a>b){
        cout<<"a is greater than b";
    }else{
        cout<<"b is greater than a ";
    }
    return 0;
}

/*  OUTPUT
Enter two numbers: 2 3
b is greater than a 

Enter two numbers: 7 5
a is greater than b
*/