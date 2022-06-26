#include <iostream>

using namespace std;

bool binary_search(int *arr, int start, int end, int key) {
    
    // Base case.
    // Element not found.
    if (start > end) {
        return false;
    }
    
    int mid = start + (end - start)/2;
    
    // Element found.
    
    if (arr[mid] == key){
        return true;
    }
    
    else if (arr[mid] < key) {
        return binary_search(arr, mid+1, end, key);
    }
    
    else {
        return binary_search(arr, start, mid-1, key);
    }
    
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << binary_search(arr, 0, 9, 0) << endl;
    return 0;
}