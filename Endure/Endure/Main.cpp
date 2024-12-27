#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Base {};
class Sibling1 : public Base {
public:
    void hello() { cout << "Sibling1::hello()" << endl; }
};
class Sibling2 : public Base {
public:
    void hello() { cout << "Sibling2::hello()" << endl; }
};


int main() {
    Sibling1 s1;
    Base* basePtr = &s1; // Sibling1 -> Base 업캐스팅
    Sibling2* s2 = static_cast<Sibling2*>(basePtr); // Sibling2로 다운캐스팅 (비정상적 변환)

    // 정의되지 않은 동작 발생
    s2->hello(); // 런타임 에러 가능성 있음
    return 0;
}
