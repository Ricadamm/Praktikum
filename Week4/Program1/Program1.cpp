#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Problem2(int input) {
    return to_string(input);
}


int main() {
    int n, i, sum;

    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the sum of natural numbers up to n
    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output the result
    cout << "Sum = " << sum << endl;

}
