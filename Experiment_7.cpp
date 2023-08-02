/*PRN: 22070123118
Experiment-no: 7(a)*/
#include <iostream>
using namespace std;

int main() {
    int a1[5]={19,10,8,45,32};
    for(int i=0; i<5; i++){
        cout<<a1[i]<<endl;
    }
return 0;
}

/*OUTPUT
19	10	8	45	32	
*/

/*PRN: 22070123118
Experiment-no: 7(b)*/

#include <iostream>
using namespace std;
int main() {
    
    int a1[5];
    for(int i=0; i<5; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<5; i++){
        cout<<a1[i]<<"\t";
    }
return 0;
}
/*OUTPUT
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
1	2	3	4	5	
*/

/*PRN: 22070123118
Experiment-no: 7(c)*/

#include <iostream>
using namespace std;
int main() {
    int a1[10]={1,100,73,26,78,92,34,12,1,45},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 100
100 is present in the array at position 1

Enter the value to find in the array: 67
The number is not present in the array
*/

/*PRN: 22070123118
Experiment-no: 7(d)*/
#include <iostream>
using namespace std;

int main() {
    int a1[10]={1,100,73,26,45,92,34,12,1,45},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i<<endl;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 45
45 is present in the array at position 4
45 is present in the array at position 9

Enter the value to find in the array: 67
The number is not present in the array
*/
