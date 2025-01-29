#include <iostream>
using namespace std;

class CoffeeMachine {

    private:
      string name;

    private:
      void addWaterAndCoffee(){
        cout << "Coffee Machine of name "<< name <<"."<< endl ;
        cout << "Adding water and coffee" << endl;
      }

      void addSugar(){
            cout << "Do you want sugar? " << endl
             << "Press 1 for Yes or 2 for No. " << endl;
             int choice;
             cin >> choice;
             if(choice == 1){
                cout << "Adding sugar" << endl;
             }else if(choice == 2){
                cout << "No sugar added" << endl;
             }else{
                cout << "Invalid choice" << endl;
                addSugar();
             }
      }

    public:

    void setName(string name){
        if(name.size() > 5){
            cout << name << "is too long" << endl ;

        }else{
            this->name = name;
            cout << name << "Changed successfully" << endl;
        }
    }
     void brewEspresso(string choice){
        cout << "Starting to make " << choice << endl;
        this->addWaterAndCoffee();
        this->addSugar();
        cout << " Your "<< choice << "is ready"<< endl;
     }

     public:
      CoffeeMachine(string name){
        this->name = name;
      }

      ~CoffeeMachine(){
        cout << "Destroyed"<< endl; 
      }


};


int main(){
    CoffeeMachine CoffeeMachine("Machine");
    CoffeeMachine.brewEspresso("Hot Coffee");
    return 0;
}