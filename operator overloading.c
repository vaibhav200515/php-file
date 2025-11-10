#include <iostream.h>
using namespace std;
class Number {
private:
    int value;

public:
    Number(int val = 0) : value(val) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);
    Number sum = num1 + num2;

    num1.display();
    num2.display();
    sum.display();

    return 0;
}
/*In this code, we define a Number class with an integer value.
 We overload the + operator to perform binary addition of two 
 Number objects. Inside the main function, we create two Number
  objects (num1 and num2), add them using the overloaded + 
  operator, and store the result in sum.*/
