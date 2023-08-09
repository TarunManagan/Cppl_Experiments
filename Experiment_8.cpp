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
    string str1;
    int count =0;
    cout<<"Enter a string: ";
    getline(cin,str1);
    for(int i=0; str1[i]!='\0';i++){
        count++;
    }
    cout<<"The lenght of the string is: "<<count;
    
return 0;
}

/*OUTPUT
Enter a string: Hi My Name is Tarun
The lenght of the string is: 19
*/

/*PRN: 22070123118
Experiment-no: 8(c)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    
    cout<<"Concatenated string is: "<<str1 + str2;
    
return 0;
}
/*OUTPUT
Enter first string: Hello 
Enter second string: World!
Concatenated string is: Hello World!
*/
