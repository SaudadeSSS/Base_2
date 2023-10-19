#include <cstdint>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
//在程序中定义一个整形变量，赋予1~100的值，要求用户猜这个数，比较两个数的大小，把结果提示给用户，直到猜对为止。分别使用while，do...while语句实现循环

void use_while() {
    cout << "while语句实现循环\n\n";
    srand(time(NULL));
    int n = rand() % 100 + 1;
    int a, i = 1;
    while (i == 1) {
        cout << "输入1-100中猜测的数：";
        cin >> a;
        if (a > n) {
            cout << "实际比这个数小" << endl;
        }
        else if (a < n) {
            cout << "实际比这个数大" << endl;
        }
        else {
            cout << "您猜对了" << endl;
            i = 0;
        }
    }
}

void use_do_While() {
    cout << "do...while语句实现循环\n\n";
    srand(time(NULL));
    int n = rand() % 100 + 1;
    int a, i = 1;
    do {
        cout << "输入1-100中猜测的数：";
        cin >> a;
        if (a > n) {
            cout << "实际比这个数小" << endl;
        }
        else if (a < n) {
            cout << "实际比这个数大" << endl;
        }
        else {
            cout << "您猜对了" << endl;
            i = 0;
        }
    } while (i == 1);
}

int main() {
    int n;
    cout << "输入1使用while方法否则do...while语句实现循环:\n";
    cin >> n;
    if (n == 1) {
        use_while();
    }
    else {
        use_do_While();
    }
    return 0;
}