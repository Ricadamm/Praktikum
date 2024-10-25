#include <iostream>
using namespace std;

void calculate(int a, int b, char operation) {
    if (operation == '+') {
        cout << "Result: " << (a + b) << endl;
    } else if (operation == '-') {
        cout << "Result: " << (a - b) << endl;
    } else {
        cout << "Wrong operation" << endl;
    }
}

int main() {
    int a, b;
    char operation;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operation: ";
    cin >> operation;
  
    return 0;
}
