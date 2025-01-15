#include <iostream>
using namespace std;

// define a class using the class keyword 
class Car {
       // declare a member variable
       string type ;
       string model ;
       string color ;
    public:
    // declare a member function
        void start(){
            cout << "Car started" << endl;
        }
        void stop(){
            cout << model << " " <<type << " Car stopped" << endl;
        }

        

    public : 
        // declare constructor
        Car(string model , string type , string color){
            this->model = model ;
            this->type = type ;
            this->color = color ;
        }

};

int main(){
    // create a car Object using the blueprint above 
    Car myCar("Toyota" , "Collora" , "Blue");
    // call member functions
    myCar.start();
    myCar.stop();
    return 0;
}
