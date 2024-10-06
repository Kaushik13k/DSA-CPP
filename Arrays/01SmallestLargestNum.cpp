#include <iostream>
using namespace std;


int main(){
    int nums[] = {5, 15, 22, 1, -15, 24};
    int largest = INT_MIN;
    int smallest = INT_MAX;
    
    int size = 6;

    for (int i=0; i < size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Largest number is: " << largest << endl;
    cout << "Smallest number is: " << smallest << endl;
    return 0;

}