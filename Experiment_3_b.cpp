/*  PRN:22070123118
    Experiment no:3(b)
*/
#include<iostream>
using namespace std;

int main(){
   float avg, phy, chem, maths, bio, english;
   cout<<"Enter the marks of Physics: ";
   cin >> phy;
   cout<<"Enter the marks of Chemistry: ";
   cin >> chem;
   cout<<"Enter the marks of Maths: ";
   cin >> maths;
   cout<<"Enter the marks of Biology: ";
   cin >> bio;
   cout<<"Enter the marks of English: ";
   cin >> english;

   avg = (phy+chem+maths+english+bio)/5;

    if(avg >= 90 && avg<=100){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is O";
    }
    else if(avg>=85 && avg <= 89){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is A+";
        }
    else if(avg>=75 && avg<=84){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is A";
    }
    else if(avg>=65 && avg<=74){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is B+";
    }
    else if(avg>=40 && avg<= 64 ){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is C";
    }
    else if (avg <40){
        cout<< "Your Average is: "<<avg<<endl;
        cout<<"Grade obtained is F";
    }else if(avg >100 || avg<0){
        cout<<"INVALID INPUT!!";
    }

    return 0;

}
/*  OUTPUT
Enter the marks of Physics: 95
Enter the marks of Chemistry: 78
Enter the marks of Maths: 90
Enter the marks of Biology: 100
Enter the marks of English: 94
Your Average is: 91.4
Grade obtained is O

Enter the marks of Physics: 40
Enter the marks of Chemistry: 13
Enter the marks of Maths: 25
Enter the marks of Biology: 17
Enter the marks of English: 21
Your Average is: 23.2
Grade obtained is F

Enter the marks of Physics: 1000
Enter the marks of Chemistry: 902
Enter the marks of Maths: 63738
Enter the marks of Biology: 1783
Enter the marks of English: 90829
INVALID INPUT!!
*/