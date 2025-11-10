#include<iostream> // SINGLE INHERITANCE 
using namespace std; 
class Parent{
    public:
    Parent(){
    cout<<"Parent class"<<endl;

    }
    };

class child: public Parent{
    public:
    child(){
        cout<<"Child class"<<endl;
    }
};
class grandchild: public child{ // Multiple inheritance 
    public:
    grandchild(){
        cout<<"GrandChild class"<<endl;
    }
};
int main(){
    child c;

}