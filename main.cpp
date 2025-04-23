#include <iostream>
#include <string>

using namespace std;

void bublesort(int arr[], int n) {

    for(int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]); 
            }
        }
    }
}

void printArry(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = { 4, 1, 3, 5, 2 };

    bublesort(arr, n);
    printArry(arr, n);
    return 0;
}
