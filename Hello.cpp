#include <iostream>
using namespace std;

//call by address 주소에 의한 호출
void swap(int* a1, int* a2)
{    // 함수 정의
    int temp = *a1; // 임시변수 temp에 a1이 가리키는 변수의 값 대입
    *a1 = *a2; // a1이 가리키는 변수에 a2가 가리키는 변수의 값 대입
    *a2 = temp; // a2가 가리키는 변수에 temp의 값 대입
}

int main() {
    int a = 1; // a 초기화
    int b = 2; // b 초기화
     
    int* a1;  // a1이라는 포인터 생성
    a1 = &a;  // a1에 a의 주소값을 대입

    int* a2;  // a2라는 포인터 생성
    a2 = &b;  // a2에 b의 주소값을 대입

    cout << a2 << endl;   // a2 출력,(b의 주소값출력)
    cout << a1 << endl;   // a1 출력,(a의 주소값출력)
}

