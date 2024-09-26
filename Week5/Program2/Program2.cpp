#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the number of elements: "; 
    cin >> n;  
    vector<int> vec(n); // creating vector with the size n

    cout << "Enter the elements: "; // Asks the user to input how many elements
    for (int i = 0; i < n; ++i) { // Loop to take input from the user 
        cin >> vec[i]; // Stores the input value at at index i
    }

   cout << "Reversed vector: "; // Display the result of the reversed vector
    for (int i = n - 1; i >= 0; --i) { // Loops the vector but does it from the last index to the first index
        cout << vec[i] << " "; // outputs the result
    }
    cout << endl;

    return 0;
}
