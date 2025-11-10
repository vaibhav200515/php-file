#include <iostream>
using namespace std;
class MyClass {
public:
    static int count;

    MyClass() {
        count++;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showCount(); // Outputs: Count: 3

    return 0;
}
//MyClass has a static member variable count and a static member function showCount.
//The constructor increments count whenever a new object of MyClass is created.
//In main(), we create three objects of MyClass, and then we call the static member function showCount to display the current count, which will be 3.




