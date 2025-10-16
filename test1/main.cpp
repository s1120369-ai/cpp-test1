#include <iostream>
using namespace std;

int main() {
    // 第一部分：印出星號三角形
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; // 分隔兩部分

    // 第二部分：印出九九乘法表
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= 9) {
            cout << i << " * " << j << " = " << i * j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
