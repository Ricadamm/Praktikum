#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

string Problem1(int input) {
    return to_string(input);
}


int main() 
{
    float a,b,c;

    cout << "Value of a: ";
    cin >> a;
    cout << "Value of b: ";
    cin >> b;
    cout << "Value of c: ";
    cin >> c;

   float D = b*b-(4*a*c);
    cout << "D: b*b-(4ac) = " << D << endl;

    if (D>0) 
    {
       float x1 = (-1*b + sqrt(D)) / (2*a);
       float x2 = (-1*b - sqrt(D)) / (2*a);
       cout << "D>0," << endl;
       cout << "Result: x1 = "<< x1 <<endl;
       cout << "Result: x2 = "<< x2 <<endl;
        
    }
    

    else if (D==0) 
    {
       float x = (-b)/2*a;
       cout << "D=0," << endl;
       cout << "Result: x1 and x2 are real and equal" << endl;
        
    }
    

   else 
   {
        cout << "D<0, "<< endl;
        cout << "Result: x1 and x2 are imaginary" << endl;
       
   }
   
}


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
