#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Problem1(int input) {
    return to_string(input);
}


int main() {
    int n, i, sum;


    cout << "Enter an integer: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        sum += i;
    }


    cout << "Sum = " << sum << endl;

   std::ifstream testFile("test.txt");
    int input;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input) {
        std::getline(testFile, expected_output); 
        std::string output = Problem1(input);
        if (output == expected_output) {
            std::cout << "Test " << test_num << " passed!" << std::endl;
        } else {
            std::cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << std::endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
