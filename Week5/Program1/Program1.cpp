#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    vector<string> FizzBuzzVec(100); // creating vector using datatype string with the size of 100
    int i;
    
    for ( i=0; i<100; i++){ // loop function that will continually run the code until it doesn't meet the requirements
        if ((i+1) % 3 == 0 && (i+1) % 5 == 0){ // Contains i+1 so it starts from 1, Line using modulus 3 and 5 to find out if its a multiple of 3 and 5
            FizzBuzzVec[i] = "FizzBuzz"; // Display "FizzBuzz" if its a multiple of 3 and 5
        } 
        else if ( (i+1) % 3 == 0){ // modulus using 3 to find out if its a multiple of 3
             FizzBuzzVec[i] = "Fizz"; // Display "Fizz" if its a multiple of 3
        } 
        else if ( (i+1) % 5 == 0){ //modulus using 5 to find out if its a multiple of 5
             FizzBuzzVec[i] = "Buzz"; // Display "Buzz" if its a multiple of 5
        } 
        else {
            FizzBuzzVec[i] = to_string(i+1); // changes the datatype into string if its not a multiple of 3 or 5
        }



    }
        for ( i = 0; i < 100; i++){
            cout << FizzBuzzVec[i] << ", "; // Displays the vector from 1-100
        }
        

}
