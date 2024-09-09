/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

const int kMaxStr = 100; // 전역 변수 소개

// 함수 (선언과 정의 분리 가능)
int Add(int a, int b)
{
    return a + b; // 반환값 안내
}

// 반환 자료형이 지정되지 않았음 (void)
void Add(int a, int b, int *c) // C / C++에서는 반환을 변수 하나만 할 수 있음. 여러 개 반환하고 싶을 때 포인터 변수를 인자로 받아서 역참조를 이용하는 방식으로 여러 변수 저장 가능.. 
{
    *c = a + b;
}

int main()
{
    cout << Add(1, 2) << endl;

    int sum;
    Add(4, 5, &sum);

    cout << sum << endl;

    return 0;
}
