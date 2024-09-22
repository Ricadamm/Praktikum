#include <iostream>
using namespace std;

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
    
}
