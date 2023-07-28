/*PRN: 22070123118
Experiment no: 4(b)*/
#include <iostream>
using namespace std;

int main() {
    float a,b;
    int n;
    cout<<"Enter two numbers of a,b: ";
    cin>>a>>b;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "The sum of a and b is: " << a+b <<endl;
        break;
        case 2: cout << "The difference of a and b is: " << a-b<<endl;
        break;
        case 3: cout << "The product of a and b is: " << a*b<<endl;
        break;
        case 4: cout << "The division of a and b is: " << a/b<<endl;
        break;
    }
    return 0;
}
/*OUTPUT
Enter two numbers of a,b: 2 4
Enter the value n: 1
The sum of a and b is: 6

Enter two numbers of a,b: 2 4
Enter the value n: 2
The difference of a and b is: -2

Enter two numbers of a,b: 34 15
Enter the value n: 3
The product of a and b is: 510

Enter two numbers of a,b: 56 2
Enter the value n: 4
The division of a and b is: 28
*/
