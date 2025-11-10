#include<iostream> 
using namespace std;

class Parent{

private:
    int x;

public:

    int y;

protected:
    int z;  
};// THESE ARE INHERITANCE VISIBILITY MODE:PUBLIC,PRIVATE,PROTECTED
class Child1: public Parent{
    //x will be inaccessible
    //y will be accessible
    //z will be remain protected
};
class Child2: private Parent{
    //x will be private
    //y will be private
    //z will be inaccessible
};
class Child3: protected Parent{
    //x will be protected
    //y will be protected
    //z will be inaccessible
};
int main() {
    

    return 0;
}
