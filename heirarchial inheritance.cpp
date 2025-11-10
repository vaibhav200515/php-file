#include<iostream> // Heirarchail INHERITANCE means ek class ko 
using namespace std; // kafi baar dusri class mei daal sakte hain
class Parent{
    public:
    Parent(){
    cout<<"Parent class"<<endl;

    }
    };

class child: public Parent{ // dono class and grandchild refering 
    public:                 // to same parent class
    child(){
        cout<<"Child class"<<endl;
    }
};
class grandchild: public Parent{ // Multiple inheritance 
    public:
    grandchild(){
        cout<<"GrandChild class"<<endl;
    }
};
int main(){
    grandchild c;

}