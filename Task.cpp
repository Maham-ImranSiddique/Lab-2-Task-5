
#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int marks[6] = {78, 45, 92, 60, 85, 33};

    cout << "Before Sorting:\n";
    display(marks, 6);

    selectionSort(marks, 6);

    cout << "After Sorting:\n";
    display(marks, 6);

    return 0;
}
