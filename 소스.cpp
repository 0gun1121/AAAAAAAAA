#include <iostream>
using namespace std;
// 동적으로 할당된 메모리는 범위(scope)가 없다.
// 즉, 명시적으로 할당이 해제되거나 프로그램이 종료될 때까지 할당된 상태를 유지한다.
// 다만 이로 인해 메모리 누수(memory leak)이 발생할 수 있다.
int* foo() {
    // 10이란 값을 가지는 동적할당 된 int 익명 변수를
    // a라는 포인터 변수가 가리키고 있다.
    int* a = new int{ 10 };
    return a; // a는 반환되면서 함수가 종료되어 사라진다.
}   

int main() {
    cout << foo << endl;
}