#include <iostream>
using namespace std;

struct StudentData {
    int nim;
    int UTS;
    int UAS;
};
StudentData Student[50];

int main() 
{
    int n;
    cout << "Enter Amount of Students: ";
    cin >> n;
    
    cout << "Student Data: " << endl;
for (int i=0; i<n; i++) {
    cout << "Student nim: ";
    cin >> Student[i].nim;
    cout << "Student UTS Value: ";
    cin >> Student[i].UTS;
    cout << "Student UAS Value: ";
    cin >> Student[i].UAS;
}
cout << "---------------------" << endl;
for (int i=0; i<n; i++){
    cout << "nim: " << Student[i].nim << endl;
    cout << "Average Score: " << (Student[i].UTS + Student[i].UAS)/2 << endl;
}
return 0;
}
