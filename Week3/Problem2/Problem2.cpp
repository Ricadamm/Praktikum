#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Problem1(int input) {
    return to_string(input);
}

int main()
{
    double num1, num2, num3;
    
    cout << "Enter the First Number: ";
    cin >> num1;
    
    cout <<"Enter the Second Number: ";
    cin >> num2;
    
    cout << "Enter the Third Number: ";
    cin >> num3;
    
    double largest;
    
    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
     
     cout << "The Largest Number: " << largest << endl;
    



    std::ifstream testFile("test.txt");
    int input;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = Problem2(input);
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
