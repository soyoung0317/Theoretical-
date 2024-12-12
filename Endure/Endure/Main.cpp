#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int test(int a, int b)
{
    return a + b;
}

float test(int a, int b)
{
    return float(a + b);
}
int main() {

    int i;

    int test = 0x12345678;

    char* ptr = (char*)&test; // 1 바이트만을 가리키는 포인터를 생성함.



    for (i = 0; i < sizeof(int); i++)

    {

        printf("%x", ptr[i]); // 1 바이트씩 순서대로 그 값을 출력함.

    }

    int* a = new int;

    int* b = nullptr;


    return 0;
}
