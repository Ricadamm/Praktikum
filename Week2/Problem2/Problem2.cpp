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
