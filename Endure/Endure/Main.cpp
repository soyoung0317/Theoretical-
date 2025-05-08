#include <iostream>
#include <array>

using namespace std;

int main()
{

	const char name[] = "TEST";

	auto& arr2 = name;  // 배열 참조 그대로 유지 const char(&)[8]


	return 0;
}