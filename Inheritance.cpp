/*Experiment 1*/
#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "BMW";
    string color = "White";
};

class Features: public vehicle{
    public:
    string engine = "BMW N52";
    string milage = "17.42 Kmpl";
};

int main(){
    Features car;
    cout<<car.color;
    cout<<endl<<car.brand<<" "<<car.engine;
}

/*OUTPUT
White
BMW BMW N52*/
