/*  PRN:22070123118
    Experiment no:2(c)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   const float pi = 3.14;
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl;
   cout<<"Value of Float_var is: "<< Float_var<<endl;
   cout<<"Value of Double_var is: "<< Double_var<<endl;
   cout<<"Value of Char_var is: "<< Char_var<<endl;
   cout<<"Value of flag is: "<< flag<<endl;
   cout<<"Valu of pi is: "<<pi;
return 0;
}

/*  OUTPUT
Enter any integer value: 7
Enter any floating point value: 8.90
Enter any double floating point value: 76.45632773
Enter any Character value: a
Enter any boolean value: false
Value of Integer_var is: 7
Value of Float_var is: 8.9
Value of Double_var is: 76.4563
Value of Char_var is: a
Value of flag is: 0
Value of pi is: 3.14
*/