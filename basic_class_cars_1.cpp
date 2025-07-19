#include<iostream>
#include<string>
using namespace std;

class cars{            // declaration class class_name{  };  and used to specify the object.. 
public:             // acces_specifier or modifiier (public:,private:,...)
    string name; 
    int cost;           // data members  variables declared in class
 
    void details()
    {
        cout << name <<" "<< cost << endl; // member function functions in side class
    }

};
int main()
{
    cars car; //creation of object
    car.name  = "renger";  // accessing the data members;
    car.cost  = 1500000;   

    car.details(); // acessing the member functions

}