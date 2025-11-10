#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main() {
    int arr[5] = {5,3,1,4,2};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}
