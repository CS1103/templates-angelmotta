#include <iostream>
#include <vector>
#include "templates.h"


/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */

int main() {
    std::cout << "Hello, World!" << std::endl;
    int arr[] = {10, 7, 8, 9, 1, 5};
    std::vector<int> g1;
    for (int i = 5; i >= 0; i--){
        g1.push_back(i);
    }

    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);     // low = 0; high = n -1 = 5
    //quickSort(g1, 0, n-1);
    //printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
