/*
    홍정모 연구소 https://honglab.co.kr/
*/

#include <iostream>

using namespace std;

int main()
{
    // For 기본 예제
    for (int i = 0; i < 10; i++) // for(A; B; C) A:변수 선언, B: B의 조건이 False가 아니라면 실행, 실행 완료 후 실행할 행동.
    {
        cout << i << " ";
    }
    cout << endl;

    // 배열 데이터 출력 연습 문제로 제공
    // 힌트: sizeof(my_array)
    int my_array[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    for (int i =0; i<sizeof(my_array) / sizeof(int); i++)
    {
        cout << my_array[i] <<" ";
    }
    cout << endl;

    // 문자열 출력
    char my_string[] = "Hello, World!"; // 배열 크기를 알아서 결정

    // 문자열을 한 글자씩 출력하기
    // cout << my_string << endl; 사용 X
    // 힌트: sizeof(), '\0', break,

    for (int i =0; i<sizeof(my_string) / sizeof(char); i++)
    {
        if (my_string[i] == '\0')
            break;
        cout << my_string[i] << " ";
    }
    cout << endl;

    // while 기본 예제
    /*
    int i = 0;
    while (i < 10)
    {
        cout << i << " ";
        i++; // 무한반복 주의 안내
    }
    cout << endl;
    */

    // 실습 문제
    while (true) // for(;true;)
    {
        cout << i << " ";
        i ++;
        if (i == 10)
            break;
    }
    cout << endl;
    
    // 런타임오류 주의
    // while문으로 문자열 한글자씩 출력하기
    // 힌트 && logical and

    /*
    int i = 0;
    while (...)
    {
        // TODO:
    }
    cout << endl;
    */

    // while문 사용해서 my string 출력하는 문제 풀어보기
    int i = 0;
    while(i<sizeof(my_string) / sizeof(char) && my_string[i] != '\0')
    {
        cout << my_string[i] << " ";
        i ++;
    }
    cout << endl;
            
    
    return 0;
}
