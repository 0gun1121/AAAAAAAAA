#include <iostream>
using namespace std;

//call by address �ּҿ� ���� ȣ��
void swap(int* a1, int* a2)
{    // �Լ� ����
    int temp = *a1; // �ӽú��� temp�� a1�� ����Ű�� ������ �� ����
    *a1 = *a2; // a1�� ����Ű�� ������ a2�� ����Ű�� ������ �� ����
    *a2 = temp; // a2�� ����Ű�� ������ temp�� �� ����
}

int main() {
    int a = 1; // a �ʱ�ȭ
    int b = 2; // b �ʱ�ȭ
     
    int* a1;  // a1�̶�� ������ ����
    a1 = &a;  // a1�� a�� �ּҰ��� ����

    int* a2;  // a2��� ������ ����
    a2 = &b;  // a2�� b�� �ּҰ��� ����

    cout << a2 << endl;   // a2 ���,(b�� �ּҰ����)
    cout << a1 << endl;   // a1 ���,(a�� �ּҰ����)
}

