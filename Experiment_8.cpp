/*PRN: 22070123118
Experiment-no: 8(a)*/

#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"My name is: "<<name;
    
return 0;
}
/*OUTPUT
Enter your name: Tarun
My name is: Tarun
*/

/*PRN: 22070123118
Experiment-no: 8(b)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string name;
    int count =0;
    cout<<"Enter your name: ";
    getline(cin,name);
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    cout<<"The lenght of the string is: "<<count;
    
return 0;
}

/*OUTPUT
Enter your name: Hi My Name is Tarun
The lenght of the string is: 19
*/
