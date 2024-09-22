#include <iostream>
using namespace std;

int main() {
    int n, sum;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the sum of natural numbers up to n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    cout << "Sum = " << sum << endl;

}
