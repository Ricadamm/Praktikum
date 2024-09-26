#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> vec(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

   cout << "Reversed vector: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
