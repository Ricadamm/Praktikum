#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

float calculateNetSalary(float Gross, float Installment, float Insurance) {
    float Tax = 0.2 * Gross;
    return Gross - Tax - Installment - Insurance;
}

int main() {
    ifstream testFile("test.txt");
    if (!testFile) {
        cerr << "Unable to open file test.txt" << endl;
        return 1;
    }

    string name;
    float Gross, Installment, Insurance;
    string expected_output;
    int test_num = 1;

    while (getline(testFile, name) && testFile >> Gross >> Installment >> Insurance) {
        testFile.ignore(); // Ignore the newline after the last float
        getline(testFile, expected_output); // Read the expected output

        // Calculate the output
        float netSalary = calculateNetSalary(Gross, Installment, Insurance);
        stringstream output;
        output << fixed << setprecision(2) << "Rp " << netSalary;

        // Compare output
        if (output.str() == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                 << expected_output << "\", Got: \"" << output.str() << "\"" << endl;
        }

        test_num++;
        testFile.ignore(); // Ignore the newline before the next test
    }

    testFile.close();
    return 0;
}
