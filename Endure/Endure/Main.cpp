#include <iostream>
#include <vector>

using namespace std;

class Test {
public:
    Test() { std::cout << "Constructor\n"; }
    Test(const Test&) { std::cout << "Copy Constructor\n"; }
    Test(Test&&) noexcept { std::cout << "Move Constructor\n"; }
};

// 복사 (lvalue) 오버로딩
void push_to_vector(std::vector<Test>& vec, const Test& obj) {
    std::cout << "[push_to_vector] Copy Version\n";
    vec.push_back(obj);
}

// 이동 (rvalue) 오버로딩
void push_to_vector(std::vector<Test>& vec, Test&& obj) {
    std::cout << "[push_to_vector] Move Version\n";
    vec.push_back(obj); 
}

int main() {
    std::vector<Test> vec;

    Test a;  // 생성자 호출
    push_to_vector(vec, a);   // lvalue → 복사 발생

    cout << endl;
    push_to_vector(vec, Test()); // rvalue → 이동 발생
}
