#include<iostream> // Compile time Polymorphism
using namespace std; 
class Sum{
    public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;

    }
    void add(int x,int y,int z){
        int sum= x+y+z;
        cout<<sum<<endl;

    }
    void add(float x,float y){
        float sum =x+y;
        cout<<sum<<endl;

    }
}; 
int main(){
    Sum s1;
    s1.add(3,4,7);
}