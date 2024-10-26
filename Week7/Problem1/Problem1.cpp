#include <iostream>
using namespace std;

void calculate(int a, int b, char op) {
    if (op == '+') {
        cout << "Result: " << (a + b) << endl;
    } else if (op == '-') {
        cout << "Result: " << (a - b) << endl;
    } else {
        cout << "Wrong operation" << endl;
    }
}

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation: ";
    cin >> op;
    calculate(a, b, op)
  
    return 0;
}
