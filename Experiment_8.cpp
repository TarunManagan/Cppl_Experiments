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

/*PRN: 22070123118
Experiment-no: 8(d)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2,str3,str4;
    int count =0;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    str3= str1;
    str4=str3 + str2;
    cout<<"Concatenated string is: "<<str3 + str2<<endl;
    for(int i=0; str4[i]!='\0'; i++){
        count++;
    }
    cout<<"Lenght of the concatenated string is: "<<count;
return 0;
}
/*OUTPUT
Enter first string: Hello
Enter second string: World!
Concatenated string is: Hello World!
Lenght of the concatenated string is: 12
*/

/*PRN: 22070123118
Experiment-no: 8(d)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    int n,count=0;
    cout<<"Enter a string: ";
    getline(cin,str1);
    for(int i=0; str1[i]!='\0'; i++){
        n++;
    }
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The reverse string is: ";
    for(int i=n; i>=0; i--){
        str2[i] = str1[i];
        cout<<str2[i];
    }
    for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++){
        if(str1[i]==str2[i]){
            count++; 
        }
    }
    if(count==n){
        cout<<endl<<"It is a Palindrome";
    }else{
        cout<<endl<<"It is not a Palindrome";
    }
    
return 0;
}

/*OUTPUT
Enter a string: malayalam
The original string is: malayalam
The reverse string is: 
*/
