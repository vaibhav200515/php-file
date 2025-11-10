#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){ // This is constructor use to intailize object values
        length=0; // default constructor
        breadth=0;

    }

    Rectangle(int x, int y){ // paramaetrised constructor - arguments passesd
        length=x;
        breadth=y;
    }
    Rectangle(Rectangle& r){ // copy constructor 
    length=r.length;
    breadth=r.breadth;
    }
    ~Rectangle(){    // destructor means to delete object after using 
            cout<<"destructor is called"<<endl;
        }
};
    int main(){
        Rectangle s1;
        cout<<s1.length<<' '<<s1.breadth<<endl;

        Rectangle s2(3,4);
        cout<<s2.length<<'-'<<s2.breadth<<endl;

        Rectangle s3=s2;
        cout<<s3.length<<'-'<<s3.breadth<<endl;
        
        
        return 0;
    
}