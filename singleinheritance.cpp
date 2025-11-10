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
int main(){
    child c;

}