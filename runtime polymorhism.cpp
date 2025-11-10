#include<iostream> 
using namespace std; 
class Parent{
    public:
    virtual void print(){
    cout<<"Parent class"<<endl;
    }
    void show(){
    cout<<"Parent class"<<endl;
    }
};
class child: public Parent{
    public:
    void print(){
    cout<<"Child class"<<endl;
    }
    void show(){
    cout<<"Child class"<<endl;
    }
};

int main(){
    Parent *p;// runtime pe object ko override kara diya
    child  c;
    p=&c;
    p->print();
    p->show();
    return 0;

}