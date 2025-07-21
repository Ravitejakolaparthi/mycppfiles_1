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

    cars ()  // cars is constructor is called when a oject is instantied  it has high precedence in code it is excuted in runtime firstover
    {
          cout << "cars is called\n"; 
    }
    ~ cars (){  // destructor free memmory leaks dealloctes the memmory of the object created
        cout <<"cars is destruct\n";
    }

};
int main()
{
    cars car; //creation of object
    car.name  = "renger";  // accessing the data members;
    car.cost  = 1500000;   

    car.details(); // acessing the member functions 

}

// ======================================================================
// ======================================================================
//  more clarity and another example
#include<iostream>
#include<string>
using namespace std;
class toys{              //plan for one toy
    public :
    
    string toy_name;  // data_members require data for toy like what details
    int toy_no;
    int toy_cost;
 
    // parameterized_construtor 
    toys(string ch,int x,int y){    // it is used to initilize the data when object created time
        toy_name = ch;
        toy_no = x;
        toy_cost = y;
    }
    // member_functions used to do functions with data_members like displaying details updating them etc...
    // lets say print or display them
    void display()
    {
        cout  << toy_name << " " << toy_no << " " << toy_cost << endl;
    }
};
int main ()
{   
       // now create an object using class_name like  ::> class_name object_name
    //    toys toy1;
    //    toys toy2;  this rises error it's error
    //    toys toy3;
       // initilize the data to oject using constructor
       //i.e
       // correct is
       toys toy1("car",101,2000);
       toys toy2("bike",100,1500);
       toys toy3("barbie_doll",99,1200);
       // displaying using member function 
       toy1.display();
       toy2.display();
       toy3.display();

}
