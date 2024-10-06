#include <iostream>
using namespace std;

int linearSearch(int arry[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arry[i] == target){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 5;

    cout << "the positon is " << linearSearch(arr, size, target)  << endl;
    return 0;
}