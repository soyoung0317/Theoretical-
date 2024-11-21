#include <iostream>
#include<vector>
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
    std::vector<std::pair<int, int>> v;

    // push_back은 pair 객체를 먼저 생성하고 복사하여 삽입합니다.
    std::pair<int, int> p(1, 2);
    v.push_back(p);
    v.push_back(make_pair(1,2));

    // emplace_back은 pair 객체를 직접 생성하여 삽입합니다.
    v.emplace_back(1, 2); // 새로운 pair<int, int> 객체를 생성하여 삽입



    return 0;
}
