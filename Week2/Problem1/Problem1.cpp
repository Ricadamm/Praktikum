#include <iostream>
using namespace std;

int main()
{
    cout << "Payslip for Employee:" << endl;
    cout << "....................." << endl;


    string Name;
    cout << "Name: ";
    getline(cin, Name);

    float Gross;
    cout << "Gross Salary: " << "Rp";
    cin >> Gross ;

    float Tax = (0.2)*Gross;
    cout << fixed << "Tax (20%):  " << "Rp" << Tax << endl;

    float Installment;
    cout << "Installment: " << "Rp";
    cin >> Installment;

    float Insurance;
    cout << "Insurance: " << "Rp";
    cin >> Insurance ;

    float Net = Gross - Tax - Installment - Insurance;
    cout << fixed << "Net Salary: " << "Rp " << Net;

}

int test_num = 1;
    while (testFile >> input && getline(testFile >> ws, expected_output)) {
        string output = Problem1(input);  // Call the function with input
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                 << expected_output << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
