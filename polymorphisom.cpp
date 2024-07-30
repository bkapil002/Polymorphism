#include<iostream>
using namespace std;

class Baseclass{
    public:
    int var_base;

    void display()
    {
        cout << "Base class display function "<<var_base << endl;
    }
};

class Derivedclass: public Baseclass{
    public:
    int var_derived;

    void display(){
        cout<<"the value or base class "<<var_base<<endl;
        cout<<"the value or derived class "<<var_derived<<endl;
    }
};

int main(){

    // Baseclass value
    Baseclass * base_class_pinter;
    Derivedclass obj_deriven;
    base_class_pinter = &obj_deriven;
    base_class_pinter->var_base = 10;
    base_class_pinter->display();


    // drived class

    Derivedclass * drived_class_pinter = & obj_deriven;
    drived_class_pinter->var_derived = 200;
    drived_class_pinter->display();
   return 0;
};