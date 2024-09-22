#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Problem1(int input){
return to_string(input);
}

int main()
{

    cout << "Payslip for Employee:" << endl;
    cout << "....................." << endl;

    string Name;
    cout << "Name: ";
    getline(cin, Name);  

    float Gross;
    cout << "Gross Salary: " << "Rp";
    cin >> Gross;

    float Tax = 0.2 * Gross;
    cout << fixed << "Tax (20%): " << "Rp" << Tax << endl;

    float Installment;
    cout << "Installment: " << "Rp";
    cin >> Installment;

    float Insurance;
    cout << "Insurance: " << "Rp";
    cin >> Insurance;

    float Net = Gross - Tax - Installment - Insurance;
    cout << fixed << "Net Salary: " << "Rp " << Net << endl;


    ifstream testFile("test.txt");
    int input;
    string expected_output;

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
