#include <iostream>
#include <string>
using namespace std;

struct Student {
    string NISN;
    string name;
    int value;
};


void Data(Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].NISN << " " << arr[i].name << " " << arr[i].value << endl;
    }
}

void insertion(Student arr[], int n, bool value) {
    for (int i = 1; i < n; i++) {
        Student key = arr[i];
        int j = i - 1;
        if (value) {
            while (j >= 0 && arr[j].value > key.value) {
                arr[j + 1] = arr[j];
                j--;
            }
        } else {
            while (j >= 0 && arr[j].NISN > key.NISN) {
                arr[j + 1] = arr[j];
                j--;
            }
        }

        arr[j + 1] = key;
    }
}

void selection(Student arr[], int n, bool value) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (value) {
                if (arr[j].value < arr[minIndex].value) {
                    minIndex = j;
                }
            } else {
                if (arr[j].name < arr[minIndex].name) {
                    minIndex = j;
                }
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void bubble(Student arr[], int n, bool value) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (value) { 
                if (arr[j].value < arr[j + 1].value) {
                    swap(arr[j], arr[j + 1]);
                }
            } else { 
                if (arr[j].NISN < arr[j + 1].NISN) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
}

int binarysearch(Student arr[], int n, string targetNISN) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].NISN == targetNISN) {
            return mid;
        } else if (arr[mid].NISN < targetNISN) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void name (Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i].value == 60) {
            arr[i].name = "Joko";
        }
    }
}

int main() {
    Student students[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int n = 7;

    cout << "Sorting by NISN (Insertion Sort):" << endl;
    insertion(students, n, false);
    Data(students, n);
    cout << endl;

    cout << "Sorting by NISN (Selection Sort):" << endl;
    selection(students, n, false);
    Data(students, n);
    cout << endl;
    
    cout << "Sorting by NISN (Bubble Sort):" << endl;
    bubble(students, n, false);
    Data(students, n);
    cout << endl;
    
    cout << "Sorting by Value (Insertion Sort):" << endl;
    insertion(students, n, true);
    Data(students, n);
    cout << endl;
    
    cout << "Sorting by Value (Selection Sort):" << endl;
    selection(students, n, true);
    Data(students, n);
    cout << endl;
    
    cout << "Sorting by Value (Bubble Sort):" << endl;
    bubble(students, n, true);
    Data(students, n);
    cout << endl;
    
    string targetNISN = "9950310962";
    int index = binarysearch(students, n, targetNISN);
    if (index != -1) {
        cout << "Found student value with NISN " << targetNISN << ": "  << students[index].value << endl;
    cout << endl;

    
    name(students, n);
    cout << "Changed name with value 60" << endl;
    Data(students, n);

    return 0;
  } 
}

