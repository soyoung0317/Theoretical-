#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct TEST
{
    string str;  
    int num;          
}TEST;
int main() {
    int* ptr1 = (int*)malloc(sizeof(int));
    *ptr1 = 10;

    printf("ptr1 값[%d]\n", *ptr1);
    int* ptr2 = (int*)realloc(ptr1, sizeof(int)); // realloc 을 같은 크기로 호출
    *ptr2 = 20;

    printf("ptr1 주소[%p]    ptr2 주소[%p] --- 같은 주소\n", ptr1, ptr2);
    printf("ptr2 값[%d]\n", *ptr1);

    printf("ptr2 주소[%p]", ptr2);
    int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 10); // realloc 을 보다 큰 크기로 호출
    *ptr3 = 30;

    printf("    ptr3 주소[%p] --- 달라진 주소\n", ptr3);
    printf("ptr3 값[%d]\n", *ptr3);

    return 0;
}
