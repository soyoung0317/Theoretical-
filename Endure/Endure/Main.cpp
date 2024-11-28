#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    vector<int> vec;
    vec.reserve(4);

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    vec.resize(7);

    for (auto val : vec)
        cout << val << " ";


    return 0;
}
