#include <iostream>
using namespace std;

void swap(int arr[], int start, int end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(arr, start, end);
        start ++;
        end --;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArray(arr, size);

    cout << "the reversed array is: " << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}