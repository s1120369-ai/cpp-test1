#include <iostream>
using namespace std;

int main() {
    int stack[5];   // 宣告一個可容納 5 個整數的堆疊陣列
    int top = -1;   // top 為堆疊頂端的索引，初始為 -1 表示空堆疊

    // ---- 模擬壓入（push）動作 ----
    top++;
    stack[top] = 10;
    top++;
    stack[top] = 20;
    top++;
    stack[top] = 30;

    // 顯示目前堆疊內容
    cout << "目前堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl << endl;

    // ---- 模擬彈出（pop）動作 ----
    if (top >= 0) {
        cout << "彈出元素: " << stack[top] << endl;
        top--;
    } else {
        cout << "堆疊是空的，不能彈出!" << endl;
    }

    // 顯示彈出後堆疊內容
    cout << "彈出後堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
