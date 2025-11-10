#include<iostream> 
using namespace std;

class Encap {
private:
    int x;
public:
    void read(int n) {
        x = n;
    }

    int display() {
        return x;
    }
};

int main() {
    Encap s1;
    s1.read(3);
    cout << s1.display() << endl;

    return 0;
}
