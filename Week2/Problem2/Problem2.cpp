#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a;
    int b;
    int c;


    cout << "Value of a: ";
    cin >> a;
    cout << "Value of b: ";
    cin >> b;
    cout << "Value of c: ";
    cin >> c;

   float D = b*b-(4*a*c);
    cout << "D: b*b-(4ac) = " << D << endl;

    if (D>0) {
       float x1 = (-1*b + sqrt(D)) / (2*a);
       float x2 = (-1*b - sqrt(D)) / (2*a);
       cout << "D>0," << endl;
       cout << "Result: x1 = "<< x1 <<endl;
       cout << "Result: x2 = "<< x2 <<endl;
        
    }
    

    if  (D==0) {
       float x = (-b)/2*a;
       cout << "D=0," << endl;
       cout << "Result: x = " << x << endl;
        
    }
    

   if (D<0) {
        cout << "D<0, "<< endl;
        cout << "Result: There are no real roots" << endl;
       
   }
   
}

int main() {
    std::ifstream testFile("test.txt");
    int input;
    std::string expected_output;

    if (!testFile) {
        std::cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && std::getline(testFile >> std::ws, expected_output)) {
        std::string output = fibonacci(input);
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
