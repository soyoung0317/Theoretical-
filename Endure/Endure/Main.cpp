#include <iostream>
using namespace std;

class MyClass {
public:
    int count = 0;
    // 디폴트 생성자
    MyClass() {
        cout << "Default constructor called" << endl;
    }
};

int main() {
    //MyClass obj = 10;  // 암시적 변환: int -> MyClass
    return 0;
}
