/*PRN: 22070123118
Experiment no: 4(a)*/
#include <iostream>
using namespace std;

int main() {
   int a;
   cout<<"Enter the value a: ";
   cin>>a;
   if(a%2==0){
       if(a==0){
           cout<<"Zero";
       }else{
           cout<<"Even number";
           
       }
   }else{
           cout<<"Odd number";
       }
       return 0;
}

/*OUTPUT
Enter the value a: 86
Even number

Enter the value a: 99
Odd number
Enter the value a: 0
Zero
*/

/*PRN: 22070123118
Experiment no: 4(a)*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers you want to compare: ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is the greatest";
    }
    else if(b>c && b>a){
        cout<<b<<" b is the greatest"<<b;
    }
    else{
        cout<<c<<" is the greatest"<<c;
    }
    return 0;
}
/* OUTPUT
Enter the 3 numbers you want to compare: 8 7 6 
8 is the greatest
*/

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

/*PRN: 22070123118
Experiment no: 4(c)*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "Monday";
        break;
        case 2: cout << "Tuesday";
        break;
        case 3: cout << "Wednesday";
        break;
        case 4: cout << "Thursday";
        break;
        case 5: cout << "Friday";
        break;
        case 6: cout << "Saturday";
        break;
        case 7: cout << "Sunday";
        break;
        default:
        cout<<"Wrong input";
    }
    return 0;
}

/*OUTPUT
Enter the value n: 1
Monday
Enter the value n: 2
Tuesday
Enter the value n: 3
Wednesday
Enter the value n: 4
Thursday
Enter the value n: 5
Friday
Enter the value n: 6
Saturday
Enter the value n: 7
Sunday
Enter the value n: 8
Wrong input
*/
/*PRN: 22070123118
Experiment no: 4(d)*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n<=50){
        cout<<n<<"\t";
        n++;
    }
    return 0;
}

/*OUTPUT
Enter the value of n: 1
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50
*/

/*PRN: 22070123118
Experiment no: 4(d)*/
#include <iostream>
using namespace std;

int main() {
    int n=1;
    do{
        cout<<n<<"\t";
        n++;
    }while(n<=50);
   
       return 0;
}

/*OUTPUT
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50
*/

/*PRN: 22070123118
Experiment no: 4(e)*/
#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=10;i++){
        cout<<"Hello World!!"<<"\n";
    }
    return 0;
}
/*OUTPUT
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
*/

/*PRN: 22070123118
Experiment no: 4(a)*/
#include <iostream>
using namespace std;

int main() {
   for(int i=100; i<=50;i--){
       cout<<i<<endl;
   }
    return 0;
}

