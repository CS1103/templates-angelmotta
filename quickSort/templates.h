#ifndef QUICKSORT_TEMPLATES_H
#define QUICKSORT_TEMPLATES_H

template <typename T1, typename  T2>
void swap(T1* a, T2* b){
    auto t = *a;
    *a = *b;
    *b = t;
}

template <typename T1, typename T2, typename T3>
int partition (T1 arr[], T2 low, T3 high){
    auto pivot = arr[high];    // pivot is last element
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++){
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot){
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);                 // retorna index entero
}

template <typename T1, typename T2>
void printArray(T1 arr[], T2 size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

template <typename T1, typename T2, typename T3>
void quickSort(T1 arr[], T2 low, T3 high){
    if (low < high){
        auto pi = partition(arr, low, high);
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

#endif //QUICKSORT_TEMPLATES_H
