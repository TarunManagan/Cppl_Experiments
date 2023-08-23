/*PRN: 22070123118
Experiment_11(a)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double ht,breadth,len;
};
int main(){
    cube volume;
    cout<<"Enter the height, breadth anf lenght of the cube: ";
    cin>>volume.ht>>volume.breadth>>volume.len;
    cout<<endl<<"The volume of the cube is: "<<volume.ht*volume.breadth*volume.len;
    return 0;
}

/*OUTPUT
Enter the height, breadth anf lenght of the cube: 2 3 4
The volume of the cube is: 24
*/

/*PRN: 22070123118
Experiment_11(b)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double ht,breadth,len;
        double vol_cube(){
            cout<<"Enter the height, breadth anf lenght of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth anf lenght of the cube: 4 5 6
The volume of the cube is: 120
*/
