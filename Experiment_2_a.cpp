/*  PRN:22070123118
    Experiment no:2(a)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   
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
return 0;
}

/*  OUTPUT
Enter any integer value: 3
Enter any floating point value: 5.67
Enter any double floating point value: 7.8904
Enter any Character value: t
Enter any boolean value: 1345
Value of Integer_var is: 3
Value of Float_var is: 5.67
Value of Double_var is: 7.8904
Value of Char_var is: t
Value of flag is: 1
*/