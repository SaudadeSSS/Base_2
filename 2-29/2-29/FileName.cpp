#include <cstdint>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
//�ڳ����ж���һ�����α���������1~100��ֵ��Ҫ���û�����������Ƚ��������Ĵ�С���ѽ����ʾ���û���ֱ���¶�Ϊֹ���ֱ�ʹ��while��do...while���ʵ��ѭ��

void use_while() {
    cout << "while���ʵ��ѭ��\n\n";
    srand(time(NULL));
    int n = rand() % 100 + 1;
    int a, i = 1;
    while (i == 1) {
        cout << "����1-100�в²������";
        cin >> a;
        if (a > n) {
            cout << "ʵ�ʱ������С" << endl;
        }
        else if (a < n) {
            cout << "ʵ�ʱ��������" << endl;
        }
        else {
            cout << "���¶���" << endl;
            i = 0;
        }
    }
}

void use_do_While() {
    cout << "do...while���ʵ��ѭ��\n\n";
    srand(time(NULL));
    int n = rand() % 100 + 1;
    int a, i = 1;
    do {
        cout << "����1-100�в²������";
        cin >> a;
        if (a > n) {
            cout << "ʵ�ʱ������С" << endl;
        }
        else if (a < n) {
            cout << "ʵ�ʱ��������" << endl;
        }
        else {
            cout << "���¶���" << endl;
            i = 0;
        }
    } while (i == 1);
}

int main() {
    int n;
    cout << "����1ʹ��while��������do...while���ʵ��ѭ��:\n";
    cin >> n;
    if (n == 1) {
        use_while();
    }
    else {
        use_do_While();
    }
    return 0;
}